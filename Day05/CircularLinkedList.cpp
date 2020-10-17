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
class CircularLinkedList{
    public:
        Node* head;
        CircularLinkedList(){
            head=NULL;
        }
        CircularLinkedList(Node* n){
            head=n;
        }
    Node* nodeExists(int k){
        Node* ptr=head;
        Node* temp=NULL;
        if(head==NULL){
            temp=NULL;
        }
        else{
            do
            {
                if(ptr->key==k){
                    temp=ptr;
                    break;
                }  
                ptr=ptr->next; 
            }while (ptr!=head);
        }
        return temp;
    }
    void appendNode(Node* n){
        Node* ptr=head;
        Node* temp=NULL;
        if(nodeExists(n->key)!=NULL){
            cout<<"Node with key value "<<n->key<<" already exists in the circular linked list"<<endl;
        }
        else{
            if(head==NULL){
                head=n;
            }
            else{
                do{
                    if(ptr->next==head){
                        temp = ptr;
                    }
                ptr=ptr->next;
                }while(ptr!=head);
            temp->next=n;
            n->next=head;
            }
            cout<<"Node appended successfully to the circular linked list"<<endl;
        }
    }

    void prependNode(Node* n){
        if(nodeExists(n->key)!=NULL){
            cout<<"Node with key value "<<n->key<<" already exists in the circular linked list"<<endl;
        }
        else{
            Node* ptr=head;
            if(head==NULL){
                head=n;
            }
            else{
                do{
                    ptr=ptr->next;
                }while(ptr->next!=head);
                ptr->next=n;
                n->next=head;
                head=n;
            }
            cout<<"Node prepended successfully"<<endl;
        }
    }
    void insertNodeAfter(int k,Node* n){
        if(nodeExists(n->key)!=NULL){
            cout<<"Node with key value "<<n->key<<" already exists in the circular linked list"<<endl;
        }
        else{
            Node* ptr=head;
            if(head->key==k){
                n->next=head->next;
                head->next=n;
                cout<<"Node appended next to the head node"<<endl;
            }
            else{
                Node* temp=nodeExists(k);
                if(temp==NULL){
                    cout<<"Node with key value "<<k<<" does not exist in the circular linked list"<<endl;
                }
                else{
                    while (ptr->key!=k)
                    {
                        ptr=ptr->next;
                    }
                    n->next=ptr->next;
                    ptr->next=n;
                    cout<<"Node inserted successfully into the circular linked list"<<endl;
                }
            }
        }
    }

    void deleteNodeByKey(int k){
        Node* temp=nodeExists(k);
        if(temp==NULL){
            cout<<"Node with key value "<<k<<" does not exist in the circular linked list"<<endl;
        }
        else{
            if(temp==head && head->next==NULL){
                head=NULL;
                cout<<"Node was head node and was the only node and the circular linked list got deleted"<<endl;
            }
            else if(temp==head){
                Node* ptr=head;
                while(ptr->next!=head){
                    ptr=ptr->next;
                }
                ptr->next=head->next;
                head=head->next;
                cout<<"Node was head node and unlinked successfully"<<endl;
            }
            else{
                Node* req=NULL;
                Node* prev=head;
                Node* curr=head->next;
                while(curr->next!=head){
                    if(curr->key==k){
                        req=curr;
                        break;
                    }
                    else{
                        prev=prev->next;
                        curr=curr->next;
                    }
                }
                prev->next=curr->next;
                curr->next=NULL;
                cout<<"Node with key value "<<k<<" unlinked from the linked list successfully"<<endl;
            }
        }
    }

    void updateNodeByKey(int k,int d){
        Node* ptr=nodeExists(k);
        if(ptr==NULL){
            cout<<"Node with key value "<<k<<" does not exist in the linked list"<<endl;
        }
        else{
            ptr->data=d;
            cout<<"Node with key value "<<k<<" updated successfully"<<endl;
        }

    }

    void display(){
        if(head==NULL){
            cout<<"Circular Linked List is empty"<<endl;
        }
        else{
            Node* ptr=head;
            while(ptr->next!=head){
                cout<<"("<<ptr->key<<","<<ptr->data<<")->";
                ptr=ptr->next;
            }
            cout<<"\n";
        }
    }
};
int main(){
int option,k1,key1,data1;
CircularLinkedList c;
do{
    cout<<"Enter a number between 1 and 8, ENter 0 to exit"<<endl;
    cout<<"1.appendNode()"<<endl;
    cout<<"2.prependNode()"<<endl;
    cout<<"3.insertNodeAfter()"<<endl;
    cout<<"4.deleteNodeByKey()"<<endl;
    cout<<"5.UpdateNodeByKey()"<<endl;
    cout<<"6.display()"<<endl;
    cout<<"7.clear screen"<<endl;
    cin>>option;    
    Node* n1=new Node();
    switch (option)
    {
    case 0:
        break;
    case 1:
        cout<<"Enter the key value of the node to be appended"<<endl;
        cin>>key1;
        cout<<"Enter the data to be appended"<<endl;
        cin>>data1;
        n1->key=key1;
        n1->data=data1;
        c.appendNode(n1);
        break;
    case 2:
        cout<<"Enter the key value of the node to be prepended"<<endl;
        cin>>key1;
        cout<<"Enter the data to be prepended"<<endl;
        cin>>data1;
        n1->key=key1;
        n1->data=data1;
        c.prependNode(n1);
        break;
    case 3:
        cout<<"Enter the key value of the node after the node has to be inserted"<<endl;
        cin>>k1;
        cout<<"Enter the key value of the node to be inserted"<<endl;
        cin>>key1;
        cout<<"Enter the data to be inserted"<<endl;
        cin>>data1;
        n1->key=key1;
        n1->data=data1;
        c.insertNodeAfter(k1,n1);
        break;
    case 4:
        cout<<"Enter the key value of the node to be deleted"<<endl;
        cin>>key1;
        c.deleteNodeByKey(key1);
        break;
    case 5:
        cout<<"Enter the key value of the node which has to be inserted"<<endl;
        cin>>key1;
        cout<<"Enter the data of the node which has to be updated"<<endl;
        cin>>data1;
        c.updateNodeByKey(key1,data1);
        break;
    case 6:
        cout<<"The contents of the linked list are: "<<endl;
        c.display();
        break;
    case 7:
        system("cls");
        break;
    default:
        cout<<"Enter a valid option"<<endl;
        break;
    }
}while(option!=0);
return 0;
}