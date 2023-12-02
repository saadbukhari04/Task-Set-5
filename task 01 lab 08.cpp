#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int c,a,num1,num2,num3,answer ,c1=0;
	int i=0;
	while(i<10){
		c = rand()% 3+1;
			("%d ", c);
			if (c==1){
				printf("Addition\n");
				num1 = rand() % 99 + 1;
				num2 = rand() % 99 + 1;
				num3 = num1+num2;
				printf("Num 1 = %d\n", num1);
				printf("Num 2 = %d\n", num2);
				printf("Answer = ",a);
				scanf("%d", &a);
				if(num3 == a){
					printf("Correct\n\n");
					c1++;
			}
				else{
					printf("Incorrect\n\n");
			}
		}
			else if (c==2){
				printf("Subtraction\n");
				num1 = rand() % 99 + 10;
				num2 = rand() % num1 + 1;
				printf("Num 1 = %d\n", num1);
				printf("Num 2 = %d\n", num2);
				num3 = num1 - num2;
				printf("Answer = ");
				scanf("%d", &a);
				if(a == num1-num2){
					printf("correct\n\n");
					c1++;
			}
				else {
					printf("Incorrect\n\n");
				}	
			}
			else{
					printf("Multiplication\n");
					num1 = rand() % 9 + 1;
					num2 = rand() % 9 + 1;
					printf("Num 1 = %d\n", num1);
					printf("Num 2 = %d\n", num2);
					num3 = num1*num2;
					printf("Answer = ");
					scanf("%d", &a);
					if(a == num1*num2){
						printf("correct\n\n");
						c1++;
					}
					else{
						printf("Incorrect\n\n");
					}
			}
		
		i++;
	}
			printf("Your Score is %d /10",c1);
	
	
	return 0;
}
