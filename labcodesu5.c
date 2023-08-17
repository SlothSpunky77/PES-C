#include<stdio.h>
int main()
{
    int a1[] = {1,2,3,4,5};
    int a2[] = {2,4,7,8,9};
    int n = 5;  //number of elements
    int un[n*2];
    int in[n*2];
    for (int i = 0; i < n; i++)
        un[i] = a1[i];
    


    
    printf("Union: ");
    for (int i = 0; i < n*2; i++)
    {
        printf("%d ",un[i]);
    }
    printf("\n");

    printf("Intersection: ");
    for (int i = 0; i < n*2; i++)
    {
        printf("%d ",in[i]);
    }
    printf("\n");
    return 0;
}