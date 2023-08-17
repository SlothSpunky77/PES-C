#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

typedef struct
{
    int r;
    char name[30];
}S;

void sort_by_roll(S** s,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (s[j]->r > s[j+1]->r)
            {
              S* temp = s[j];
              s[j] = s[j+1];
              s[j+1] = temp;
            }
        }
    }
}

void sort_by_name(S** s, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (strcmp(s[j]->name,s[j+1]->name) > 0)
            {
                /*
                S* temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                */
               char temp[50];
               strcpy(temp,s[j]->name);
               strcpy(s[j]->name,s[j+1]->name);
               strcpy(s[j+1]->name,temp);
            }
        }
    }
}



int main()
{
FILE *f = fopen("/home/sloth/C/stud_details.csv","r");
S* students[20];
int n = 0;  //number of students

char lineget[35];   //30 is the max name length
while (fgets(lineget,sizeof(lineget),f) != NULL && n < 20)
{
    char* t = strtok(lineget,",");
    if (t != NULL)
    {
        students[n]->r = atoi(t);
        t = strtok(NULL, ",");
        if (t != NULL)
            strcpy(students[n]->name, t);
    }
    n++;
}

fclose(f);
printf("Enter your option:\n1 - Sort by roll number\n2 - Sort by name\n0 - exit\n");
int opt;
scanf("%d",&opt);
if (opt == 1)
    sort_by_roll(students,n);
else if (opt == 2)
    sort_by_name(students,n);
else if (opt == 0)
    exit(0);
else
    printf("Invalid option.");
for (int i = 0; i < n; i++)
{
    printf("%d\t%s\n",students[i]->r,students[i]->name);
}

    return 0;
}