//create a node
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this-> data=data;
        this-> next=NULL;
    }
};

void insertHead(Node* &head,int d){
    //new node create
    Node* temp = new Node(d);   
    temp->next=head;
    head=temp;
}

void insertTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertPostion(Node* &tail,Node* &head ,int pos,int d){
    //if postion of insert is 1 then->
        if(pos==1){
            insertHead(head,d);
            return;
        }


    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    //insert at end
    if(temp->next==NULL){
        insertTail(tail,d);
        return;
    }


    //crate node of d
    Node* nodeToInsert=new Node(d);

    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;
    //print(head);
    //insertHead(head,12);
    print(head);

    insertTail(tail,15);
    //print(head);
    insertTail(tail,20);
    //print(head);

    insertPostion(tail,head,4,22);
    print(head);

    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;

}

