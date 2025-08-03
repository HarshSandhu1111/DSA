#include<iostream>
#include<vector>    
using namespace std;


class Node{
public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
    }
};

Node* convertlltoarr(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i],nullptr,prev);
    prev->next = temp;
    prev=temp;
}
return head;

}
Node* deletehead(Node* head){
    Node* prev=head;
    head=head->next;
    head->back=NULL;
prev->next = NULL;

delete prev;
return head;
}
Node* deletetail(Node* head){
   Node *prev=head;
   while(prev->next!=NULL){
    prev=prev->next;
   }
   prev->back->next = NULL;
   prev->back=NULL;
   delete prev;

return head;
}

Node* inserthead(Node* head,int val){
    Node* temp = new Node(val);
    temp->next=head;
    head->back=temp;
    head=temp;
    return head;
}
Node* inserttail(Node* head,int val){
    Node* tail= head;
    while(tail->next!=NULL){
        tail=tail->next;
    }

    Node* temp = new Node(val,tail,tail->back);
    
    tail->back->next=temp;
    tail->back = temp;
    return head;
}

Node* reversedll(Node* head){
    Node* temp=head;
    Node* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    while (temp != temp1 && temp->next != temp1)
{
        int temp3=temp1->data;
        temp1->data = temp->data;
        temp->data = temp3;
        temp=temp->next;
        temp1=temp1->back;
    }
    return head;
}

void printll(Node* head){
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
}
}

int main(){
 vector<int> arr = {12, 8, 5, 7};
    Node* head=convertlltoarr(arr);
    Node* h = reversedll(head);
    printll(h);
  

}