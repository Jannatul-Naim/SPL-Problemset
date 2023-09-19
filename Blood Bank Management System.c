#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

#define N 100000

int count = 0;
struct donner
{
    char ID[15];
    char name[20];
    char add[20];
    char bloodGroup[4];
    char lastDate[20];
    char phoneNum[12];
};
struct donner stu[N];
COORD coord = {0, 0};

void gotoxy(int x, int y);
void window();
void drawRectangle();
void clearWindow(int n);
void mainWindows();
void addDonner();
void write();
void searchInfo();
void mod();
void searcBlood();
void delet();
void data_summary();

int main()
{
    window(count);
    mainWindow();
    return 0;
}

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void window()
{
    clearWindow(0);
    gotoxy(18, 2);
    printf("UIU Blood Bank Management System");
    gotoxy(20, 3);
    printf("United International University");
    gotoxy(31, 4);
    drawRectangle();
}

void drawRectangle()
{
    int i, j;
    for (i = 0; i < 80; i++)
    {
        gotoxy(i, 0);
        printf("_");
        gotoxy(i, 25);
        printf("_");
        gotoxy(i, 6);
        printf("_");
    }
    for (i = 0; i < 25; i++)
    {
        gotoxy(80, i);
        printf("|");
        gotoxy(0, i);
        printf("|");
    }
    for (i = 7; i < 25; i++)
    {
        gotoxy(35, i);
        printf("|");
    }
}

void clearWindow(int n)
{
    int i, j, L, H, s, k;
    if (n == 1)
    {
        s = 7;
        k = 37;
        H = 25;
        L = 80;
    }
    if (n == 2)
    {
        s = 10;
        k = 37;
        H = 25;
        L = 80;
    }

    for (i = s; i < H; i++)
    {
        for (j = k; j < L; j++)
        {
            gotoxy(j, i);
            printf(" ");
        }
    }

    return;
}

void mainWindow()
{
    int x = 2;
    char choice;
    drawRectangle(1);
    gotoxy(x, 8);
    printf("1. Add Donner");
    gotoxy(x, 10);
    printf("2. Search ID");
    gotoxy(x, 12);
    printf("3. Modify Record");
    gotoxy(x, 14);
    printf("4. Search for Blood");
    gotoxy(x, 16);
    printf("5. Delete Record");
    gotoxy(x, 18);
    printf("6. Data Base Blood info");
    gotoxy(x, 20);
    printf("q. Exit");
    while (1)
    {
        gotoxy(2, 22);

        printf("Enter your choice: ");
        scanf("%c", &choice);

        switch (choice)
        {
        case '1':
            addDonner();
            break;
        case '2':
            searchInfo();
            break;
        case '3':
            mod();
            break;
        case '4':
            searcBlood();
            break;
        case '5':
            delet();
            break;
        case '6':
            data_summary();
            break;
        case 'q':
            exit(1);
        default:
                 MessageBox(0, "Wrong Input.Try again?", "Variable", 2);
            break;
        }
    }
}

void addDonner()
{
    clearWindow(1);
    int print = 37;
    gotoxy(50, 8);
    printf("Add Record");
    fflush(stdin);
    gotoxy(print, 10);
    printf("ID: ");
    gets(stu[count].ID);
    gotoxy(print, 12);
    printf("Name: ");
    gets(stu[count].name);
    gotoxy(print, 14);
    printf("Address: ");
    gets(stu[count].add);
    gotoxy(print, 16);
    printf("Blood Group: ");
    gets(stu[count].bloodGroup);
    gotoxy(print, 18);
    printf("Last Donation Date: ");
    gets(stu[count].lastDate);
    gotoxy(print, 20);
    printf("Phone Number: ");
    gets(stu[count].phoneNum);
    count++;
    write();
    gotoxy(40, 22);
    printf("The record is successfully added");
    return;
}

void write()
{
    FILE *fp;
    fp = fopen("record.txt", "w");
    if (fp == NULL)
        exit(1);
    struct donner Lebel = {"ID", "Name", "Address", "BG", "Last Donation", "Phone Number"};
    fwrite(&Lebel, sizeof(Lebel), 1, fp);
    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "\n");
        fwrite(&stu[i], sizeof(stu[i]), 1, fp);
    }
    fclose(fp);
    return;
}

