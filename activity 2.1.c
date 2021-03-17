#include<stdio.h>
#include<math.h>

int main(){
	int select=0, choice, num, temp, arrayconv[50], decimal_val=0, base, x;
	while (choice != 3){
		printf("Choose which to convert:\n");
		printf("[1] Binary to Decimal \n");
		printf("[2] Decimal to Binary\n");
		printf("[3] Exit\n");
		printf("Your Choice: ");
		scanf("%d", &choice);
		
		if (choice == 3){
			printf("\n\n\n");
			break;
		}
		
		printf("Enter number to convert: ");
		scanf("%d", &num);
		
		switch(choice){
			case 1:
				printf("Decimal of %d is ", num);
				while (num > 0)
			    {
			        temp = num % 10;
			        decimal_val = decimal_val + temp * base;
			        num = num / 10 ;
			        base = base * 2;
			    }
			    printf("%d", decimal_val);
			    break;
			case 2:
				printf("Binary of %d is ", num);
				for(x = 0; num > 0; x++){
					arrayconv[x] = num % 2;
					num = num / 2;
				}
				
				for (x = x - 1; x >= 0; x--){
					printf("%d", arrayconv[x]);
				}
				break;				
			default:
				break;
		}
		printf("\n\n\n");
	}
}
