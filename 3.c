//Implement queue using singly linked list.

#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void enqueue(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
   printf("\nInserted!!!\n");
}
int dequeue()
{
    int val;
    if(front == NULL){
      printf("\nQueue is Empty!!!\n");
      val=-1;
    }
    else{
      struct Node *temp = front;
      front = front -> next;
      val=temp->data;
      free(temp);
   }
   return val;
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL\n",temp->data);
   }
}

void main()
{
   int choice, value,val;
   while(1){
      printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value: ");
		 scanf("%d", &value);
		 enqueue(value);
		 break;
	 case 2: val=dequeue();
            if(val!=-1) printf("\nThe deleted element is %d.\n",val);
            break;
	 case 3: display();
            break;
	 default: exit(0);
      }
   }
}

//Linear search.

#include<stdio.h>
#include<stdlib.h>
int linearSearch(int a[],int n,int ele){
    for(int i=0;i<n;i++){
        if(a[i]==ele) return i+1;
    }
    return -1;
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
    printf("\nEnter the element you want to search: ");
    int ele;
    scanf("%d",&ele);
    int pos=linearSearch(a,n,ele);
    if(pos==-1) printf("\n%d is not present.",ele);
    else printf("\n%d is present at position %d.",ele,pos);
}