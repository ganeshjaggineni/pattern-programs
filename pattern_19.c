#include<stdio.h>
int main()
{
    int n,rows,cols;
    printf("\nEtner a number :");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=n;cols++)
        {
            if(rows%2 != 0)
                    printf("%d ",cols%2);
            else
                    printf("%d ",!(cols%2));
        }
        printf("\n");
    }
    return 0;
}
//OUTPUT
/*
Etner a number :6
1 0 1 0 1 0
0 1 0 1 0 1
1 0 1 0 1 0
0 1 0 1 0 1
1 0 1 0 1 0
0 1 0 1 0 1
*/
