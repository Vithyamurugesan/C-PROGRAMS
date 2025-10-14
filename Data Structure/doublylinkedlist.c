#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;  
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *create(int val){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->prev=NULL;
    n->next=NULL;
    return n;
}
void insertatbegin(int val){
    struct node *n=create(val);
    if(head==NULL){
        head=tail=n;
        return;
    }
    else{
        n->next=head;
        head->prev=n;
        head=n;
    }
}

void insertatend(int val){
    struct node *n=create(val);
    if(head==NULL){
        head=tail=n;
    }
    tail->next=n;
    n->prev=tail;
    tail=n;
}
void insertatpos(int val,int pos){
    struct node *n=create(val);
    struct node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;   
    }
    n->next=temp->next;
    n->prev=temp;
    temp->next->prev=n;
    temp->next=n;
}
void deleteatbegin(){
    struct node *temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
    temp=NULL;
}
void deleteatend(){
    struct node *temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    free(temp);
    temp=NULL;
}
void deleteatpos(int pos){
    struct node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    struct node *c=temp->next;
    temp->next=c->next;
    temp->next->prev=temp;
    free(c);
    c=NULL;  
}
void display(){
    struct node *temp=head;
    if(head==NULL){
        printf("List is empty");
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        insertatend(x);
    }
    display(x);
    insertatbegin(1);
    printf("\n");
    display(x);
    insertatpos(4,4);
    printf("\n");
    display(x);
    deleteatbegin();
    printf("\n");
    display(x);
    deleteatend();
    printf("\n");
    display(x);
    deleteatpos(2);
    printf("\n");
    display(x);

}