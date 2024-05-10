#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 100
#define MAX_NAME_LENGTH 100
#define MAX_ROLE_LENGTH 50

 struct Player {
    char fullName[MAX_NAME_LENGTH];
    int age;
    char role[MAX_ROLE_LENGTH];
    int odiMatches;
    int totalRuns;
    int highestRun;
};
struct Player players[MAX_PLAYERS];
    int count = 0;

    void MemoryLoad();
    void showAllPlayer();
    void window();
    void ParticularPlayerInformation();
    void PlayerDetails(int i);
    void MostExperiencedPlayer();
    void NewCommerPlayer();
    void TopScorerPlayer();
    void HardHitterPlayer();
    void HighestRunTaker();
    void MVP();
    void Allrounders();
    int IsAllrounder(int n);

 int main() {
    MemoryLoad();
    while (1)
    {
        int choice;
        window();
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            showAllPlayer();
            break;

        case 2:
            ParticularPlayerInformation();
            break;

        case 3:
            MostExperiencedPlayer();
            break;

        case 4:
            NewCommerPlayer();
            break;

        case 5:
            TopScorerPlayer();
            break;
        
        case 6:
            HardHitterPlayer();
            break;
        
        case 7:
            HighestRunTaker();
            break;
        
        case 8:
            MVP();
            break;
        
        case 9:
            Allrounders();
            break;

        case 10:
            printf("Exiting .....");
            return 0;

        default:
            break;
        }
    }
    
    

    return 0;
}

void MemoryLoad(){
    char fileName[100];
    printf("Enter the input file name: ");
    scanf("%s", fileName);
    printf("Wait Loading..");
    FILE *file;
    

  file = fopen(fileName, "r");


    if (file == NULL) {
        printf("Unable to open file.\n");
    }
    else{

    while (fscanf(file, " %[^\n] %d %[^\n] %d %d %d",
                  players[count].fullName,
                  &players[count].age,
                  players[count].role,
                  &players[count].odiMatches,
                  &players[count].totalRuns,
                  &players[count].highestRun) == 6) {
        count++;
        if (count >= MAX_PLAYERS) {
            printf("Maximum number of players reached.\n");
            break;
        }
    }
    printf("Loading Complete\n");
    }
    fclose(file);
}

void showAllPlayer(){
    printf("Full Name\tAge\tPlayer Role\t\tODI Matches\tTotal Runs\tHighest Run\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t%d\t%s\t\t%d\t%d\t%d\n",
               players[i].fullName,
               players[i].age,
               players[i].role,
               players[i].odiMatches,
               players[i].totalRuns,
               players[i].highestRun);
    }
}

void window(){
    printf("1.Show All Players\n2.Show A Particular player information\n3.Show the MOST Experienced Player\n4.Show the New Commer Player\n5.Top Scorer Player \n6.Hard Hitter Player \n7.Highest Run Taker Player \n8.MOST Valuable Player \n9.Allrounders\n10.Exit/Quit\nEnter Your Choice : ");
}

void ParticularPlayerInformation(){
   int i,choice;
   for (i = 0; i < count; i++) {

    printf("%d.%s \n",i+1,players[i].fullName);
   }
    printf("Pick One Player For Details :\n");
   scanf("%d",&choice);
   PlayerDetails(choice-1);
}

void PlayerDetails(int i){
        printf("Full Name: %s\nAge: %d\nPlayer Role: %s\nODI Matches: %d\nTotal Runs: %d\nHighest Run: %d\n",
               players[i].fullName,
               players[i].age,
               players[i].role,
               players[i].odiMatches,
               players[i].totalRuns,
               players[i].highestRun);  
    }

void MostExperiencedPlayer(){
    int temp_exp= 0,teamIndex,i;
    for ( i = 0; i < count; i++) {
         if(players[i].odiMatches>temp_exp){
             teamIndex = i;
             temp_exp = players[i].odiMatches;
         }
        
               
    }
    printf("Most Exprience Player: ");
    PlayerDetails(teamIndex);
}

void NewCommerPlayer(){
    int temp_age= players[0].age,teamIndex,i;
    for ( i = 1; i < count; i++) {
         if(players[i].age>temp_age){
             teamIndex = i;
             temp_age = players[i].age;
         }
        
               
    }
    printf("New Commer Player: ");
    PlayerDetails(teamIndex);
}

void TopScorerPlayer(){
   int temp_age= 0,teamIndex,i;
    for ( i = 0; i < count; i++) {
         if(players[i].totalRuns>temp_age){
             teamIndex = i;
             temp_age = players[i].totalRuns;
         }
        
               
    }
    printf("Top Scorer Player: ");
    PlayerDetails(teamIndex);
}

void HardHitterPlayer(){
     int temp_exp= 0,teamIndex,i,avg;
    for ( i = 0; i < count; i++) {
        avg = players[i].totalRuns/players[i].odiMatches;
         if(avg>temp_exp){
             teamIndex = i;
             temp_exp = avg;
         }               
    }
    printf("Hard Hitter Player: \n");
    PlayerDetails(teamIndex);
}

void HighestRunTaker(){
     int temp_exp= 0,teamIndex,i;
    for ( i = 0; i < count; i++) {
         if(players[i].highestRun>temp_exp){
             teamIndex = i;
             temp_exp = players[i].highestRun;
         }
        
               
    }
    printf("Highest Run Taker Player: \n");
    PlayerDetails(teamIndex);
    }

void MVP(){
    int temp_exp= 0,teamIndex,i,value;
    for ( i = 0; i < count; i++) {
         if(IsAllrounder(i)){
             value = players[i].age + players[i].odiMatches + players[i].totalRuns + players[i].highestRun+ (players[i].totalRuns/players[i].odiMatches) + (players[i].highestRun/players[i].age)+ 50;
         }
         else{
             value = players[i].age + players[i].odiMatches + players[i].totalRuns + players[i].highestRun+ (players[i].totalRuns/players[i].odiMatches) + (players[i].highestRun/players[i].age);
         }
         if(value>temp_exp){
             teamIndex = i;
             temp_exp = value;
         }

        
               
    }
    printf("MOST Valuable Player: \n");
    PlayerDetails(teamIndex);
    }

void Allrounders(){
        int teamIndex,i,tempCounter=1;
        printf("List of Allrounders:\n");
    for ( i = 0; i < count; i++) {
         if(IsAllrounder(i)){
             printf("%d.%s\n",tempCounter,players[i].fullName);
             tempCounter++;
         }          
    }
    }

int IsAllrounder(int n){
    if (strcmp("Allrounder",players[n].role)==0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
    
}


