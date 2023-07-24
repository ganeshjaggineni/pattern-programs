#include<stdio.h>
int main()
{
int n,rows,cols,spaces;
printf("\nEnter  a number :");
scanf("%d",&n);
for(rows=1;rows<=n;rows++)
{
for(spaces=1;spaces<=rows;spaces++)
{
printf(" ");
}
for(cols=1;cols<=n-rows+1;cols++)
{
printf("* ");
}
printf("\n");
}
return 0;
}
#OUTPUT
/*
Enter  a number :10
 * * * * * * * * * *
  * * * * * * * * *
   * * * * * * * *
    * * * * * * *
     * * * * * *
      * * * * *
       * * * *
        * * *
         * *
          *
*/
