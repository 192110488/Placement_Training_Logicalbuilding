#include <stdio.h>  
#include <conio.h>  
#include <string.h>  
int main()  
{  
    char str[50], temp;
    int i, n, m, len;
    printf ("Enter a string to reverse order: ");  
    scanf( "%s", &str);  
    len = strlen(str);
    n = 0; 
    m = len - 1;
    for (i =n; i <m; i++)  
    {   
        temp = str[i];  
        str[i] = str[m];  
        str[m] = temp;  
        m--;  
    }  
    printf (" The reverse of the original string is: %s ",  str);  
    getch();  
}  
