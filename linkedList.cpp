#include<iostream>
#include<stdlib.h>
#include<unistd.h>

using namespace std;

struct node{
int data;
struct node* next;
};

void enque(struct node** headRef,int data){
struct node* newNode=NULL;
newNode= malloc(sizeof(node));
newNode->data=data;
newNode->next=*headRef;
*headRef=newNode;
}

//void delete(struct node** headRef,int data){

//}
int main(){
struct node* head=NULL;
head=malloc(sizeof(struct node));
head->data=0;
head->next=NULL;
enque(&head,1);
enque(&head,2);
struct node* current=head;
while(current){
cout<<current->data<<"\n";
current=current->next;
}


}
