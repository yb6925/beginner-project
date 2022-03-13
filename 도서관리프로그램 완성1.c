#include <stdio.h>
int add_newbook(char (*book_title)[30], char (*book_auth)[30], 
				char (*book_publi)[30], int *borrowed, int *book_total);
int book_search(char (*book_title)[30], char (*book_auth)[30], 
				char (*book_publi)[30], int *borrowed, int book_total);
int compare(char *str1, char *str2);
int borrow_book(char (*book_title)[30], int book_total, int *borrowed);
int return_book(char (*book_title)[30], int book_total, int *borrowed);

int main(void){
	int user_choice;/*�޴� ��ȣ �Է¹ޱ�*/
	/*å ����, ����, ���ǻ�, ���Ⱑ�ɿ���, �� �հ�*/
	char book_title[100][30];
	char book_auth[100][30];
	char book_publi[100][30];
	int borrowed;/*0�̸� ���� ����, 1�̸� ���� �Ұ�*/
	int book_total = 0; 
	 
	
	for(;;){
		printf("�����������α׷�\n");
		printf("�޴��� �����ϼ�����\n");
		printf("1. å ���� �߰��ϱ� \n");
		printf("2. å �˻��ϱ� \n");
		printf("3. å �����ϱ� \n");
		printf("4. å �ݳ��ϱ� \n");
		printf("5. ���α׷� ���� \n");
		
		printf("����� ������? : ");
		scanf("%d", &user_choice);
		
		if(user_choice == 1){
			/*å �߰��Լ��� �̵�*/
			add_newbook(book_title, book_auth, 
						book_publi, &borrowed, &book_total);
		} else if(user_choice == 2){
			/*å �˻��Լ��� �̵�*/ 
			book_search(book_title, book_auth, book_publi, &borrowed, book_total); 
			
		} else if(user_choice == 3){
			/*å �����Լ��� �̵� */ 
			borrow_book(book_title, book_total, &borrowed);
			
		} else if(user_choice == 4){
			/*å �ݳ��Լ��� �̵� */ 
			
			return_book(book_title, book_total, &borrowed);
		} else if(user_choice == 5){
			/*���α׷� �����ϱ�*/
			break; 
		}
		
	}	
	
	return 0;
}

int add_newbook(char (*book_title)[30], char (*book_auth)[30], 
				char (*book_publi)[30], int *borrowed, int *book_total){

	printf("--å�� �߰��ϴ� �Լ�--\n");
	
		printf("å�� ������ �Է����ּ��� \n");
		scanf("%s", book_title[*book_total]);
		
		printf("å�� ���ڸ� �Է����ּ��� \n");
		scanf("%s", book_auth[*book_total]);
		
		printf("å�� ���ǻ縦 �Է����ּ��� \n");
		scanf("%s", book_publi[*book_total]);
		
		borrowed[*book_total] = 0;
		
		(*book_total)++;
		return 0;
}

int book_search(char (*book_title)[30], char (*book_auth)[30], 
					char (*book_publi)[30], int *borrowed, int book_total){
	//���� �Ǵ� ���� �Ǵ� ���ǻ� �˻��� å ���� ��� �� ���;�(���� ���ο� å ��ȣ��)
	int user_choice;
	char user_search[30]; //�˻��ϴ� �ܾ�

	
	int i;
	
	printf("������ �˻��Ͻðڽ��ϱ�? \n");
	printf("1. å ���� \n");
	printf("2. å ���� \n");
	printf("3. å ���ǻ� \n");
	printf("����� �亯�� ? : ");
	scanf("%d", &user_choice);
	
	printf("�˻��� �ܾ �Է����ּ��� : ");
	scanf("%s", user_search);
	
	if(user_choice == 1){
		for(i = 0; i < book_total; i++){
			if(compare(user_search, book_title[i])){
				printf("å ��ȣ : %d  å ���� : %s, ���� : %s, ���ǻ� : %s \n", i+1, book_title[i], book_auth[i], book_publi[i]);
			}
		}
	
	}else if(user_choice == 2){
		for(i = 0; i < book_total; i++){
			if(compare(user_search, book_auth[i])){
				printf("å ��ȣ : %d  å ���� : %s, ���� : %s, ���ǻ� : %s \n", i+1, book_title[i], book_auth[i], book_publi[i]);
			}
		}
		
	}else if(user_choice == 3){
		for(i = 0; i < book_total; i++){
			if(compare(user_search, book_publi[i])){
				printf("å ��ȣ : %d  å ���� : %s, ���� : %s, ���ǻ� : %s \n", i+1, book_title[i], book_auth[i], book_publi[i]);
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
	printf("������ å�� ������ �Է����ּ��� : ");
	scanf("%s", book_lent);
	
	
	//å ���� �Է¹ް� å ������� �ִ��� ��ȣ ã�� �� �� ��ȣ�� �ش��ϴ� ���¿� 1�� ����ִ´�. 
	for(i = 0; i < book_total; i++){
		if(compare(book_lent, book_title[i])){
			if(borrowed[i] == 0)
			{borrowed[i] = 1;
			printf("������ �Ϸ�Ǿ����ϴ�.\n");
			}else if(borrowed[i] == 1){
				printf("�� å�� ���� �� �Դϴ�.\n");
			}
		}
	}
	return 0;
}

int return_book(char (*book_title)[30], int book_total, int *borrowed){
	int i;
	char book_lent[30];
	
	printf("�ݳ��� å�� ������ �Է����ּ��� : ");
	scanf("%s", book_lent);
	
	for(i = 0; i < book_total; i++){
		if(compare(book_lent, book_title[i])){
			if(borrowed[i] == 1){
				borrowed[i] = 0;
				printf("�ݳ��� �Ϸ�Ǿ����ϴ�.\n");
			}else if(borrowed[i] == 0){
				printf("�߸��� ó���Դϴ�.\n");
				printf("�� å�� ������ ������ å �Դϴ�.\n");
			}
		}
	}
	return 0;
}
