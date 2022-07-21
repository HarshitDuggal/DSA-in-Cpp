// #include <iostream>
// using namespace std;

// class Node{
//   public:
//   int data;
//   Node* next;
// //constructor
//   Node(int data){
//     this->data = data;
//     this->next = NULL;
//   }
//   ~Node(){
//     int value = this->data;
//     //memory free
//     if(this-> next != NULL){
//       delete next;
//       this-> next = NULL;
//     }
//     cout << "Data is free for" << value << endl;
//   }
// };

// void insertAtHead(Node* &Head,int d){
//   Node* temp = new Node(d);
//   temp -> next = Head;
//   Head = temp;
//   return;
// }
// void insertAtTail(Node* &Tail,int d){
//   Node* temp = new Node(d);
//   Tail -> next = temp;
//   Tail = temp;
//   return;
// }
// void insertAtPosition(Node* &Tail,Node* &Head,int position,int d){
//   if(position == 1){
//     insertAtHead(Head,d);
//     return;
//   }
//   Node* temp = Head;
//   int count = 1;
//   while(count < position-1){
//     temp = temp -> next;
//     count++;
//   }
//   if(temp-> next == NULL){
//     insertAtTail(Tail, d);
//     return;
//   }
//   Node* nodetoinsert = new Node(d);
//   nodetoinsert -> next = temp -> next;
//   temp -> next = nodetoinsert;
//   return;
// }
// void deleteNode(Node* &Tail,Node* &Head,int position){
//   //for 1st position
//   if(position == 1){
//     Node* temp = Head;
//     Head = Head -> next;
//     //memory free
//     temp -> next = NULL;
//     delete temp;
//   }
//   //for middle or last position  
//   else{
//     Node* prev = NULL;
//     Node* curr = Head;
//     int start = 1;
//     while(start < position){
//       prev = curr;
//       curr = curr -> next;
//       start++;
//     }
//     if(curr -> next == NULL){
//       Tail = prev;
//     }
//     prev-> next = curr -> next;
//     curr -> next = NULL;
//     delete curr;
//     return;
//   }
// }
// void print(Node* &Head){
//   Node* temp = Head;
//   while(temp!=NULL){
//     cout << temp -> data << " ";
//     temp = temp -> next;
//   }
//   cout << endl;
//   return;
// }

// int main(){
//   Node* one = new Node(10);
//   // cout << one -> data << endl;
//   // cout << one -> next << endl;
//   Node* Head = one;
//   Node* Tail = one;
//   print(Head);
//   insertAtTail(Tail,12);
//   print(Head);
//   insertAtTail(Tail,15);
//   print(Head);
//   insertAtPosition(Tail,Head,3, 16);
//   print(Head);
//   cout << Head-> data <<endl;
//   cout << Tail-> data << endl;
//   deleteNode(Tail,Head, 4);
//   print(Head);
//   //hw tail position set roght(done)
//   cout << Head-> data <<endl;
//   cout << Tail-> data << endl;
  
//   return 0;
// }