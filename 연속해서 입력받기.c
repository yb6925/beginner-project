#include <stdio.h>
int main(void){
	
	int arr[5][3];
	int i, j;
	int sum1, sum2, sum3 = 0;
	
	for(i=0;i<5;i++){
		for(j=0;j<1;j++){
			printf("%d��° �л��� ���� ���� ���� ������ �Է��ϼ���.\n",i+1);
			scanf("%d %d %d", &arr[i][j], &arr[i][j+1], &arr[i][j+2]);
			sum1 += arr[i][j];
			sum2 += arr[i][j+1];
			sum3 += arr[i][j+2];
		}
	}
	printf("���� ��� : %d, ���� ��� : %d, ���� ��� : %d", sum1 / 5, sum2 / 5, sum3 / 5);
	return 0;
}
