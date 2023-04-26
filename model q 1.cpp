#include<stdio.h>
#include<string.h>
int main(){
	char word[100];
	printf("enter a word:");
	scanf("%s",&word);
	int length=strlen(word);
	printf("original word:%s\n",word);
	int i;
	for(i=0;i<length/2;i++){
		char temp=word[i];
		word[i]=word[length-i-1];
		word[length-i-1]=temp;
	}
	printf("reversed word is:%s\n",word);
	return 0;
}