#include<stdio.h>
int main(){
	int i,j,sum=0,avg;
	int rows=3,col=3;
	int matrix[3][3]={{1,34,3},{4,55,6},{7,78,9}};
	for(i=0;i<rows;i++){
	for(j=0;j<col;j++){
		sum=sum+matrix[i][j];
		avg=sum/9;
	}
	}
	printf("the sum is %d\n",sum);
	printf("the average is %d\n",avg);
	return 0;
}