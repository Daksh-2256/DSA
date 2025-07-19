#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        //constructor
        Node(int d){
            this->data=d;
            this->prev=NULL;
            this->next=NULL;
        }
        ~Node(){
            int val=this->data;
            if(next!=NULL){
                delete next;
                next=NULL;
            }
            cout<<"memory is free"<<val<<endl;
        }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
   return len;
}
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}

void inserAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
   tail->next=temp;
   temp->prev=tail;
   tail=temp;
  
}

void inserAtPossition(Node* &tail,Node* &head,int pos,int d){
    //insert at start
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    //insert at last pos
    if(temp->next==NULL){
        inserAtTail(tail,d);
    }
    //create a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
void deleteNode(int pos,Node* &head){
    //delete first or start node
    if(pos==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    //delete node of any postion like last and any particular
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt <= pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
    }
}


int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,12);
    insertAtHead(head,14);


    inserAtTail(tail,16);
    print(head);

    inserAtPossition(tail,head,2,100);
    print(head);
}