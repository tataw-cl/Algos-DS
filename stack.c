#include<stdio.h>
#define max 5
int top=-1;
int Arr[max];
int val;


int IsEmpty(){
if (top==-1)
{
    return 0;
}
else{
    return 1;
}

}

int IsFull(){
    if (top==max-1)
    {
        return 0;
    }

    else{
        return 1;
    }
    
}

void push(int x){
    if (IsFull()==1)
    {
        top=top+1;
        Arr[top]=x;
    }
    
}

int pop(){
   if (IsEmpty()==1)
   {
    val=Arr[top];
    top=top-1;
    return val;
   }
    
    else{
        return -77777;
    }
}


int peek(){
   if (IsEmpty()==1)
   {
    val=Arr[top];
    return val;
   }
    
    else{
        return -7777;
    }
}

void printS(){
    printf("Stack memers are as follows:");
    for (int i = 0; i < top; i++)
    {
    printf("%d is of index %d\n", Arr[i], i);
    }
    
}

int main(){
    push(20);
    push(45);
push(89);
push(54);
pop();
push(100);
pop();
printS();

return 0;
 }