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

    queueinsert(&b , 24);
    queueinsert(&b , 25);
    queueinsert(&b , 26);
    queueinsert(&b , 27);
    queueinsert(&b , 28);


    int v = queuedelete(&b);
    printf(" %d \n" , v);

    queueinsert(&b , 29);


    // int r = queuedelete(&b);
    // printf(" %d" , r);

    // int e = queuedelete(&b);
    // printf(" %d" , e);

    // int w = queuedelete(&b);
    // printf(" %d" , w);



    return 0;
}