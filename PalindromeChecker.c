#include<stdio.h>
#include<stdlib.h>
#define max 50
int  main()
{
    char S[max];
    printf("Enter the string: ");
    scanf("%s",S);
    int i,j,flag;
    i = 0;
    j = strlen(S)-1;
    flag = 0;
    while(i<j)
    {
        if(S[i] != S[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if(flag!=0)
    {
        printf("%s is not a palindrome!",S);
    }
    else
    {
        printf("%s is a palindrome!",S);
    }
    return EXIT_SUCCESS;
}
