#include <stdio.h>
void main()
{
   int i=0;
   int j=0;
   for(i=1;i<=5;i++)
   {
	for(j=1;j<=i;j++)
	   printf("01");
	printf("\n");
   }
}
