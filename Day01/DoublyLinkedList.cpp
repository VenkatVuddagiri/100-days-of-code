// Question:Implement a Doubly linked List in C++ using array data structure 
#include<iostream>
#include<string>
using namespace std;
class Node{
    public:
        int key;
        int data;
        Node* prev;
        Node* next;
        Node(){
            key=0;
            data=0;
            prev=NULL;
            next=NULL;
        }
        Node(int k,int d){
            key=k;
            data=d;
            prev=NULL;
            next=NULL;
        }
};

class DoublyLinkedList{
public:
    Node* head;
    DoublyLinkedList(){
        head=NULL;
    }
    DoublyLinkedList(Node* n){
        head=n;
    }
    Node* nodeExists(int k){
        Node* temp=NULL;
        Node* ptr=head;
            while (ptr!=NULL)
            {
                if(ptr->key==k){
                    temp=ptr;
                    break;
                }
                ptr=ptr->next;
            }
        return temp;
    }

    void appendNode(Node* n){
        if(nodeExists(n->key)){
            cout<<"Node with key value "<<n->key<<" already exist"<<". Append another node with different key value."<<endl;
        }
        else{
            if(head==NULL){
                head=n;
                cout<<"Node appended as the head node"<<endl;
            }
            else{
                Node* ptr=head;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=n;
                n->prev=ptr;
                n->next=NULL;
                cout<<"Node appended to the doubly linked list"<<endl;
            }
        }
    }

    void prependNode(Node* n){
        if(nodeExists(n->key)){
             cout<<"Node with key value "<<n->key<<" already exists"<<". Prepend another node with different key value."<<endl;
        }
        else{
            if(head==NULL){
                head=n;
                n->prev=NULL;
                n->next=NULL;
            }
            else{
                head->prev=n;
                n->prev=NULL;
                n->next=head;
                head=n; 
            }
            cout<<"Node with key value "<<n->key<<" prepended to the linked list"<<endl;
        }
    }

    void insertNodeAfterByKey(int k,Node* n){
        Node* ptr=nodeExists(k);
        if(ptr==NULL){
            cout<<"Node with key value "<<k<<" does not exist in the doubly linked list"<<endl;
        }
        else{
            if(nodeExists(n->key)!=NULL){
                cout<<"Node with key value "<<n->key<<" already exists"<<". Insert another node with different key value."<<endl;
            }
            else{
                Node* temp=NULL;
                Node* walker=head;
                while(walker!=NULL){
                    if(walker->key==k){
                        temp=walker;
                        break;
                    }
                    else{
                        walker=walker->next;
                    }
                }
                if(temp==NULL){
                    cout<<"Node with given key value doesnot exist in the doubly linked list."<<endl;
                }
                else{
                    Node* nextNode=temp->next;
                    temp->next=n;
                    n->prev=temp;
                    n->next=nextNode;
                    cout<<"Node inserted after the node with key value "<<k<<" in the doubly linked list."<<endl;
                }
            }
        }
    }

    void deleteNodeByKey(int k){
        Node* ptr=nodeExists(k);
        if(ptr==NULL){
            cout<<"Node with given key value does not exist in the doubly linked list"<<endl;
        }
        else{
            if(head==NULL){
                cout<<"Linked list is empty, cannot delete a node from linked list"<<endl;
            }
            else if(head->key==k){
                head=head->next;
                head->prev=NULL;
                cout<<"Node was head node and was unlinked from the linked list"<<endl;
            }
            else{
                Node* prevptr=ptr->prev;
                Node* nextptr=ptr->next;
                if(nextptr==NULL){
                    prevptr->next=NULL;
                    cout<<"Last node deleted from the linked list"<<endl;
                }
                else{
                    prevptr->next=nextptr;
                    nextptr->prev=prevptr;
                    cout<<"Node was unlinked from the doubly linked list"<<endl;
                }
            }
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
            }
    }

    void updateNodeByKey(int k,int d){
        Node* ptr=nodeExists(k);
        if(ptr==NULL){
            cout<<"Node with key value "<<k<<" does not exist in the doubly linked list"<<endl;
        }
        else{
            ptr->data=d;
            cout<<"Node with key value "<<k<<" updated successfully"<<endl;
        }
    }

};
int main(){
    int option,data1,k1,key1;
    DoublyLinkedList d;
    while (option)
    {
        cout<<"Enter a number between 1 & 7 and 0 to exit"<<endl;
        cout<<"1.appendNode()"<<endl;
        cout<<"2.prependNode()"<<endl;
        cout<<"3.insertNodeAfter()"<<endl;
        cout<<"4.deleteNodeByKey()"<<endl;
        cout<<"5.UpdateNodeByKey()"<<endl;
        cout<<"6.display()"<<endl;
        cout<<"7.clear screen"<<endl;
        cin>>option;    
        Node* n1=new Node();
        switch(option){
            case 0:
                break;
            case 1: 
                cout<<"Enter the key value of the node to be appended"<<endl;
                cin>>key1;
                cout<<"Enter the data of the node to be appended"<<endl;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                d.appendNode(n1);
                break;
            case 2:
                cout<<"Enter the key value of the node to be prepended"<<endl;
                cin>>key1;
                cout<<"Enter the data of the node to be prepended"<<endl;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                d.prependNode(n1);
                break;
            case 3:
                cout<<"Enter the key value of the node after which the node is to be inserted"<<endl;
                cin>>k1;
                cout<<"Enter the key value of the node to be inserted"<<endl;
                cin>>key1;
                cout<<"Enter the data of the node to be inserted"<<endl;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                d.insertNodeAfterByKey(k1,n1);
                break;
            case 4:
                cout<<"Enter the key value of the node which has to be deleted"<<endl;
                cin>>k1;
                d.deleteNodeByKey(k1);
                break;
            case 5:
                cout<<"Enter the key value of the node which has to be updated"<<endl;
                cin>>k1;
                cout<<"Enter the data that has to be updated"<<endl;
                cin>>data1;
                d.updateNodeByKey(k1,data1);
                break;
            case 6:
                d.display();
                cout<<"\n";
                break;
            case 7:
                system("cls");
                break;
            default:
                cout<<"Enter a valid number between 0 and 7"<<endl;
                break;
        }
    }
    return 0;
}