#include <stdio.h>
#define LIN 4
#define COL 3

void fillMat(int mat[LIN][COL], int lin,int col);
void prtMat(int mat[LIN][COL],int lin,int col);

void main()
{
	int m[LIN][COL];
	fillMat(m,LIN,COL);
	prtMat(m,LIN,COL);
}


void fillMat(int mat[LIN][COL],int lin,int col)
{
	int i,j;
	
	for(i=0;i<lin;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Mat(%d)(%d) = ",i,j);
			scanf("%d\n",&mat[i][j]);
		}
	}
}

void prtMat(int mat[LIN][COL],int lin,int col)
{
	int i,j;
	
	printf("\nElementos da matriz:\n");
	for(i=0;i<lin;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d ",mat[i][j]);	
		}
		printf("\n");
	}
}
