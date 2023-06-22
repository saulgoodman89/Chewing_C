#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;


void rmv(Node **head , int val) {
	Node *node = *head;
	if(node != NULL && node->data == val) {
	    node->next = NULL;		
	}

    	printf("rmv 완료.  val : %d " , val);
	
}

void append(Node **head , int value) {

	Node *newNode = (Node*)malloc(sizeof(Node)); // newNode에 동적으로 메모리 할당 
	newNode->data = value; // newNode의 data를 입력받은 값으로 초기화 
	newNode->next = NULL; // newNode의 next는 NULL 처리 

	if(*head == NULL) {  // *head가 null이면 *head를 newNode로 초기화 한다. 
		*head = newNode;
		return;
	}

	Node *current = *head; // current를 head로 초기화 
	while (current->next!=NULL) { // current->next가 NULL이 아닌동안 current를 current->next로 초기화 한다. 
		current = current->next;

	}
	current->next = newNode;
}

void display(Node *head) {
	Node *current = head; // *current를 head로 초기화 
	while(current != NULL) { //  current가 NULL이 아니면 
		printf("value : %d  " ,current->data); // current->data 출력 
		current = current->next; // current = current->next로 초기화
	}
	printf("\n");

}

int main() {
	Node *list = NULL;

	append(&list , 10);
	append(&list , 20);
	append(&list , 30);

	display(list);

	rmv(&list,10);
	rmv(&list,30);
	printf("### display " );
	display(list);
	return 0;

}

