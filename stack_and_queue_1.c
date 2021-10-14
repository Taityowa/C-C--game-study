#include<stdio.h>

int top = -1;
int MAX = 5;

int push(int S[], int x){
    top = top +1;

    if (top == MAX){
        printf("Stack is overflow!\n");
        top -= 1;
        return 0;
    }

    S[top] = x;

    return x;
}

int pop(int S[]){
    int x;
    
    if (top == -1){
        printf("Stack is underflow!\n");
        return 0;
    }

    x = S[top];

    top = top - 1;
 
    return x;
}

int main(void){

    int x, a,i;
    int s[5];

    do{
        printf("push��pop�ǂ�����s���܂����H�@push:0, pop:1\n");
        scanf("%d", &a);

        if(a == 0){
            printf("push����l����͂��Ă��������F");
            scanf("%d", &x);
            if(push(s, x) != 0){
                top -= 1;
                printf("%d��push����܂����B\n", push(s, x));
            }
        }
        else if(a == 1){
            if(pop(s) != 0){
                top += 1;
                printf("pop���ꂽ�l��%d�ł��B\n", pop(s));
            }
        }
        else
            printf("0��1����͂��ĉ�����\n");

        if(top >= 0){
            printf("���݂̔z���");
            for(i = 0; i <= top; i++)
                printf("%d", s[i]);
        }

        printf("\n");

        printf("����𑱂��܂����H�@yes:0, no:1\n");
        scanf("%d", &a);
    }while(a == 0);

    return 0;

}
