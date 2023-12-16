#include<stdio.h>
#define max 5 //Limiting the maximum size of the stack to 5
int top=-1; //setting the top to be -1(i.e, the top is the last position to be pushed to)
int Arr[max];
int val; //value to return when we pop.


int IsEmpty(){ //function to check if the stack is empty
if (top==-1) //checking if the top is still at "-1", i.e, if the stack is still empty
{
    return 0; //returns "0" if the stack is empty
}
else{
    return 1; //returns "1" if the stack is empty
}

}

int IsFull(){ //function to check if the stack is full
    if (top==max-1) //stack is full when the top becomes "max-1"
    {
        return 0; //returns "0" if the stack is full
    }

    else{
        return 1; //returns "0" if the stack is full
    }
    
}

void push(int x){ //function for pushing
    if (IsFull()==1) //checks if it is full first before attempting to push
    {
        top=top+1; //increment the value of top first before we push
        Arr[top]=x; //adds the value we are pushing to the new position of "top"
    }
    
}

int pop(){ //function to pop from the stack
   if (IsEmpty()==1) //first check if the stack is empty or not
   {
    val=Arr[top]; // first stores the value at the top to "val" before we pop
    top=top-1; //we reduce top by 1 which is technically popping
    return val; //returns the value stored in "val" 
   }
    
    else{
        return -77777; //a value to return incase the stack is full since the pop function has a return type.
    }
}


int peek(){ //function for peeking. It's basically the same as popping, but without reducing the value of the top
   if (IsEmpty()==1)
   {
    val=Arr[top]; //returns the vlaue in "top"
    return val;
   }
    
    else{
        return -7777;
    }
}

void printS(){ //function to print the stack
    printf("Stack memers are as follows:");
    for (int i = 0; i < top; i++)
    {
    printf("%d is of index %d\n", Arr[i], i);
    }
    
}
//main function to test and run the code
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