#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];

    printf("Enter a string : ");
    gets(str);

    int i = 0, n = strlen(str);

    for (i = 0; i < strlen(str) - 1; i++)
    {
        if (str[0] == '/' && str[1] == '/')
        {
            printf("Single line Comment!!!");
            break;
        }
        else if (str[0] == '/' && str[1] == '*' && str[n - 2] == '*' && str[n - 1] == '/')
        {
            printf("Multiple line comment");
            break;
        }
        else
        {
            printf("Normal Statement");
            break;
        }
    }

    return 0;
}