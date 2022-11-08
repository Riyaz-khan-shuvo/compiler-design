#include <stdio.h>
#include <string.h>
int main()
{

    char str[100], temp[100];
    int i, j = 0;
    printf("Enter a word : ");
    gets(str);

    int n = strlen(str);

    // for (int i = 0; i <n; i++)
    // {
    //     temp =  str[n - i - 1];
    //     printf("%c" , temp);
    // }

    for (i = n - 1; i >= 0; i--)
    {

        temp[j] = str[i];
        j++;
    }
    printf("%d\n", j);
    temp[j] = '\0';
    puts(temp);

    return 0;
}