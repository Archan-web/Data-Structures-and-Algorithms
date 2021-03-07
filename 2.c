//Insert a node at 2nd last position of a singly linked list and show the list.

#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    int data;
    struct list* next;
}node;
void display(node* head){
    while(head!=NULL){
        printf("%d",head->data);
        if(head->next!=NULL) printf("->");
        head=head->next;
    }
    printf("\n");
}
node* CSLL(){
    node* head=(node*)malloc(sizeof(node));
    int n;
    printf("\nEnter the number of nodes: ");
    scanf("%d",&n);
    printf("Enter data: \n");
    int headData;
    scanf("%d",&headData);
    head->data=headData;
    head->next=NULL;
    node* tempHead=head;
    for(int i=0;i<n-1;i++){
        int dt;
        scanf("%d",&dt);
        node* temp=(node*)malloc(sizeof(node));
        temp->data=dt;
        temp->next=NULL;
        tempHead->next=temp;
        tempHead=tempHead->next;
    }
    return head;
}
void insert(node** head){
    node* tempHead=(*head);
    while(((tempHead->next)->next)!=NULL){
        tempHead=(tempHead)->next;
    }
    node* temp=(node*)malloc(sizeof(node));
    printf("\nEnter data: ");
    int dt;
    scanf("%d",&dt);
    temp->data=dt;
    temp->next=tempHead->next;
    tempHead->next=temp;
}
void main(){
    while(1){
        int x;
        node* head;
        printf("\n1.Create Singly Linked List\n2.Insert Element at 2nd Position\n3.Display\n4.Exit\n");
        scanf("%d",&x);
        switch(x){
            case 1: head=CSLL();
            break;
            case 2: insert(&head);
            break;
            case 3: display(head);
            break;
            default: exit(0);
        }
    }
}

//Check whether a matrix is sparse or not.

#include<stdio.h>
#include<stdlib.h>
int isSparse(int* arr, int r, int c){
    int cnt=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(*(arr + i*c + j)==0) cnt++;
        }
    }
    return cnt>(r*c/2) ? 1 : 0;
}
void main(){
    int r,c;
    printf("\nEnter the number of rows and columns of the matrix: \n");
    scanf("%d%d",&r,&c);
    int *a = (int *)malloc(r * c * sizeof(int));
    printf("\nEnter the elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&*(a + i*c + j));
        }
    }
    if(isSparse(a,r,c)) printf("\nThe matrix is a Sparse Matrix");
    else printf("\nThe matrix is not a Sparse Matrix");
}