// Matrix

#include <stdio.h>
#define SIZE 100

void ins (int **matrix, int row, int column);
void print (int **matrix, int row, int column);

int main ()
{
    int mat[SIZE][SIZE];
    int row, col;

    printf("Input rows: ");
    scanf  ("%d", &row);
    printf("Input columns: ");
    scanf  ("%d", &col);

    printf ("Input data: \n");
    ins(mat, row, col);

    printf ("You entered: ");
    print(mat, row, col);

    return 0;
}

void ins (int **matrix, int row, int column);
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf ("Row %d column %d: ", i+1, j+1);
            scanf  ("%d", &matrix[i][j]);
        }
    }
}

void print (int **matrix, int row, int column)
{
    int i;
    int j;

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
