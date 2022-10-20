#include<iostream>
#include<string.h>
using namespace std;
int main ()
{   char str[80];
    int i=0, len, j;
    cout << "Enter a string : ";
    gets(str);
    len = strlen(str);
    for( i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            for (j = i; j < len; j++)
                str[j] = str[j+1];
                
            len--;
        }
    }
    cout << "Resultant string : " << str;
    return 0;
}
