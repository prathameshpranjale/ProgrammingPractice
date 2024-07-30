#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()


class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class linkedlist{
    public:

    Node* head;

    linkedlist(){
        head = nullptr;
    }

    void insertAtbegining(int value){
        Node* node = new Node(value);
        node->next = head;
        head = node;

    }

    void insertAtmiddle(int value,int position){

        if (position <= 0)
        {
            cout << "Position should be >=1" << endl;
            return;
        }

        if(position == 1){
            insertAtbegining(value);
            return;
        }

        Node* temp = head;

        for(int i=1;i<position-1 && temp!=nullptr;i++){
            temp = temp->next;
        }

        Node* node = new Node(value);
        // cout<<temp->data<<endl;
        node->next = temp->next;
        // cout<<node->next->data<<endl;
        temp->next = node;
    }


    void display(){
        Node* temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
   FAST;

   linkedlist list;
   list.insertAtbegining(100);
   list.insertAtbegining(122);
   list.insertAtmiddle(223,3);



   list.display();
       return 0;
}