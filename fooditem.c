#include<stdio.h>
int main(){
	printf("Enter random number from 1 to 5\n1.Piza, Rs239 \n2.Burger, Rs129 \n3.Pasta, Rs179 \n4.French Fries, Rs 99 \n5.Sandwich, Rs 149\n");
	int choice=0;
	scanf("%d", &choice);
	switch (choice){
		case 1:
			printf("Fooditem-Piza\nPrice-239");
			break;
		case 2:
			printf("Fooditem-Burger\nPrice-129");
			break;
	
		case 3:
			printf("Fooditem-Pasta\nPrice-179");
			break;
			
		case 4:
			printf("Fooditem-French Fries\nPrice-99");
			break;
		case 5:
			printf("Fooditem-Sandwich\nPrice-149");
			break;	
		default : printf("Invalid Choice");
		
	}

	return 0;
}
