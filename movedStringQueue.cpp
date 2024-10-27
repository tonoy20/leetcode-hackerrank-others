#include<iostream>
#include<cstdio>
using namespace std;
void enqueue(char q[], char element, int &rear, int arraysize)
{
    if(rear == arraysize)
        printf("Overflow!\n");
    else {
        q[rear] = element;
        rear++;
    }
}
void dequeue(char q[], int &front, int &rear){
    if(front == rear)
        printf("Underflow!\n");
    else {
        q[front] = 0;
        front++;
    }
}

int Front(char q[], int front){
return q[front];
}

int main()
{
    char q[20] = {'a', 'b', 'c', 'd'};
    int front = 0, rear =4;
    int arraysize = 20;
    int N =2;
    char ch;
    for(int i=0; i<N; i++){
        ch = Front(q, front);
        enqueue(q, ch, rear, arraysize);
        dequeue(q, front, rear);
    }
    for(int i=front; i<rear; i++)
        printf("%c", q[i]);
    printf("\n");
    return 0;
}
