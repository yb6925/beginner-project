#include <stdio.h>

int main(void)
{
	double number;
	int a;
	double add, minus, multi, divis;
	
	
	printf("숫자를 입력해주세요.\n");
	scanf("%lf", &number);
	
	printf("어떤 것을 하고 싶나요?\n");
	printf("1.+  2.-  3.X  4.%%\n");
	scanf("%d", &a);
	
	if(a == 1){
		printf("더하고 싶은 수를 입력해주세요.\n");
		scanf("%lf", &add);
		printf("%lf + %lf = %lf\n", number, add, number + add);
	}
	else if(a == 2){
		printf("빼고 싶은 수를 입력해주세요.\n");
		scanf("%lf", &minus);
		printf("%lf - %lf = %lf\n",number, minus,number - minus);
	}
	else if(a == 3){
		printf("곱하고 싶은 수를 입력해주세요.\n");
		scanf("%lf", &multi);
		printf("%lf X %lf = %lf", number, multi, number * multi);
	}
	else if(a == 4){
		printf("나누고 싶은 수를 입력해주세요\n");
		scanf("%lf", &divis);
		printf("%lf %% %lf = %lf", number, divis, number / divis);
	}
	else
	{
		printf("잘못 입력되었습니다. 다시 시도해 주세요.");
	}
	return 0;
 } 
