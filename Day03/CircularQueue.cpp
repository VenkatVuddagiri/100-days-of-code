#include <iostream>
#include <string>
using namespace std;
class CircularQueue{
    private:
        int top;
        int rear;
        int itemCount;
        int arr[5];
    public:
        CircularQueue(){
            top=-1;
            rear=-1;
            itemCount=0;
            for(int i=0;i<5;i++)
                arr[i]=0;
        }
        bool isFull(){
            return itemCount==5;
        }
        bool isEmpty(){
            return rear==-1 && top==-1;
        }
        void enqueue(int val){
            if(isFull()){
                cout<<"QUEUE IS FULL, CANNOT ENQUEUE A VALUE"<<endl;
                return;
            }
            else if(isEmpty()){
                rear++;
                top++;
            }
            else{
                rear=(rear+1)%5;
            }
            arr[rear]=val;
            cout<<"The value "<<val<<" which you have entered is enqueued into the queue"<<endl;
            itemCount++;
        }

        int dequeue(){
            int temp;
            if(isEmpty()){
                cout<<"QUEUE IS EMPTY, CANNOT DEQUEUE A VALUE FROM THE QUEUE"<<endl;
                return 0;
            }
            else if(rear==0 && top==0){
                temp = arr[top];
                arr[top]=0;
                top--;
                rear--;
            }
            else{
                temp=arr[top];
                arr[top]=0;
                top=(top+1)%5;
            }
            cout<<temp<<" dequeued from the queue"<<endl;
            itemCount--;
            return temp;
        }

        void display(){
            cout<<"The Queue contents are "<<endl;
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            for(int i=0;i<5;i++)
                cout<<arr[i]<<endl;
        }

        int count(){
            return itemCount;
        }
};

int main(){
    CircularQueue q1;
    int option=0,n;
    do
    {
       cout<<"Enter a value for option from 1 to 9"<<endl;
       cout<<1<<".Enqueue"<<endl;
       cout<<2<<".Dequeue"<<endl;
       cout<<3<<".IsFull"<<endl;
       cout<<4<<".IsEmpty"<<endl;
       cout<<5<<".Display"<<endl;
       cout<<6<<".Count"<<endl;
       cout<<7<<".Clear Screen"<<endl;
       cin>>option;
       switch (option)
       {
       case 1:
            cout<<"Enter a value to be enqueued into the queue"<<endl;
            cin>>n; 
            q1.enqueue(n);
           break;
       case 2:
            q1.dequeue();
            break;
        case 3:
            if(q1.isFull())
                cout<<"The queue is full"<<endl;
            else
                cout<<"The queue is not full"<<endl;
            break;
        case 4:
            if(q1.isEmpty())
                cout<<"The queue is empty"<<endl;
            else
                cout<<"The queue is not empty"<<endl;
            break;
        case 5:
            q1.display();
            break;
        case 6:
            cout<<"The item count of the array is"<<q1.count()<<endl;
            break;
        case 7:
            system("cls");
            break;
        case 0:
            break;
       default:
           cout<<"Please enter a valid option";
           break;
       }
    } while (option!=0);   
}