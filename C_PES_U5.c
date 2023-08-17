//ESA Prep:
/*
-Structure vs Union
-Storage Classes
-Qualifiers
-Pre-processors
-Macro vs Enum 
*/


#include<stdio.h>
#include<string.h>
//UNION
    //Chunk of memory to store variables of different data types
    //One member can retain a value at a time. The memory occupied by a union will be as big as that required by the largest component.
/*
    syntax:
    union TAG
    {
        _datatype_ member1; //offset is 0
        _datatype_ member2; //offset is 50 if the first member was char name[50];
        _datatype_ member3; //offset is 80 if the second member was char naem[30];
    };
*/

/*
union car
{
char name[20]; //assuming, 1 byte for char
float price; // assuming, 4 bytes for float
};
*/

//BIT FIELDS
/*
    struct Name
    {
        int one1:1; //one bit allocated
        int two2:2; //two bits allocated
        int three3:1;   //one bit allocated
    }
//scanf cannot be used on bit-fields as the address is not accessible.
*/

//ENUM
    //list of keywords to replace integral constants
/*
    enum cars
    {
        nissan, //gets 0 by default
        toyota = 2,
        mazda   //gets 3 by default
    };
*/

//STORAGE CLASSES
/*
Automatic/local variables: auto
External variables: extern
Static variables: static    //if it is global, it can't be used outside the file.
Register variables: register
*/

//QUALIFIERS
/*
-Size qualifiers
-Sign qualifiers
-Type qualifiers
    const: 
        int* const p = &i;  //p is a constant pointer to integer
        const int* const p = &i;    //p is a constant pointer to constant integer
*/

int main()
{
    /*
    union car c;
    printf( "Memory size occupied by data in bytes : %d\n", sizeof(c)); //20
    strcpy(c.name, "Benz");
    printf("Name: %s\n",c.name);
    c.price = 400.00;
    printf("Price: %.2f\n",c.price);
    */

    //ENUM
    /*
    enum cars c;
    m = mazda;  //gets 3
    */

    return 0;
}