#include<stdio.h>

int rear = 0;
int front = 0;
int MAX = 5;

int enqueue(int Q[], int x){
	
	if (rear == MAX){
        printf("Queue is overflow!\n");
        return 0;
    }
    
	Q[rear] = x;
	
	rear += 1;
}

int dequeue(int Q[]){
    int x;
    
    if (front == rear){
        printf("Queue is underflow\n");
        return 0;
    }

    x = Q[front];

    front += 1;
 
    return x;
}

int main(void){

    int x, a, i;
    int s[5];

    do{
        printf("enqueueとdequeueどちらを行いますか？ enpueue:0, dequeue:1\n");
        scanf("%d", &a);

        if(a == 0){
            printf("enqueueする値を入力してください：");
            scanf("%d", &x);
            if(enqueue(s, x) != 0){
                printf("%dがenqueueされました。\n", x);
            }
        }
        else if(a == 1){
            if(dequeue(s) != 0){
                front -= 1;
                printf("dequeueされた値は%dです。\n", dequeue(s));
            }
        }
        else
            printf("0か1を入力して下さい\n");
            
        if((rear - front) > 0){
            printf("現在の配列は");
            for(i = front; i < rear; i++)
                printf("%d", s[i]);
        }
        
        printf("\n");


        printf("操作を続けますか？　yes:0, no:1\n");
        scanf("%d", &a);
        
        if(front == rear){
			front = 0;
			rear = 0;
		}
        
    }while(a == 0);

    return 0;
}

