#include <stdio.h>
int main()
{
unsigned char b = 256; // Overflow occurs and not able to get the desired behavior. 
printf("%d\n",b);
if (b) printf("TRUE");
else printf("FALSE");
  return 0;
}

