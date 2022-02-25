#include <stdio.h>
/*10분 단위로 색을 칠하는 시간관리 플래너를 통해 하루 공부량 구하기 */ 
int main(void)
{
	int big_square; 
	int small_square;
	int hour;
	int minute;
	
	printf("오늘 하루 총 공부량을 계산해주는 프로그램입니다.\n");
	printf("오늘 칠한 큰 사각형과 작은 사각형의 갯수를 순서대로 입력해주십시오.\n");
	
	/*scanf("%d %d", &big_square, &small_square);*/
	
	printf("큰 사각형의 갯수 : ");
	scanf("%d", &big_square);
	
	printf("작은 사각형의 갯수 : ");
	scanf("%d", &small_square); 
	
	
	minute = big_square * 10 + small_square * 5;
	hour = minute / 60;
	
	printf("오늘 총 공부량은 %02d시간 %02d분입니다.\n",hour, minute % 60);
	
	printf("오늘 총 공부량을 분으로 나타내면 %d분 입니다.\n", minute);
	
	//24시간에서 총 공부량과 수면시간을 빼서 하루에 흘려보낸 시간 구하기 ->단, 어떤 버튼을 눌렀을 때 실행하기.// 
	//어제 공부량과 비교하기// 
	//월 화 수 목 금 모두 입력 받고 저번주와 비교하기//
	//저번주 평균 내서 이번주랑 비교하기// 
	
	return 0;
}
