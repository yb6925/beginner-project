#include <stdio.h>
int add_newbook(char (*book_title)[30], char (*book_auth)[30], 
				char (*book_publi)[30], int *borrowed, int *book_total);
int book_search(char (*book_title)[30], char (*book_auth)[30], 
				char (*book_publi)[30], int *borrowed, int book_total);
int compare(char *str1, char *str2);
int borrow_book(char (*book_title)[30], int book_total, int *borrowed);
int return_book(char (*book_title)[30], int book_total, int *borrowed);

int main(void){
	int user_choice;/*메뉴 번호 입력받기*/
	/*책 제목, 저자, 출판사, 대출가능여부, 총 합계*/
	char book_title[100][30];
	char book_auth[100][30];
	char book_publi[100][30];
	int borrowed;/*0이면 대출 가능, 1이면 대출 불가*/
	int book_total = 0; 
	 
	
	for(;;){
		printf("도서관리프로그램\n");
		printf("메뉴를 선택하세요함\n");
		printf("1. 책 새로 추가하기 \n");
		printf("2. 책 검색하기 \n");
		printf("3. 책 대출하기 \n");
		printf("4. 책 반납하기 \n");
		printf("5. 프로그램 종료 \n");
		
		printf("당신의 선택은? : ");
		scanf("%d", &user_choice);
		
		if(user_choice == 1){
			/*책 추가함수로 이동*/
			add_newbook(book_title, book_auth, 
						book_publi, &borrowed, &book_total);
		} else if(user_choice == 2){
			/*책 검색함수로 이동*/ 
			book_search(book_title, book_auth, book_publi, &borrowed, book_total); 
			
		} else if(user_choice == 3){
			/*책 대출함수로 이동 */ 
			borrow_book(book_title, book_total, &borrowed);
			
		} else if(user_choice == 4){
			/*책 반납함수로 이동 */ 
			
			return_book(book_title, book_total, &borrowed);
		} else if(user_choice == 5){
			/*프로그램 종료하기*/
			break; 
		}
		
	}	
	
	return 0;
}

int add_newbook(char (*book_title)[30], char (*book_auth)[30], 
				char (*book_publi)[30], int *borrowed, int *book_total){

	printf("--책을 추가하는 함수--\n");
	
		printf("책의 제목을 입력해주세요 \n");
		scanf("%s", book_title[*book_total]);
		
		printf("책의 저자를 입력해주세요 \n");
		scanf("%s", book_auth[*book_total]);
		
		printf("책의 출판사를 입력해주세요 \n");
		scanf("%s", book_publi[*book_total]);
		
		borrowed[*book_total] = 0;
		
		(*book_total)++;
		return 0;
}

int book_search(char (*book_title)[30], char (*book_auth)[30], 
					char (*book_publi)[30], int *borrowed, int book_total){
	//제목 또는 저자 또는 출판사 검색시 책 정보 모두 다 나와야(대출 여부와 책 번호도)
	int user_choice;
	char user_search[30]; //검색하는 단어

	
	int i;
	
	printf("무엇을 검색하시겠습니까? \n");
	printf("1. 책 제목 \n");
	printf("2. 책 저자 \n");
	printf("3. 책 출판사 \n");
	printf("당신의 답변은 ? : ");
	scanf("%d", &user_choice);
	
	printf("검색할 단어를 입력해주세요 : ");
	scanf("%s", user_search);
	
	if(user_choice == 1){
		for(i = 0; i < book_total; i++){
			if(compare(user_search, book_title[i])){
				printf("책 번호 : %d  책 제목 : %s, 저자 : %s, 출판사 : %s \n", i+1, book_title[i], book_auth[i], book_publi[i]);
			}
		}
	
	}else if(user_choice == 2){
		for(i = 0; i < book_total; i++){
			if(compare(user_search, book_auth[i])){
				printf("책 번호 : %d  책 제목 : %s, 저자 : %s, 출판사 : %s \n", i+1, book_title[i], book_auth[i], book_publi[i]);
			}
		}
		
	}else if(user_choice == 3){
		for(i = 0; i < book_total; i++){
			if(compare(user_search, book_publi[i])){
				printf("책 번호 : %d  책 제목 : %s, 저자 : %s, 출판사 : %s \n", i+1, book_title[i], book_auth[i], book_publi[i]);
			}
		}
		
	}
	
		 
	return 0;	
}

int compare(char *str1, char *str2){
	
	while(*str1){
		if(*str1 != *str2){
			return 0;
		}
		str1++;
		str2++;
	}
	if(*str1 == 0){
		return 1;
	}
	return 0;
}

int borrow_book(char (*book_title)[30], int book_total, int *borrowed){
	int i;
	char book_lent[30];
	printf("대출할 책의 제목을 입력해주세요 : ");
	scanf("%s", book_lent);
	
	
	//책 제목 입력받고 책 몇번쨰에 있는지 번호 찾은 후 그 번호에 해당하는 상태에 1을 집어넣는다. 
	for(i = 0; i < book_total; i++){
		if(compare(book_lent, book_title[i])){
			if(borrowed[i] == 0)
			{borrowed[i] = 1;
			printf("대출이 완료되었습니다.\n");
			}else if(borrowed[i] == 1){
				printf("이 책은 대출 중 입니다.\n");
			}
		}
	}
	return 0;
}

int return_book(char (*book_title)[30], int book_total, int *borrowed){
	int i;
	char book_lent[30];
	
	printf("반납할 책의 제목을 입력해주세요 : ");
	scanf("%s", book_lent);
	
	for(i = 0; i < book_total; i++){
		if(compare(book_lent, book_title[i])){
			if(borrowed[i] == 1){
				borrowed[i] = 0;
				printf("반납이 완료되었습니다.\n");
			}else if(borrowed[i] == 0){
				printf("잘못된 처리입니다.\n");
				printf("이 책은 대출이 가능한 책 입니다.\n");
			}
		}
	}
	return 0;
}
