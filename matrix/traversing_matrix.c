// wap in c to traverse a matrix

#include <stdio.h>

int main()
{
    int i, j, m, n;
    int matrix[10][20];

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);


for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {           
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }
 for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    } 
    printf("entered matrix \n");

for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
    printf("transpose matrix \n");

    return 0;
}