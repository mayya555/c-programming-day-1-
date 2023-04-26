#include<stdio.h>
int main(){
	int date,month,year;
	printf("enter the date,month,year:");
	scanf("%d %d %d",&date,&month,&year);
	if(year%400==0){
		printf("it is leap year %d %d %d",date,month,year);
			}
			else if(year%100==0){
				printf("it is not a leap year %d %d %d",date,month,year);
			}
			else if(year%4==0){
				printf("it is leap year %d %d %d",year);
			}
			else{
				printf("not a leap year");
			}
			return 0;
}