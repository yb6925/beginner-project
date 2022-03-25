#include <stdio.h>
#include <stdlib.h>

struct Node* CreateNode(int data);
struct Node* InsertNode(struct Node* current, int data);
void DestroyNode(struct Node* destroy);
void PrintFrom(struct Node* from, struct Node* end);
struct Node* connect(struct Node* current, int data, struct Node* first);

struct Node{
	int data;
	struct Node* prevNode;
	struct Node* nextNode;
};

//head�� prev�� tail, tail�� next�� head 
int main(void){
	
	struct Node* Node1 = CreateNode(100);
	struct Node* Node2 = InsertNode(Node1, 200);
	struct Node* Node3 = InsertNode(Node2, 300);
	struct Node* Node4 = InsertNode(Node3, 400);
	struct Node* LastNode = connect(Node4, 500, Node1);
	
	PrintFrom(Node1, LastNode);
}


struct Node* CreateNode(int data){
	struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
//	struct Node* lastNode = (struct Node *)malloc(sizeof(struct Node));
	
	newNode->data = data;
	newNode->nextNode = NULL;
	newNode->prevNode = NULL;
	
	
	//tail��带 ���� �̸� �̾�����ϳ�? 
	
	return newNode;
}

struct Node* InsertNode(struct Node* current, int data){
	struct Node* after = current->nextNode;
	//current Node -- after Node
	
	struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
	
	newNode->data = data;
	newNode->prevNode = current;
	newNode->nextNode = after;
	
	current->nextNode = newNode;
//	current->prevNode = newNode;
	
	return newNode;
}

void DestroyNode(struct Node* destroy){
	
	struct Node* behind = destroy->prevNode;
	struct Node* front = destroy->nextNode;
	
	behind->nextNode = front;
	front->prevNode = behind;
	
	free(destroy);
	
}

void PrintFrom(struct Node* from, struct Node* end){
	
		do{
		printf("---------------\n");
		printf("�������� �� : %d \n", from->data);
		printf("\n"); 
		printf("�������� prev �ּ� : %p \n", from->prevNode);
		printf("�� �������� �ּ� : %p \n", from);
		printf("�������� next �ּ� : %p \n", from->nextNode);
		printf("----------------\n");
		from = from->nextNode;
		}while(from != end->nextNode);

}

struct Node* connect(struct Node* current, int data, struct Node* first){
	//������ node ���� �� insert��� ����Ѵ�. insert�� ��� ����.
	struct Node* tail = (struct Node*)malloc(sizeof(struct Node)); 
	
	current->nextNode = tail;
	first->prevNode = tail;
	
	tail->data = data;
	tail->nextNode = first;
	tail->prevNode = current;
	
	return tail;
	
}
