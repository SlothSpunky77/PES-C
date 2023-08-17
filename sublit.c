//temporarily test you code here
#include <stdio.h>
#include <string.h>
void func(char* str) 
{
    int count[256] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++) 
        count[(int) str[i]]++;
    for (int i = 0; i < 256; i++) 
    {
        if (count[i] > 0) 
            printf("%c %d\n", i, count[i]);
    }
}
int main() 
{
    char word[256];
    scanf("%s",word);
    func(word);
    return 0;
}