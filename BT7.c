#include<stdio.h>

int main(){
	int num;
	printf("Moi ban nhap vao mot so nguyen: \n");
	scanf("%d",&num);
	printf("Cac uoc cua %d la: \n",num);
	
	for(int i=1; i<=num; i++){
		if(num%i==0){
			printf("%d\t",i);
		}
	}
}