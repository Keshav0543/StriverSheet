#include <iostream>
#include <vector>
using namespace std;




class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};


Node* ReverseList(Node*head){
    //BAse cases
    if(head==nullptr || head->next==nullptr)return head;
    //Hypothesis;
    Node*temp=head;
    head=head->next;
    temp->next=nullptr;
    Node*temp1=ReverseList(head);
    //Induction
    head->next=temp;
    return temp1;
}

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head=nullptr;
    }

    void Insert(int val){
        if(head==nullptr){
            head=new Node(val);
        }
        else{
            Node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=new Node(val);
        }
    }

    void Print(){
        Node *temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void Reverse(){
        Node *temp=head;
        head=ReverseList(temp);
        cout<<"Reversed Done..."<<endl;
    }
};


int main(){
    LinkedList l1;
    l1.Insert(2);
    l1.Insert(3);
    l1.Insert(4);
    l1.Insert(5);
    l1.Print();
    l1.Reverse();
    l1.Print();
    l1.Reverse();
    l1.Print();
    return 0;
}