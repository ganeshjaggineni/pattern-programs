#include<stdio.h>
int main()
{
int n,rows,cols;
char var='A';
printf("Etner a number :");
scanf("%d",&n);
for(rows=1;rows<=n;rows++)
{
for(cols=1;cols<=rows;cols++)
{
printf("%c ",var);

}
var++;
printf("\n");
}
return 0;
}
