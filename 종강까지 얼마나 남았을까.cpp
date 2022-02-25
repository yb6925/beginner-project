#include <stdio.h>
//현재 시점으로 부터 종강까지 남은 일 수 구하기 
int main(void)
{
/*1학기 종강 날짜 6월 20일
2학기 개강 날짜 9월 1일*/
	int month, day;
	int today;
	int i;
	
	printf("오늘이 몇월 몇일인지 입력해주세요.\n");
	scanf("%d %d", &month, &day);
	printf("오늘은 2022년 %02d월 %02d일 입니다.\n", month, day);
	
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
	printf("종강 날짜인 6월 20일 까지 오늘로부터 %d일 남았습니다.", today+(20 - day));

	
	//몇일 남았는지 출력하기 

 
	return 0;
 } 
