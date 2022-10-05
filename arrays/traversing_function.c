// wap in c to traverse a matrix using a function

#include <stdio.h>
void transpose();   //declaration of function

int main(){
    transpose();     //calling function
    return 0;
}


void transpose()        //function definition
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
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
    printf("transposed matrix \n");

}