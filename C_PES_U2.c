/*
//ESA Prep:
-recursion
-makefile
-string manipulation functions
-GDB + GDB commands
*/


#include<stdio.h>
/*
void function_name(parameters)
{
    definition;
}
*/

//functions

/*
//swap two numbers
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp; 
} 
*/

/*
//array as a pointer
int read(int *arr, int n)
{
    int i = 0;
    while (i<n)
    {
        scanf("%d",&arr[i]); 
        i++;
    }
}
*/

/*
//factorial
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n*fact(n-1));
}
*/

int main()
{

    /*
    //character input besides getchar and putchar
    char c;
    c = getc(stdin);
    putc(c,stdout);
    c = getch(); //or c = getche();
    putch(c);
    */

    //Functions
    
    /*
    //swap two numbers
    int a = 100; int b = 200;
    printf("before call a is %d and b is %d\n", a, b);
    swap(&a, &b); 
    printf("after call a is %d and b is %d\n", a, b);
    */

   /*
   //size of an array
   int a[] = {1,2,3,4,5,6};
   printf("%d\n",sizeof(a)/sizeof(a[0]));

   //inside a function
   //sample_func(arr,n);    //size n
   //and function definiton outside, sample_func(int arr[],int n) {}
   */


  //strings
    
    char strn[] = {'a','b','c','d','\0'};
    printf("%s\n",strn);
    for (int i = 0; i < 4; i++)
        printf("%c",strn[i]);
    int i = 0;
    while (strn[i] != '\0')
        {
            printf("%c",strn[i]);
            i++;
        }
    char inp_str[100];
    scanf("%s",inp_str);
  //Terminates with \0, so one byte more than when specified
}