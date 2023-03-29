#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,small,large;
   int a[10];
   printf("enter the size of the element \n");
   scanf("%d",&n);
   printf("enter the array..\n");

   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   large=small=a[0];
   for(i=1;i<n;i++)
   {
       if(a[i]>large)

        large=a[i];
       if(a[i]<small)
        small=a[i];
   }

   printf("largest number is %d\n",large);
   printf("smallest number is ..%d\n",small);

   return 0;





}
