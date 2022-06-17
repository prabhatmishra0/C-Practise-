#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    } else {
        return 0;
    }
}

int isFull(struct stack* ptr){
    if(ptr->top == ptr->size){
        return 1;
    }else {
        return 0;
    }
}


int push(struct stack* ptr , int val){
    if(isFull(ptr)){
        printf("stack is full");
    } else {
      ptr->top++;
      ptr->arr[ptr->top] = val;        
    }
    
}

int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack is Empty");
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void main() {

    struct stack *sp =  (struct stack *) malloc(sizeof(struct stack));
     
    //  define a size to array
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size * sizeof(int)); 
    printf("new stack is created");


    printf("%d \n " , isFull(sp));
    printf("%d \n " , isEmpty(sp));
    push(sp , 56);
    push(sp , 6);
    push(sp , 69);
    push(sp , 5);
    printf("%d \n " , isFull(sp));
    printf("%d \n " , isEmpty(sp));
    int s = pop(sp);
    printf("%d \n " , s);

   
    int a = pop(sp);
    printf("%d \n " , a);
    int d = pop(sp);
    printf("%d \n " , d);
    int f = pop(sp);
    printf("%d \n " , f);


}
