#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
Struct Node*deleteAtindex(struct Node * head,int index){
	struct Node
	return head;
}
void linkedlisttraversal(struct Node* ptr){
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}
}
struct Node* deletefirst(struct Node*head){
	struct Node*ptr=head;
	head=head->next;
	free(ptr);
	return head;
}
int main(){
	
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	struct Node * fivth;
	
head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
fourth = (struct Node*)malloc(sizeof(struct Node));
fivth = (struct Node*)malloc(sizeof(struct Node));

head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=fourth;

fourth->data=4;
fourth->next=fivth;

fivth->data=5;
fivth->next=NULL;
linkedlisttraversal(head);
head=deletefirst(head);
head=deletefirst(head);
head=deletefirst(head);
head=deletefirst(head);
printf("after deletion\n");
linkedlisttraversal(head);
return 0;
}
