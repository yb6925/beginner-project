#include <stdio.h>
int main(void){
	
	int arr[5][3];
	int i, j;
	int sum1, sum2, sum3 = 0;
	
	for(i=0;i<5;i++){
		for(j=0;j<1;j++){
			printf("%d번째 학생의 국어 수학 영어 점수를 입력하세요.\n",i+1);
			scanf("%d %d %d", &arr[i][j], &arr[i][j+1], &arr[i][j+2]);
			sum1 += arr[i][j];
			sum2 += arr[i][j+1];
			sum3 += arr[i][j+2];
		}
	}
	printf("국어 평균 : %d, 수학 평균 : %d, 영어 평균 : %d", sum1 / 5, sum2 / 5, sum3 / 5);
	return 0;
}
