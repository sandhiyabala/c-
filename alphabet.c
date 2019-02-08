#include <stdio.h>

int main()
{
    char ch;
    
    scanf("%c",&ch);
    if('a'<=ch&&ch<='z')
    {
        printf("\nalphabet");
    }
else
{
    printf("no");
}
    return 0;
}
