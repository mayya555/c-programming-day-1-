#include<stdio.h>
int main(){
	int i,j,row=3,col=3;
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	if(row==col){
		printf("it is a square matrix so proceed");
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",matrix[i][j]);
	}
		printf("\n");
	}
	for(i=0;i<row;i++){
		sum=sum+matrix[i][i];
	}
		printf("the sum of diagonal elements is %d",sum);
}
else
{
	printf("not a square matrix");
}
return 0;
}