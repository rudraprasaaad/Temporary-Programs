#include<stdio.h>
#define size 5

int arr[size];

int front = -1, rear = -1;

void enQ(int data){
    if((front == size-1) || (rear == (front-1)%(size-1))){
        printf("Queue is overflow!!");
    }
    else if(front == -1){
        front = rear = 0;
    }
    else if(rear == size-1 && front!= 0){
        rear = 0;
    }
    else{
        rear++;
    }
    arr[rear] = data;
}

int deQ(){
    if(front == -1)
    {
        printf("\nQueue is underflow!!");
    }
    int ans = arr[front];
    arr[front] = -1;
    if(front == rear)
        front = rear = -1;
    else if(front == size - 1)
        front = 0;
    else
        front++;
    return ans;
}

void display(){
    if(front == -1)
    {
        printf("\nQueue is underflow!!");
    }
    else{
        int i = front;
        if(front<=rear){
           for(i = front; i <= rear; i++)
           {
            printf("%d", arr[i]);
           }
        }
    } 
}

int main(){
    enQ(10);
    enQ(20);
    enQ(30);
    enQ(40);
    display();

    deQ();
    deQ();
    enQ(50);
    enQ(60);
    display();

    enQ(70);   
    enQ(80);   
    display();
    return 0;
}