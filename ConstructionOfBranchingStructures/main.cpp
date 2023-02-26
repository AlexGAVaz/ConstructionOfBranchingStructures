#include <iostream>

int main()
{
    int a,b;
    
    printf("a=");
    scanf("%i",&a);
    
    printf("b=");
    scanf("%i",&b);
    
    if(a>b)
    {
        printf("a more\n");
    }
    else
    {
        if(a==b)
        {
            printf("a equals b\n");
        }
        else
        {
            printf("b less\n");
        }
    }
}
