#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
int isEmpty(){
    return top==NULL;
}
void push(int val){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=top;
    top=n;
}
void pop(){
    if(isEmpty()){
        printf("Stack is Empty");
    }
    struct node *temp=top;
    top=top->next;
    free(temp);
    temp=NULL;
}
void peek(){
    if(isEmpty()){
        printf("The Stack is empty");
    }
    else{
        printf("%d",top->data);
    }
}
int size(){
    int s=0;
    struct node *temp=top;
    while(temp!=NULL){
        s++;
        temp=temp->next;
    }
    return s; 
}
void display(){
    if(isEmpty()){
        printf("The stack is empty");
    }
    struct node *temp=top;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    peek();
    printf("\n");
    pop();
    pop();
    display();
}