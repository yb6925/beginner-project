#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char arr[10] = "0123456789"; 
	int num;
	
	srand(time(NULL));
	
//	num = rand() % 9; //0~8���� 
//	num = (rand() % 9) + 1; //1~9���� 
	
	num = rand() % 10;// 0~9���� 
	 
	printf("%c", arr[num]);

	return 0;
}
