#include<stdio.h>

int main(){
	int pass = 1789;
	int guess;
	
	do{
		printf("Ban hay doan mat khau gom 4 chu so: \n");
		scanf("%d",&guess);
		
		if(guess<1000 || guess>9999){
			printf("Khong hop le\n");
		}
		if(guess==pass){
		printf("Ban da doan dung mat khau\n");
		break;
		}else{
			printf("Ban doan sai roi, hay doan lai nhe\n");
		}
	} 
	while(guess<1000 || guess>9999);

}

