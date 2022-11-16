#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100], str2[100];

    printf("Enter a sting : ");
    gets(str1);

    int i, len = strlen(str1),commlen=0;

    for (i = 0; i < len; i++)
    {
        if (str1[i] == '/' && str1[i + 1] == '/')
        {
            printf("Single line comment!!!\n");
            break; 
        }
        if (str1[i] == '/' && str1[i + 1] == '*')
        {
            printf("Multiple line comment\n");
        }
    }

    return 0;
}