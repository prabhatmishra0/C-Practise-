#include <stdio.h>
#include <stdlib.h>

struct queue    
{
    int size;
    int front;
    int rear;
    int* arr;
};

int queueinsert(struct queue* b , int val){
    if(b->rear >= b->size-1){
        printf("queue over flow");
        return 0;
    } else {
        b->rear++;
        b->arr[b->rear] = val;
    }

    if(b->front == -1){
        b->front++;
    }

    return 1;
}

int queuedelete(struct queue* b){ 
    int a;
    if(b->front < 0){
        printf("queue underflow");
    }
    else {
        a = b->arr[b->front];
    }

    if(b->front == b->rear) {
        b->front = -1;
        b->rear = -1;
    } else {
        b->front++;
    }

    return a;
}

int main(){

    struct queue b;
    b.size = 5;
    b.front = -1;
    b.rear = -1;

    b.arr = (int*)malloc(b.size*sizeof(int));

    // bfs implementation

    

    return 0;
}