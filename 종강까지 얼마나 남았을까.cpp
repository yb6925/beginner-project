#include <stdio.h>
//���� �������� ���� �������� ���� �� �� ���ϱ� 
int main(void)
{
/*1�б� ���� ��¥ 6�� 20��
2�б� ���� ��¥ 9�� 1��*/
	int month, day;
	int today;
	int i;
	
	printf("������ ��� �������� �Է����ּ���.\n");
	scanf("%d %d", &month, &day);
	printf("������ 2022�� %02d�� %02d�� �Դϴ�.\n", month, day);
	
	today = 0;
	
	for(i = month; i <= 5; i++)
	{
		if(month == 2)
		{
			today += 28;
		}
		else if(month % 2 == 0)
		{
			today += 30;
		}
		else if(month % 2 != 0)
		{
			today += 31;
		}
	}
	printf("���� ��¥�� 6�� 20�� ���� ���÷κ��� %d�� ���ҽ��ϴ�.", today+(20 - day));

	
	//���� ���Ҵ��� ����ϱ� 

 
	return 0;
 } 
