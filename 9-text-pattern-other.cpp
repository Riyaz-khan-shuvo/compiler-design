#include <bits/stdc++.h>
using namespace std;

void search(char *pat, char *txt)
{
    int len1 = strlen(pat);
    int len2 = strlen(txt);

    for (int i = 0; i <= len2 - len1; i++)
    {
        int j;
        for (j = 0; j < len1; j++)
        {
            if (txt[i + j] != pat[j])
                break;
        }
        if (j == len1)
        {
            printf("Pattern found at index %d \n", i);
        }
    }
}

int main()
{
    char txt[100], pat[100];
    printf("Enter String-1 : ");
    gets(txt);
    printf("Enter string-2 : ");
    gets(pat);

    


    search(pat, txt);
    return 0;
}