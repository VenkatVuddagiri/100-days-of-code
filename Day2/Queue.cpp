#include <iostream>
#include <string>
using namespace std;
class Queue{
    private:
        int top;
        int rear;
        int arr[5];
    public:
        Queue(){
            top=-1;
            rear=-1;
            for(int i=0;i<5;i++)
                arr[i]=0;
        }
        bool isFull(){
            return (rear-top+1)==5;
        }
        bool isEmpty(){
            return rear==-1 && top==-1;
        }
        void enqueue(int val){
            if(isFull()){
                cout<<"Queue is full"<<endl;
                return;
            }
            else if(isEmpty()){
                rear++;
                top++;
            }
            else{
                rear++;
            }
            arr[rear]=val;
        }

        int dequeue(){
            int temp;
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return 0;
            }
            else if(rear==0 && top==0){
                temp = arr[top--];
                rear--;
                return temp;
            }
            else{
                if(top+1==4){
                    temp=arr[top];
                    top=-1;
                    rear=-1;
                    return temp;}
                return arr[top++];
            }
        }

        void display(){
            cout<<"The Queue contents are"<<endl;
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            for(int i=0;i<5;i++)
                cout<<arr[i]<<endl;
        }

        int count(){
            if(isEmpty())
                return 0;
            return rear-top+1;
        }
};

int main(){
    Queue q1;
    for(int i=0;i<5;i++){
        cout<<"Queue enqueued with value"<<i<<endl;
        q1.enqueue(i);
        cout<<"Count of queue after enqueueing is "<<q1.count()<<endl;
    }
    cout<<"Checking count of the queue"<<endl;
    cout<<q1.count()<<endl;
    cout<<"Checking if the queue is empty or full"<<endl;
    // if(q1.isEmpty())
    //     cout<<"Queue is empty"<<endl;
    // else
    //     cout<<"Queue is not empty"<<endl;
    
    if(q1.isFull())
        cout<<"Queue is full"<<endl;
    else
        cout<<"Queue is not full"<<endl;  
    for (int j = 0; j < 5; ++j)
    {
        q1.dequeue();
        cout<<"Queue dequeued ";
        cout<<endl;
        cout<<"Count of queue after dequeue is "<<q1.count()<<endl;
    }
    cout<<"Checking count of the queue"<<endl;
    cout<<q1.count()<<endl;
    q1.display();
    cout<<"Checking if the queue is empty or full"<<endl;
    if(q1.isEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;
    
    // if(q1.isFull())
    //     cout<<"Queue is full"<<endl;
    // else
    //     cout<<"Queue is not full"<<endl;    
}