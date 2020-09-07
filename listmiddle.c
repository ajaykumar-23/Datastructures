#include<stdio.h>
#include<stdlib.h>
//void findmiddle(struct node *);
struct node
{
int data;
struct node *next;
};
void display(struct node *n)
{
while(n!=NULL)
{
printf("%d\n",n->data);
n=n->next;
}
}
/*void findmiddile(struct node *head)
{
struct node *slow=head;
struct node *fast=head;
if(head!=NULL)
{
while(fast!=NULL && fast->next!=NULL)
{
fast = fast->next->next;
slow = slow->next;
}
printf("%d\n",slow->data);
}
}*/
int main()
{
struct node *head,*second,*third,*fourth,*fifth=NULL;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
fifth=(struct node*)malloc(sizeof(struct node));
head->data=10;
second->data=20;
third->data=30;
fourth->data=40;
fifth->data=50;
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=NULL;
display(head);
//findmiddle(head);
return 0;
}

