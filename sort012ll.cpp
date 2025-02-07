
class Solution {
  public:
  
  
  void insertAtTail(int value, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else {
 
    Node* newNode = new Node(value);
    tail->next  = newNode;
    tail = newNode;
  }

}
    Node* segregate(Node* head) {
        
    if (!head) return NULL;  

       Node*zeroHead =NULL ,*zeroTail=NULL;
       Node*oneHead =NULL ,*oneTail=NULL;
       Node*twoHead =NULL ,*twoTail=NULL;
       
       Node*temp=head;
       while(temp!=NULL){
            
            if (temp->data ==0){
                insertAtTail(0,zeroHead,zeroTail);
            } 
            else if(temp->data== 1){
                insertAtTail(1,oneHead,oneTail);
            }
            else {
                insertAtTail(2,twoHead,twoTail);
            }
            temp=temp->next;
       }
       
      if (zeroTail) zeroTail->next = oneHead ? oneHead : twoHead;
        if (oneTail) oneTail->next = twoHead;

        return zeroHead ? zeroHead : (oneHead ? oneHead : twoHead);
       
    }
};



