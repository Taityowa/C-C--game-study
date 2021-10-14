#include<stdio.h>

int rear = 0;
int front = 0;
int MAX = 5;
int top = -1;

int push(int b[], int x){
    top = top +1;

    b[top] = x;
    
    return 0;
}

int pop(int b[]){
    int x;
    
    x = b[top];

    top = top - 1;
 
    return x;
}

int stack(int Q[], int n, int st, int en){

    int b[30];
    int i = 0;

    for(st; st <= en; st++){
		i++;
		push(b, Q[st]);
	}
	
	st -= i;
	
	for(st; st <= en; st++){
	    Q[st] = pop(b);
	}

    return 0;
}

int enqueue(int Q[], int x){
	
	if (rear == MAX){
        printf("Queue is overflow!\n");
        return 0;
    }
    
	Q[rear] = x;
	
	rear += 1;

    return 0;
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

    int x, a, n, i, dif;
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
            
        dif = rear - front;
        
        if(dif > 0){
            printf("現在の配列は");
            for(i = front; i < rear; i++)
                printf("%d", s[i]);
        }
        
        printf("\n");

            
        if(dif >= 2){
			printf("データの順番を入れ替えますか？ yes:0, no:1\n");
			scanf("%d", &a);
			
			if(a == 0){
				do{
				    printf("何個づつ入れ替えますか：");
				    scanf("%d", &n);
				    
				    if(n >= dif)
				        puts("その個数では入れ替えられません");
		        }while(n >= dif);
			
			do{
				if(dif >= n){
				    stack(s, n, front + dif - n, front + dif - 1);
				}
				else if(dif < n)
				    stack(s, dif, front, front + dif);
				dif -= n;
			}while(dif >= 0);
			
			printf("入れ替え結果：");
			for(i = front; i < rear; i++)
			    printf("%d", s[i]);
			printf("\n");
			}
		}
				
        printf("操作を続けますか？　yes:0, no:1\n");
        scanf("%d", &a);
        
        if(front == rear){
			front = 0;
			rear = 0;
		}
        
    }while(a == 0);

    return 0;

}

