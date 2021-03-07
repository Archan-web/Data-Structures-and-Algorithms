//Insert a node at 2nd position of a singly linked list.

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

//Selection sort in descending order.

#include<stdio.h>
#include<stdlib.h>
void selectionSort(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]< arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void display(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Before sorting:\n");
    display(a,n);
    printf("After sorting:\n");
    selectionSort(a,n);
    display(a,n);
}