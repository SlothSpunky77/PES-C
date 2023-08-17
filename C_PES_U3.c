/*
//ESA Prep:
-member-wise copy of structures
-memory allocation
-linked list
-continuation of gdb
*/

#include <stdio.h>
#include <string.h>
//Structures
/*
struct nametag
{
    data_type member1; 
    data_type member2;
    ex. int a; float b; char c;
}

//Array of Structures:
struct nametag
{
    ...
}any_name[100];
*/


//EXAMPLE 1
/*
struct details
{
    char comp_name[20];
    char model[20];
    int year;
};

void display(struct details car[], int n, int up_year)
{
    for (int i = 0; i < n; i++)
    {
        if (car[i].year <= up_year)
        {
            printf("Company Name: %15s\t||\t", car[i].comp_name);
            printf("Model Name: %10s\n", car[i].model);
        }
    }
}
*/

/*
//Linked List example
struct node 
{
  int value;
  struct node *next;
};  

// print the linked list value
void printLinkedlist(struct node *p) 
{
  while (p != NULL) 
  {
    printf("%d ", p->value);
    p = p->next;
  }
}
*/

//ARRAY EXAMPLE
/*
void add(int (*a)[100], int (*b)[100], int m, int n, int (*c)[100])
{
    for(int i = 0; i<m; i++)
    {
        for(int j= 0; j<n; j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }
    }
}

void read(int (*a)[100], int m, int n)
{
for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
        scanf("%d",&a[i][j]);
}

void display(int (*a)[100], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            printf("%d\n",a[i][j]);
}
*/

int main()
{


//EXAMPLE 1
/*
    struct details car[20];
    int n, up_year;
    printf("Enter the number of cars: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Details for car %d:\n",i);
        printf("Company name: ");
        scanf("%s", &car[i].comp_name);
        printf("Model name: ");
        scanf("%s", &car[i].model);
        printf("Year: ");
        scanf("%d", &car[i].year);
    }

    printf("Enter the upper year limit: ");
    scanf("%d",&up_year);
    display(car, n, up_year);
*/



/*
    //2D array
    int arr[][x]; //column size is compulsory
    //Address = Base_addr + ((i*no_of_col)+j) * size_of_element
*/

/*
    struct nametag n1;
    struct nametag n2 = {a,b,c..., which equals to the number of data types defined};
    access the members using n1.member1
    struct nametag *n3; //n3 is a pointer to the structure

    //accessing the variable
    n1.member1    //Dot operator
    n1->member1    //Arrow operator
*/

/*
   //typedef -> alternative name, doesn't create a new datatype
   typedef existing_type new_name;
   typedef int integer;
   integer a,b;
//with structures
   typedef struct name
   {

   }NAME;
*/

/*
    //Array of Structures
    struct nametag any_name[100];
    struct nametag *ptr = any_name;     //Using pointers when any_name is defined outside the main function with it's structure, and an example of pointer to array of structures
*/

//Dynamic Memory Allocation
/*
    //malloc(): dynamically allocates a specified block of memory
    int* ptr = (int*) malloc(sizeof(int));  //allocate memory for int
    //calloc(): same as malloc, except it initializes each block with '0'
    int* ptr = (int*) calloc(n,sizeof(int));    //n is the number of elements
    //realloc(): dynamically re-allocate memory, new blocks will be initialized with garbage values
    int* ptr = realloc(ptr,sizeof(int)); //or whatever size, like n * sizeof(int) for example
    //free(): dynamically de-allocate memory as malloc and calloc doesn't de-allocate on it's own
    free(ptr);
*/

//Linked List with malloc integration
    //Nodes -> two fields of data -> second field points to address of the next node
/*
//Linked List Example
    // Initialize nodes
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  // Allocate memory
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assign value values
  one->value = 1;
  two->value = 2;
  three->value = 3;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  // printing node-value
  head = one;
  printLinkedlist(head);
*/

//Priority Queue
    //Enqueue: add an item from the end
    //Dequeue: remove an item from the front


//ARRAY EXAMPLE
/*
int a[100][100];
int b[100][100];
int c[100][100];
int m1,n1;
int m2,n2;
printf("enter the order of a\n");
scanf("%d%d",&m1,&n1);
printf("enter the elements of a\n");
read(a,m1,n1);
printf("enter the order of b\n");
scanf("%d%d",&m2,&n2);
printf("enter the elements of b\n");
read(b,m2,n2);
if (m1 == m2 && n1 == n2)
{
    printf("elements of A are\n");
    display(a,m1,n1);
    printf("elements of B are\n");
    display(b,m2,n2);
    printf("Addition of two matrices\n");
    add(a,b,m1,n1,c);
    display(c,m2,n2);
}
*/

return 0;
}