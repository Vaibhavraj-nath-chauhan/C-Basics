#include <stdio.h>
#include<stdbool.h>
int main()
{
    _Bool n=256000000000000000;                           //_Bool datatype consider any int value to true(1) and 0 as false(0).
    printf("value of n = %d\n",n);
    if(n) printf("\tTrue\n");
    else printf("\tFalse\n");
    
    
    //Calling with library....
    
    bool t = true;
    bool f = false;
    printf("Value of t = %d\nValue of f = %d\n",t,f);
    if(f) printf("\tTrue\n");
    else printf("\tFalse\n");
    return 0;
}


