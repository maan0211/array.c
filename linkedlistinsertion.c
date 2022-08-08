#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
void linkdlistTraversal(struct Node * ptr){
	while(ptr!=NULL){
		printf("Element =%d\n",ptr->data); // when print data this used
		printf("adderes =%d\n",ptr); // when print the addres of the node
		ptr=ptr->next;
	}
}
/*struct Node * insertAtIndex(struct Node * head,int data,int index){
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node * p=head;
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->data  = data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}*
struct Node * insertAtEnd(struct Node * head,int data){
struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=data;
struct Node *p=head;
while(p->next!=NULL){
	p=p->next;
}
p->next=ptr;
ptr->next=NULL;
return head;*/
struct Node * insertAfterNode(struct Node * head,struct Node *prevNode,int data){
	struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=prevNode->next;
	prevNode->next=ptr;
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

head->data = 46;
head->next = second;
second->data = 465;
second->next = third;
third->data = 464;
third->next = fourth;
fourth->data = 464400;
fourth->next = fivth;
fivth->data = 4672;
fivth->next = NULL;
printf("before insertion\n");
linkdlistTraversal(head);
printf("after insertion\n");
//insertAtIndex(head,457,3);
//insertAtEnd(head,964);
insertAfterNode(head,fivth,668);
linkdlistTraversal(head);
return 0;
}