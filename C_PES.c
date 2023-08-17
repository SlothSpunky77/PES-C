/*
//ESA prep:
-Computer Programming Language points
-Styles of Programming with examples
-3 levels of languages
-steps involved in execution of code
-4 errors
-undefined behaviour
-control structures 
-looping structures

*/


//C program development life cycle:
//1. Requirements gathering
//2. Design
//3. Implementation
//4. Testing
//5. Debugging
//6. Maintainance

#include <stdio.h>
#include <stdlib.h>
void f1(int *q);
int main()
{
    int x = 100;
    int *p;
        //printf("%d\n",--a+a--+a++);
        //printf("%d %d %d\n",a++,a--,a);   
    
        //printf("%d\n",__STDC_VERSION__);
    //scanf("statement wi
    p = &x;
    printf("p = %d, x = %d",*p,x);
    f1(p);
    //int a = 3,b = 4,c;
    //c = ++a * b++ / ++a;
    //printf("%d %d %d\n",a,b,c);
    //Undefined behaviour in C
        //int a = 10;th %d", &variable_name);
/*
int n = printf("do it %d\n",55); //n takes number of characters in the print statement and the print statement is executed
printf("%d times",n); // \n is considered one character
*/

//Formatting
//%d: decimal int
//%x: hexadecimal int
//%o: octal int
//%f: float
//%c: char
//%s: string

//Escape Sequences
// \n: newline
// \r: moves cursor to the beginning of the line
// \t: tab space
// \b : backspace


//Redirecting the output of a gcc error to a file: use "gcc filename.c x > filename.txt". "x" here stands for 
//file descriptors 0(stdin), 1(stdout) and 2(stderr)

//arithmetic, bitwise operators, precedence, unary, binary, ternary
//standalone operator, eg. ++a

//check the bit: c & (1 << i)
//set the bit: c | (1 << i)
//clear the bit: c |~ (1 << i)


/*
//swap two numbers
int a = 5, b = 10;
a = a ^ b;
b = a ^ b;
a = a ^ b;
printf("%d",a);
printf("%d",b);
*/

//++a is incremented and then is used whereas for a++, value of a is used and then incremented

/*  
    int a = 35, b,c;
    b = a++;    //a is incremented but the value of a is given to b
    printf("%d",a);
    c = ++a;
    printf("%d",a);
    printf("%d",b);
    printf("%d",c);
        //
    int a = 10,b;
    b = a*a++;
    printf("%d",b); //gives 110

*/


    //int c = 25;
    //int i;
    //i = 3;
    //printf("%d\n", c & (1 << i)); //prints 8
    //printf("%d\n", c | (1 << i)); //prints 25
    //printf("%d\n", c |~ (1 << i)); //prints -1




//pointer stores the address of some variable
//P = &a , p holds the address of a
//a == *p --> true; * is used to access the contents of p
    //int a = 10;
    //int *p;
    //p = &a;
    //printf("%d\n",*p);


//switch statement:
    //int count;
    //switch(count)
    //{
        //case n: statement; break;
        //default:
        //statement;
        //break;

    //}

//question: memu based calculator to perform arithmetic operations on complex numbers
/*    
    int sumr, sumim, diffr, diffim, prodr, prodim;
    int a,b;
    printf("Enter the real part of the first complex number: ");
    scanf("%d",&a);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%d",&b);
    int x,y;
    printf("Enter the real part of the second complex number: ");
    scanf("%d",&x);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%d",&y);
    int o;
    printf("Enter your option:\n1. Add\n2.Subtract\n3. Multiply\n--> ");
    scanf("%d",&o);
    switch(o)
    {
        case 1:
        sumr = a + x;
        sumim = b + y;
        printf("Sum is: %d + %di\n", sumr, sumim);
        break;

        case 2:
        diffr = a - x;
        diffim = b - y;
        printf("Difference is: %d + %di\n", diffr, diffim);
        break;

        case 3:
        prodr = a*x - b*y;
        prodim = a*y + b*x;
        printf("Product is: %d + %di\n", prodr, prodim);
        break;

        default:
        printf("Invalid input.\n");
        break;
    }
*/
    /*
    //ABCDE pattern
    char a = 'A';
    int i,j;
    for (i = 0; i <= 4; i++)
    {
        for (j = i; j>=0;j--)
        {
            printf("%c",a);
        }
        printf("\n");
        a++;
    }
    */
//question: diamond pattern
/*
int n = 5, rows, columns;
 
    // for loop is used to identify the number of rows and it is used to print upper triangle
    for (rows = 1; rows <= n; rows++) 
    {
 
        // used for printing the spaces
        for (columns = n; columns > rows; columns--) 
        {
            printf(" ");
        }
 
        // print star
        printf("*");
 
        // again print the spaces
        for (columns = 1; columns < (rows - 1) * 2; columns++) 
        {
            printf(" ");
        }
        if (rows == 1) 
        {
            printf("\n");
        }
        else 
        {
            printf("*\n");
        }
    }
    // for loop is used to identify
    // the number of rows and
    // it is used to print lower triangle
    for (rows = n - 1; rows >= 1; rows--) {
 
        // used for printing the spaces
        for (columns = n; columns > rows; columns--) {
            printf(" ");
        }
 
        // print star
        printf("*");
        for (columns = 1; columns < (rows - 1) * 2;
             columns++) {
            printf(" ");
        }
        if (rows == 1) {
            printf("\n");
        }
        else {
            printf("*\n");
        }
    }

*/


/*
//pattern
int i,a = 4,b;
for(b=1;b<=4;b++)
{
    for(i=1;i<a-b+1;i++)
        printf(" ");
    for(i=1;i<=b;i++)
        printf("* ");
    printf("\n");
}
*/
//C program to reverse the bits of an integer
    /*
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int rev_bits = 0;
    while (n > 0)
    {
        rev_bits = rev_bits << 1;
        if (n & 1 == 1)
            rev_bits = rev_bits ^ 1;
        n = n >> 1;
    }
    printf("%d\n", rev_bits);
    */


    return 0;
}

void f1(int *q)
{
    int temp = 200;
    q = &temp;
}