void searchInfo()
{
    clearWindow(1);
    int print = 37;
    gotoxy(50, 8);
    printf("Search Record");
    char s_id[15];
    int isFound = 0, i;
    gotoxy(print, 10);
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    for (i = 0; i < count; i++)
    {

        if (strcmp(s_id, stu[i].ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if (isFound == 1)
    {
        gotoxy(print, 24);
        printf("The record is Found");
        gotoxy(print, 12);
        printf("ID: %s", stu[i].ID);
        gotoxy(print, 14);
        printf("Name: %s", stu[i].name);
        gotoxy(print, 16);
        printf("Address: %s", stu[i].add);
        gotoxy(print, 18);
        printf("Blood Group: : %s", stu[i].bloodGroup);
        gotoxy(print, 20);
        printf("Last Donation Date: %s", stu[i].lastDate);
        gotoxy(print, 22);
        printf("Phone Number: %s", stu[i].phoneNum);
    }
    else
    {
        gotoxy(print, 24);
        printf("Sorry, No record found in the database");
    }
    return;
}

void mod()
{
    clearWindow(1);
    gotoxy(50, 8);
    int print = 37;
    printf("Modify Record");
    char s_id[15];
    int isFound = 0, i;
    gotoxy(print, 10);
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    for (i = 0; i < count; i++)
    {
        if (strcmp(s_id, stu[i].ID) == 0)
        {
            gotoxy(print, 12);
            printf("New Address: ");
            gets(stu[i].add);
            gotoxy(print, 14);
            printf("Last Donation Date: ");
            gets(stu[i].lastDate);
            gotoxy(print, 16);
            printf("Phone Number: ");
            gets(stu[i].phoneNum);
            write();
            isFound = 1;
            break;
            gotoxy(print, 24);
            printf("Updated!");
        }
    }

    if (!isFound)
    {
        gotoxy(print, 24);
        printf("Sorry, No record found in the database");
    }
    return;
}

void searcBlood()
{
    clearWindow(1);
    gotoxy(50, 8);
    int print = 37;
    printf("Search Blood For Donation");
    char s_bg[4];
    char f;
    int i, temp = 0;
    gotoxy(print, 10);
    printf("Blood Group: ");
    fflush(stdin);
    gets(s_bg);
    for (i = 0; i < count; i++)
    {
        if (strcmp(s_bg, stu[i].bloodGroup) == 0)
        {
            clearWindow(2);
            gotoxy(print, 12);
            printf("ID: %s", stu[i].ID);
            gotoxy(print, 14);
            printf("Name: %s", stu[i].name);
            gotoxy(print, 16);
            printf("Address: %s", stu[i].add);
            gotoxy(print, 18);
            printf("Last  %s", stu[i].lastDate);
            gotoxy(print, 20);
            printf("Phone No: %s", stu[i].phoneNum);
        }
        temp++;
        gotoxy(print, 22);
        printf("n for next search");
        gotoxy(2, 22);
        printf("Enter your choice: ");
        scanf(" %c", &f);
        if (f != 'n')
            break;
    }
    if (!temp)
    {
        gotoxy(print, 22);
        printf("Sory, No record found in the database");
    }
    else
    {
        clearWindow(2);
        gotoxy(print, 22);
        printf("No More Record");
    }

    return;
}

void delet()
{
    clearWindow(1);
    int print = 37;
    gotoxy(50, 8);
    printf("Delete Record");
    char s_id[15];
    int isFound = 0, i;
    gotoxy(print, 10);
    printf("Enter ID to delete: ");
    fflush(stdin);
    gets(s_id);
    for (i = 0; i < count; i++)
    {
        if (strcmp(s_id, stu[i].ID) == 0)
        {
            isFound++;
            count--;
            for (int j = i; j < count; j++)
            {
                stu[j] = stu[j + 1];
            }
            break;
        }
    }
    write();

    if (isFound)
    {
        gotoxy(40, 22);
        printf("Delete Successfully :)");
    }
    else
    {
        gotoxy(40, 22);
        printf("Sorry, No record found in the database");
    }
    return;
}

void data_summary()
{
    clearWindow(1);
    int print = 37;
    gotoxy(50, 8);
    printf("Record Summary");
    int temp;
    gotoxy(print, 10);
    printf("Total Donner : %d", count);

    temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp("O+", stu[i].bloodGroup) == 0)
            temp++;
    }
    gotoxy(print, 11);
    printf("O+ Donner : %d", temp);

    temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp("O-", stu[i].bloodGroup) == 0)
            temp++;
    }
    gotoxy(print, 12);
    printf("O- Donner : %d", temp);

    temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp("A+", stu[i].bloodGroup) == 0)
            temp++;
    }
    gotoxy(print, 13);
    printf("A+ Donner : %d", temp);

    temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp("A-", stu[i].bloodGroup) == 0)
            temp++;
    }
    gotoxy(print, 14);
    printf("A- Donner : %d", temp);

    temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp("B+", stu[i].bloodGroup) == 0)
            temp++;
    }
    gotoxy(print, 15);
    printf("B+ Donner : %d", temp);

    temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp("B-", stu[i].bloodGroup) == 0)
            temp++;
    }
    gotoxy(print, 16);
    printf("B- Donner : %d", temp);

    temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp("AB+", stu[i].bloodGroup) == 0)
            temp++;
    }
    gotoxy(print, 17);
    printf("AB+ Donner : %d", temp);

    temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp("AB-", stu[i].bloodGroup) == 0)
            temp++;
    }
    gotoxy(print, 18);
    printf("AB- Donner : %d", temp);
    return;
}
