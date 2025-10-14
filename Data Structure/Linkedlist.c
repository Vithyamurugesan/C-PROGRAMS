#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *createnode(int val){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    return n;
}

void insertatbeg(int val){
    struct node *n=createnode(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}

void insertatend(int val){
    struct node *n=createnode(val);
    struct node *temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertatpos(int val,int pos){
    struct node *n=createnode(val);
    struct node *temp=head;
    if(pos<=0){
        printf("Invalid position");
    }
    if(pos==1){
        head=n;
        return;
    }
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
}
void deleteatbegin(){
    struct node *temp=head;
    if(head==NULL){
        printf("List is empty");
    }
    head=head->next;
    free(temp);
    temp=NULL;
}
void deleteatend(){
    struct node *temp=head;
    if(head==NULL){
        printf("List is empty");
    }
    if(head->next==NULL){
        free(head);
        head=NULL;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}
void deleteatpos(int pos){
    if(head==NULL){
        printf("List is empty");
    }
    if(pos<=0){
        printf("invalid position");
    }
    if(pos==1){
        struct node *temp=head;
        head=head->next;
        free(temp);
        temp=NULL;
    }
    struct node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    struct node *c=temp->next;
    temp->next=c->next;
    free(c);
    c=NULL;
}
int size(){
    struct node *temp=head;
    int s=0;
    while(temp!=NULL){
        s++;
        temp=temp->next;
    }
    return s;
}
void search(int val){
    struct node *temp=head;
    for(int i=1;i<=size();i++){
        if(val==temp->data){
            printf("Found");
            return;
        }
        temp=temp->next;
    }
}
void reverse(){
    struct node *prev=NULL;
    struct node *cur=head;
    struct node *next=NULL;
    while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    head=prev;
}
void display(){
    if(head==NULL){
        printf("LIST IS EMPTY");
        return;
    }
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        insertatend(x);
    }
    display(x);
    insertatbeg(0);
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
    deleteatpos(3);
    printf("\n");
    display(x);
    printf("\n");
    printf("%d",size());
    printf("\n");
    search(4);
    reverse();
    printf("\n");
    display(x); 
}