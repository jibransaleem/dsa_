#include <bits/stdc++.h>
using namespace std;
class  Node{
public :
    int value;
    Node* next;
    Node(int val){
        value  =val;
        next =NULL;
    }
};
class List{
public :
    Node* head ;
    Node* tail;

    List(){
        head = tail=NULL;
    }
    //Push front:add to the start
    //head set/update
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL) {
            head =  newNode ; 
            return ;
        }
        else{
            newNode->next= head;
            head = newNode;
             
        }     
    
    }
    void add(int val){
        Node* newNode= new Node(val);
        Node* temp = head;
        while (head->next!=NULL)
        {
            head = head->next;
        }
        head->next=newNode;
        head = temp;
        return ;
        
    }
    void show(){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout << temp->value  <<"  ->  ";
            temp = temp->next;
        }
        
    }
};
int main(){
    List  ll;
    ll.push_front(1);
    ll.add(2);
    ll.add(3);
    ll.add(4);
    ll.show();
}