#include<stdio.h>
#define rows 3
#define columns 3
void transpose (int matrix[][columns],int transposed_matrix[][rows]){
	for(int i=0;i<rows;i++){
	
	for(int j=0;j<columns;j++){
		transposed_matrix[j][i]=matrix[i][j];
	}
}
}
void print_matrix(int matrix[][columns]){
	for(int i=0;i<rows;i++){
	
	for(int j=0;j<columns;j++){
		printf("%d",matrix[i][j]);
	}
	printf("\n");
}
}
int main(){
	int matrix[rows][columns]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
};
int transpose_matrix[columns][rows];
transpose(matrix,transpose_matrix);
printf("original matrix:\n");
print_matrix(matrix);
printf("transposed matrix:\n");
print_matrix(transpose_matrix);
return 0;
	}