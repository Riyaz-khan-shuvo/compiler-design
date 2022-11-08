#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i = 1;
    gets(str);

    char* pice = strtok(str , " ");
    while (pice!=NULL)
    {
        printf("%d = %s\n" , i , pice);
        pice = strtok(NULL , " ");
        i++;
    }
    
    return 0;
}