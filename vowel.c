#include <stdio.h>

int main()
{
    int ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("vowels",ch);
    }
    else
    {
        printf("consonant",ch);
    }

    return 0;
}
