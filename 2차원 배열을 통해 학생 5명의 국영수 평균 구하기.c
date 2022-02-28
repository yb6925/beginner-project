#include <stdio.h>
//2차원 배열을 이용해서 학생들의 각 과목 평균 구하기 
int main(void){
	int arr[5][3];
	int i, j;
	int sum1, sum2, sum3 = 0;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(j == 0){
				printf("%d번째 학생의 국어점수 : ", i+1);
				scanf("%d", &arr[i][j]);
				sum1 += arr[i][j];
			}
			else if(j == 1){
				printf("%d번째 학생의 영어점수 : ", i+1);
				scanf("%d", &arr[i][j]);
				sum2 += arr[i][j];
			}
			else if(j == 2){
				printf("%d번째 학생의 수학점수 : ", i+1);
				scanf("%d", &arr[i][j]);
				sum3 += arr[i][j];
			}
		}
	}	
	printf("국어 평균 점수는 %d, 영어 평균 점수는 %d, 수학 평균 점수는 %d",sum1 / 5, sum2 / 5, sum3 / 5);
	return 0;
}
