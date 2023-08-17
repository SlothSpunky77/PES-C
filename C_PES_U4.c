//ESA Questions:
/*
-file read modes
-file position functions
-errors during file IO
-binary search
-selection sort
*/

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

/*
void input(int* a)
{
    //int n = sizeof(a)/sizeof(int);
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
}

//try recursion
void sort(int* a)
{
    //int n = sizeof(a)/sizeof(int);
    int n = 10;
    int temp = 0;
    int j = 1;
    while (j == 1)
    {
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i+1] < a[i])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1]=temp;
                c++;
            }
        }
        if (c == 0)
            j = 0;
    }
}

void sort(int* a)
{
    //int n = sizeof(a)/sizeof(int);
    int n = 10;
    int temp = 0;
}

int display(int* a)
{
    //int n = sizeof(a)/sizeof(int);
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
*/
//ARRAY OF POINTERS TO STRUCTURE
/*

///
typedef struct {
    int id;
    char name[20];
} MyStruct;

void printStructs(MyStruct **ptrArray, int size) {
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s\n", ptrArray[i]->id, ptrArray[i]->name);
    }
}
///

struct Sample
    {
        int a;
        float b;
    };

void swap(struct Sample** s1, struct Sample** s2)
{
    struct Sample *temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
void display(struct Sample* s[], int n)
{
    for(int i = 0; i<n; i++)
        printf("%d %f\n",s[i]->a, s[i]->b);
}
*/

//CALLBACK
/*
int what(int x, int y, int z, int (*op)(int,int,int))
{
    return op(x,y,z);
}
int add(int x, int y, int z)
{
    return x+y+z;
}
*/


typedef struct
{
    int r;
    char name[30];
}S;

void sort_by_roll(S** s,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
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
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (strcmp(s[j]->name,s[j+1]->name) > 0)
            {
                S* temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                /*
               char temp[50];
               strcpy(temp,s[j]->name);
               strcpy(s[j]->name,s[j+1]->name);
               strcpy(s[j+1]->name,temp);
               */
            }
        }
    }
}



int main()
{

    /*
    //FOPEN AND FCLOSE
    FILE* f = fopen("_filename_","_filemode_"); //f will be NULL for non-existent file assuming filemode is 'r'
    // r -> read an existing file; r+ -> opens an existing file for both reading and writing
    // w -> create an empty file; w+ -> creates an empty file for both reading and writing
    // a -> append to a file(existing or not); a+ -> opens a file(existing or not) for appending and reading
    fclose(f);  //fclose(_filepointer_);
    //Character I/O Operations
    char _unsigned_char_;
    _unsigned_char_ = fgetc(_filepointer_); //reads one character at a time
    fputc(_unsigned_char_,stdout);  //stdout can be replaced with _filepointer_
    //String I/O Operations
    char _char_array_[50];
    fgets(_char_array_,_bytes_,_filepointer_);
    fputs(_char_array_,_filepointer_);
    //Formatted I/O Operations
    fscanf(_filepointer_,"%d",&arg1,&arg2,...);
    fprintf(stdout,"%d",arg1,arg2,...); //stdout can be replaced with _filepointer_
    //Block Read/Write Operations
    fread(&_structure_,_size_of_structure_,_no_of_records_,_filepointer_);  //no. of records is mostly 1
    fwrite(&_structure_,_size_of_structure_,_no_of_records_,_filepointer_); //find size using sizeof(_structure_)
    //Random Access
    fseek(_filepointer_,_offset_,_position_);   //_position_: SEEK_SET - start of the file, SEEK_CUR - current position, SEEK_END - end of the file
    ftell(_filepointer_);
    rewind(_filepointer_);  //same as (void) fseek(_filepointer_,0,SEEK_SET);
    */

    /*
    FILE *f = fopen("/home/sloth/junk.txt","r");
    if (f == NULL)
        printf("Can't open file.\n");
    else
    {
        printf("a) %d\n",ftell(f));
        //fprintf(f,"%d\n",2);
        fseek(f,3,SEEK_SET);    
        //SEEK_SET moves the pointer to the beginning of the file
        //SEEK_CUR moves the pointer to the given location
        //SEEK_END moves the pointer to the end of the file
        printf("b) %d\n",ftell(f));

        fseek(f,2,SEEK_SET);
        printf("c) %d\n",ftell(f));

        fseek(f,5,SEEK_CUR);
        printf("d) %d\n",ftell(f));

        fseek(f,0,SEEK_END);
        printf("e) %d\n",ftell(f));
        
        rewind(f);
        printf("f) %d\n",ftell(f));
    }
    */


    /*
    //BINARY SEARCH
    int arr[10];
    int beg, mid, end;
    input(arr);
    display(arr);
    printf("\n");
    sort(arr);
    display(arr);
    */

   //ERROR HANDLING
   /*
   FILE *f = fopen("Files.txt","r");    //this file doesn't exist
   printf("Value of errno: %d, %s\n",errno,strerror(errno));
   perror("Bad code");
   feof(f); //returns a non-zero value only if EOF is reached; returns zero otherwise
   ferror(f);   //returns zero if no error has occured, otherwise non-zero value
   clearerr(f);  //clears the error
   */

  //SEARCHING
  //Linear search: returns -1 if the element is not found
  //Binary search: Compare element in the middle with the element to be searched. Then check greater or lesser and then repeat step one.

  //ARRAY OF POINTERS TO STRUCTURES
  /*
////
  int size = 3;
    MyStruct *ptrArray[size];
    MyStruct struct1 = {1, "John"};
    MyStruct struct2 = {2, "Alice"};
    MyStruct struct3 = {3, "Bob"};
    ptrArray[0] = &struct1;
    ptrArray[1] = &struct2;
    ptrArray[2] = &struct3;
    printStructs(ptrArray, size);
    return 0;
////

struct Sample s1[] = {{22, 2.2},{33,3.3},{44,4.4}};
struct Sample* s[3];
for(int i = 0;i<3;i++)
    s[i] = &s1[i];
printf("Before swap: \n");
display(s,3);
swap(&s[0],&s[2]);
printf("\nAfter swap: \n");
display(s,3);
  */


 //CALLBACK
/*
 //syntax: int (*name)(_paramaters_); //parameters can be (int, int, int) for example
int (*p)(int,int,int);  //p is a pointer, returns int
//int *p(int,int,int);  //p is a function, returns pointer
p = &add;   //p = add; also works
printf("Result: %d",p(2,3,4));    //(*p)(2,3,4) also works
printf("\nSum: %d\n",what(1,3,5,add));
*/


FILE* f = fopen("/home/sloth/C/stud_details.csv","r");
S* students[20];
int n = 0;  //number of students

char lineget[35];   //30 is the max name length
while (fgets(lineget,sizeof(lineget),f) != NULL && n < 20)
{
    students[n] = (S*)malloc(sizeof(S));
    char* t = strtok(lineget,",");
    if (t != NULL)
    {
        strcpy(students[n]->name, t);
        //students[n]->r = atoi(t);
        t = strtok(NULL, ",");
        if (t != NULL)
            //strcpy(students[n]->name, t);
            students[n]->r = atoi(t);
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
    free(students[i]);
}
    return 0;
}