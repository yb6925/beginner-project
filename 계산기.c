#include <stdio.h>

int main(void)
{
	double number;
	int a;
	double add, minus, multi, divis;
	
	
	printf("���ڸ� �Է����ּ���.\n");
	scanf("%lf", &number);
	
	printf("� ���� �ϰ� �ͳ���?\n");
	printf("1.+  2.-  3.X  4.%%\n");
	scanf("%d", &a);
	
	if(a == 1){
		printf("���ϰ� ���� ���� �Է����ּ���.\n");
		scanf("%lf", &add);
		printf("%lf + %lf = %lf\n", number, add, number + add);
	}
	else if(a == 2){
		printf("���� ���� ���� �Է����ּ���.\n");
		scanf("%lf", &minus);
		printf("%lf - %lf = %lf\n",number, minus,number - minus);
	}
	else if(a == 3){
		printf("���ϰ� ���� ���� �Է����ּ���.\n");
		scanf("%lf", &multi);
		printf("%lf X %lf = %lf", number, multi, number * multi);
	}
	else if(a == 4){
		printf("������ ���� ���� �Է����ּ���\n");
		scanf("%lf", &divis);
		printf("%lf %% %lf = %lf", number, divis, number / divis);
	}
	else
	{
		printf("�߸� �ԷµǾ����ϴ�. �ٽ� �õ��� �ּ���.");
	}
	return 0;
 } 
