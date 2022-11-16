#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100], str2[100];
    printf("Enter String-1 : ");
    gets(str1);
    printf("Enter string-2 : ");
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i <= len1 - len2; i++)
    {
        int j;
        for (j = 0; j < len2; j++)
        {
            if (str1[i + j] != str2[j])
            {
                break;
            }
        }
        if (j == len2)
        {
            printf("str2 pattern found at index %d \n", i);
        }
    }
    return 0;
}
