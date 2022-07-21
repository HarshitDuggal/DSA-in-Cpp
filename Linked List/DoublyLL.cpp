// #include<iostream>
// using namespace std;

// class Node{
//   public:
//   int data;
//   Node* prev;
//   Node* next;
//   //constructor
//  Node(int d){
//    this-> data = d;
//    this-> prev = NULL;
//    this-> next = NULL;
//  }
// //destructor
//  ~Node(){
//    int value = this -> data;
//    if(next != NULL){
//      delete next;
//      next = NULL;
//    }
//    cout << "memory free of node with data" << value << endl;
//  }
// };

// void insertAtHead(Node* &Tail,Node* &Head,int d){
//   if(Head == NULL){
//     Node* temp =new Node(d);
//     Head = temp;
//     Tail = temp;
//     return;
//   }
//   else{
//   Node* temp = new Node(d);
//   temp-> next = Head;
//   Head-> prev = temp;
//   Head = temp;
//   return; 
//   }
// }

// void insertAtTail(Node* &Head,Node* &Tail,int d){
//   if(Tail == NULL){
//     Node* temp =new Node(d);
//     Head = temp;
//     Tail = temp;
//     return;
//   }
//   else{
//   Node* temp = new Node(d);
//   Tail -> next = temp;
//   temp-> prev = Tail;
//   Tail = temp;
//   return; 
//   }
// }
// void insertAtPosition(Node* &Tail,Node* &Head,int position,int d){
//   if(position == 1){
//     insertAtHead(Tail,Head, d);
//     return;
//   }
//   int count=1;
//   Node* temp = Head;
//   while(count < position-1){
//     temp = temp -> next;
//     count ++;
//   }
//   if(temp-> next == NULL){
//     insertAtTail(Head,Tail,d);
//     return;
//   }
//   Node* newNode = new Node(d);
//   newNode -> prev = temp;
//   newNode -> next = temp -> next;
//   temp -> next -> prev = newNode;
//   temp -> next = newNode; 
//   return;
// }
// void deleteNode(Node* &Tail,Node* &Head,int position){
//   //for 1st position
//   if(position == 1){
//     Node* temp = Head;
//     temp -> next -> prev = NULL;
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
//     curr -> prev = NULL;
//     prev -> next = curr -> next;
//     curr -> next = NULL;
//     delete curr;
//     return;
//   }
// }
// void print(Node* &Head){
//   Node* temp = Head;
//   while(temp != NULL){
//     cout << temp -> data << " ";
//     temp = temp -> next;
//   }
//   cout << endl;
//   return;
// }

// int main(){
//   // Node* one = new Node(10);
//   Node* Head = NULL;
//   Node* Tail = NULL;
//   insertAtTail(Head,Tail,15);
//   insertAtTail(Head,Tail,14);
//   insertAtTail(Head,Tail,11);
//   insertAtTail(Head,Tail,12);
//   insertAtTail(Head,Tail,13);
//   print(Head);
//   insertAtPosition(Tail, Head,3, 9);
//   print(Head);
//   insertAtPosition(Tail, Head,1, 8);
//   print(Head);
//   insertAtPosition(Tail, Head,8, 9);
//   print(Head);
//   cout << Head-> data<<endl;
//   cout << Tail-> data<<endl;
//   deleteNode(Tail,Head,8);
//   print(Head);
//   cout << Head-> data<<endl;
//   cout << Tail-> data<<endl;
//   return 0;
// }