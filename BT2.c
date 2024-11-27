#include<stdio.h>

int main(){
	int num;
	int even = 0;
	int odd = 0;
	
	for(int i=1; i<=5; i++){
		printf("Moi ban nhap vao so nguyen thu %d\n",i);
		scanf("%d",&num);

		if(num%2==0){
			even++;
		}else
			odd++;		
		}
		printf("So luong so chan la: %d\n",even);
		printf("So luong so le la: %d\n",odd);
	return 0;
}