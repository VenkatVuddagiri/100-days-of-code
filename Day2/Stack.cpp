#include<iostream>
#include<string>
using namespace std;
class Stack{
    private:
        int top;
        int arr[5];
    public:
        Stack(){
            top=-1;
            for (int i = 0; i < 5; i++)
            {
                arr[i]=0;
            }
            
        }
        bool isEmpty(){
            return top==-1;
        }

        bool isFull(){
            return top==4;
        }

        void push(int val){
            if(isFull()){
                cout<<"Stack Overflow";
                return;
            }
            arr[++top]=val;
        }

        int pop(void){
            if(isEmpty()){
                cout<<"Stack underflow";
                return 0;
            }
            return arr[top--];
        }

        int count(void){
            return top+1;
        }

        void change(int pos,int val){
            if (isEmpty())
                return;
            arr[pos]=val;
        }

        int peek(int pos){
            return arr[pos];
        }

        void display(){
            for(int i=0;i<=4;i++){
                cout<<arr[i]<<endl;
            }
        }
};

int main(){
    Stack newStack;
    newStack.display();
    return 0;
}