#include <stdio.h>
//2���� �迭�� �̿��ؼ� �л����� �� ���� ��� ���ϱ� 
int main(void){
	int arr[5][3];
	int i, j;
	int sum1, sum2, sum3 = 0;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(j == 0){
				printf("%d��° �л��� �������� : ", i+1);
				scanf("%d", &arr[i][j]);
				sum1 += arr[i][j];
			}
			else if(j == 1){
				printf("%d��° �л��� �������� : ", i+1);
				scanf("%d", &arr[i][j]);
				sum2 += arr[i][j];
			}
			else if(j == 2){
				printf("%d��° �л��� �������� : ", i+1);
				scanf("%d", &arr[i][j]);
				sum3 += arr[i][j];
			}
		}
	}	
	printf("���� ��� ������ %d, ���� ��� ������ %d, ���� ��� ������ %d",sum1 / 5, sum2 / 5, sum3 / 5);
	return 0;
}
