#include<iostream>
#include<string>
using namespace std;
class Node{
    public:
        int key;
        int data;
        Node* next;
        Node(){
            key=0;
            data=0;
            next=NULL;
        }
        Node(int k,int d){
            key=k;
            data=d;
            next=NULL;
        }
};
class SinglyLinkedList{
    private:
        Node* head;
        Node* lastNode(){
            Node* ptr=head;
            while (ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            return ptr;
        }
    public:
        SinglyLinkedList(){
            head=NULL;
        }
        SinglyLinkedList(Node* n){
            head=n;
        }
        Node* nodeExists(int k){
            Node* ptr=head;
            Node* temp=NULL;
            while(ptr){
                if((ptr->key)==k){
                    temp=ptr;
                    break;
                }
                ptr=ptr->next;
            }
            return temp;
        }
        void appendNode(Node* n){
            if(nodeExists(n->key)){
                cout<<"Node with key value: "<<n->key<<"already exists. Please create another node with different key value."<<endl;
                return;
            }
            else
            {
                if(head==NULL){
                    head=n;
                }
                else{
                    Node* ptr=head;
                    while(ptr->next!=NULL){
                        ptr=ptr->next;
                    }
                    ptr->next=n;
                    n->next=NULL;
                }
                cout<<"Node Appended"<<endl;
            }
            
        }

        void prependNode(Node* n){
            if(nodeExists(n->key)){
                cout<<"Node with key value: "<<n->key<<"already exists. Please create another node with different key value."<<endl;
                return;
            }else{
                if(head==NULL){
                    head=n;
            }   else{
                    n->next=head;
                    head=n;
            }
                cout<<"Node prepended"<<endl;
            }
        }
        void insertNodeAfter(int k,Node* n){
            Node* ptr = nodeExists(k);
            if(ptr){
                if(nodeExists(n->key)){
                    cout<<"Node with key value: "<<n->key<<"already exists. Please create another node with different key value."<<endl;
                    return;
                }
                else{
                    n->next=ptr->next;
                    ptr->next=n;
                    cout<<"Node inserted after the node with key value"<<k<<endl;
                }
            }
            else{
                cout<<"No node exists with key value: "<<k<<endl;
            }
        }
        void deleteNodeByKey(int k){
            if(head==NULL){
                cout<<"Singly linked list already empty, cannot delete a node from empty linked list"<<endl;
                return;
            }
            else
            {
                if(head->key==k){
                    head=head->next;
                    cout<<"Node was head node and it was unlinked from the linked list"<<endl;
                }
                else{
                    Node* temp=NULL;
                    Node* prev=head;
                    Node* current=(head->next);
                    while(current!=NULL){
                        if(current->key==k){
                            temp=current;
                            current= NULL;
                        }
                        else{
                            prev=prev->next;
                            current=current->next;
                        }
                    }
                    if(temp!=NULL){
                        (prev->next)=(temp->next);
                        temp->next=NULL;
                        cout<<"Node unlinked from the linked list"<<endl;
                    }else{
                        cout<<"Node with the given key value does not exist in the linked list"<<endl;
                    }
                }
            }
        }
        void updateNodeByKey(int k,int d){
            Node* n=nodeExists(k);
            if(n){
                n->data=d;
                cout<<"Node with key value: "<<k<<" updated successfully"<<endl;
            }else{
                cout<<"Node with the given key value does not exist in the linked list"<<endl;
            }
        }
        void display(){
            if(head==NULL){
                cout<<"The linked list is empty"<<endl;
            }
            else{
                Node* ptr=head;
                cout<<"The contents of linked list are"<<endl;
                while(ptr!=NULL)
                {
                    cout<<"(Key="<<ptr->key<<", data="<<ptr->data<<")-->"<<" ";
                    ptr=ptr->next;
                }
                cout<<endl;    
            }
        }
        void count(){
            Node* ptr=head;
            int count=0;
            while(ptr!=NULL){
                count++;
                ptr=ptr->next;
            }
            cout<<"The number of nodes in the linked list are: "<<count<<endl;
        }
};
int main(){
    int option,key1,k1,data1;
    SinglyLinkedList s;
    while(option){
        cout<<"Enter a number between 1 and 8, ENter 0 to exit"<<endl;
        cout<<"1.appendNode()"<<endl;
        cout<<"2.prependNode()"<<endl;
        cout<<"3.insertNodeAfter()"<<endl;
        cout<<"4.deleteNodeByKey()"<<endl;
        cout<<"5.UpdateNodeByKey()"<<endl;
        cout<<"6.display()"<<endl;
        cout<<"7.count()"<<endl;
        cout<<"8.clear screen"<<endl;
        cin>>option;    
        Node* n1=new Node();
        switch(option){
            case 0:
                break;
            case 1: 
                cout<<"Enter the key value to be appended to the linked list"<<endl;
                cin>>key1;
                cout<<"Enter the data to be inserted in the node"<<endl;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                s.appendNode(n1);
                break;
            case 2:
                cout<<"Enter the key to be prepended to the linked list"<<endl;
                cin>>key1;
                cout<<"Enter the data to be inserted in the node"<<endl;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                s.prependNode(n1);
                break;
            case 3:
                cout<<"Enter the key value of the node after which the node has to be inserted"<<endl;
                cin>>k1;
                cout<<"Enter the key value of the node to be inserted in the linked list"<<endl;
                cin>>key1;
                cout<<"Enter the data to be inserted in the node"<<endl;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                s.insertNodeAfter(k1,n1);
                break;
            case 4:
                cout<<"Enter the key value of the node to be deleted"<<endl;
                cin>>key1;
                s.deleteNodeByKey(key1);
                break;
            case 5:
                cout<<"Enter the key value of the node to be updated"<<endl;
                cin>>key1;
                cout<<"Enter the data to be updated in the node with key value"<<key1<<endl;
                cin>>data1;
                s.updateNodeByKey(key1,data1);
                break;
            case 6:
                s.display();
                break;
            case 7:
                s.count();
                break;
            case 8:
                system("cls");
                break;
            default:
                cout<<"Enter a valid key value between 1 & 8"<<endl;
                break;
        }
    }
    return 0;
}