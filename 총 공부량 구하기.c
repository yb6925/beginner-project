#include <stdio.h>
/*10�� ������ ���� ĥ�ϴ� �ð����� �÷��ʸ� ���� �Ϸ� ���η� ���ϱ� */ 
int main(void)
{
	int big_square; 
	int small_square;
	int hour;
	int minute;
	
	printf("���� �Ϸ� �� ���η��� ������ִ� ���α׷��Դϴ�.\n");
	printf("���� ĥ�� ū �簢���� ���� �簢���� ������ ������� �Է����ֽʽÿ�.\n");
	
	/*scanf("%d %d", &big_square, &small_square);*/
	
	printf("ū �簢���� ���� : ");
	scanf("%d", &big_square);
	
	printf("���� �簢���� ���� : ");
	scanf("%d", &small_square); 
	
	
	minute = big_square * 10 + small_square * 5;
	hour = minute / 60;
	
	printf("���� �� ���η��� %02d�ð� %02d���Դϴ�.\n",hour, minute % 60);
	
	printf("���� �� ���η��� ������ ��Ÿ���� %d�� �Դϴ�.\n", minute);
	
	//24�ð����� �� ���η��� ����ð��� ���� �Ϸ翡 ������� �ð� ���ϱ� ->��, � ��ư�� ������ �� �����ϱ�.// 
	//���� ���η��� ���ϱ�// 
	//�� ȭ �� �� �� ��� �Է� �ް� �����ֿ� ���ϱ�//
	//������ ��� ���� �̹��ֶ� ���ϱ�// 
	
	return 0;
}
