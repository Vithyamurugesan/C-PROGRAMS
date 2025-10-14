#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *create(int val){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    return n;
}
void enqueue(int val){
    struct node *n=create(val);
    if(rear==NULL){
        front=rear=n;
    }
    else{
        rear->next=n;
        rear=n;
    }
}
void dequeue(){
    if(front==NULL){
        printf("Queue is empty");
    }
    struct node *temp=front;
    front=front->next;
    if(front==NULL){
        rear=NULL;
    }
    free(temp);
    temp=NULL;

}
void display(){
    if(front==NULL){
        printf("Queue is empty");
        return;
    }
    struct node *temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    printf("\n");
    dequeue();
    dequeue();
    display();
}
