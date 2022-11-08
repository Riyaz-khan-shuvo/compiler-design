#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100], temp[100];
    int i;
    printf("Enter a Sentence : ");
    gets(str);
    strcpy(temp, str);
    for ( i = 0; i <strlen(str); i++)
    {
        if (temp[i]==32)
        {
            temp[i]= '\n';
        }
    }
    puts(temp);
    return 0;
}

