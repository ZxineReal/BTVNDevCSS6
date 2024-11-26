#include<stdio.h>

int main(){
	int year, month, day;
	do{
		printf("Moi ban nhap vao nam: \n");
		scanf("%d",&year);
		printf("Moi ban nhap vao thang: \n");
		scanf("%d",&month);
		
		if(month < 1 || month > 12 || year < 1){
			printf("Khong hop le");
		}
	} while(month < 1 || month > 12 || year < 1);
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Thang %d co 31 ngay",month);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Thang %d co 30 ngay",month);
			break;
		case 2:
			if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
				printf("Thang 2 co 29 ngay");
			}else{
				printf("Thang 2 co 28 ngay");
			}
		break;
	}
	return 0;

}