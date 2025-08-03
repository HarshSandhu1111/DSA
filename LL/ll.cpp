#include<iostream>
using namespace std;
#include <vector>

class Node {
    public:
    int data;
    Node* next;
    
    // constructor
    Node (int data1,Node* next1){
         data=data1;
        next=next1;
    } 
       Node (int data1){
        data=data1;  
        next=nullptr;  
    }  
};

   Node* convertlltoarr(vector<int> &arr){
        Node *head= new Node(arr[0]);
        Node* mover=head;
        for(int i=1;i<arr.size();i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover=temp; 
        }
        return head;

    }
    Node* addll(int x,Node* head){
        Node*  temp = new Node(x,head);
        return temp;
    }
    void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    vector<int> arr = {12, 8, 5, 7};
    int val = 100;
    //Manual insertion
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    //update the head
    head = addll(val,head);
    //print 
    printLL(head);
   
}
