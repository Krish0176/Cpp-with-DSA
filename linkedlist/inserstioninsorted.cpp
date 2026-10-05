
/* Definition of a Linked List Node
class Node
{
  public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* sortedInsert(Node* head, int key) {
        // code here
        if(head == nullptr || head->data >key){
            Node* newnode = new Node(key);
            newnode->next = head;
            return newnode;
        }
        int curr =0;
        Node* temp = head;
        while(temp != nullptr){
            if(temp->data > key){
                break;
            }
            curr++;
            temp = temp->next;
        }
        temp =head;
        for(int i=0;i<curr-1;i++){
            temp = temp->next;
        }
        Node* newnode = new Node(key);
        newnode->next = temp->next;
        temp->next = newnode;
        return head;
    }
};