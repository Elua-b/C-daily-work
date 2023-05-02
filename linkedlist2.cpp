class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
    
    void insert(int val, int index) {
        Node* newNode = new Node(val);
        
        if (index == 0) {
            newNode->next = this;
            return;
        }
        
        Node* currNode = this;
        int i = 0;
        while (i < index - 1 && currNode->next != NULL) {
            currNode = currNode->next;
            i++;
        }
        
        if (i == index - 1) {
            newNode->next = currNode->next;
            currNode->next = newNode;
        }
    }
};
int main() {
    // Create a linked list with three nodes
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    // Insert a node at position 0 (beginning)
    head->insert(0, 0);
    
    // Insert a node at position 2 (middle)
    head->insert(4, 2);
    
    // Insert a node at position 5 (end)
    head->insert(5, 5);
    
    // Print the contents of the linked list
    Node* currNode = head;
    while (currNode != NULL) {
        cout << currNode->data << " ";
        currNode = currNode->next;
    }
    
    // Free memory used by the linked list
    currNode = head;
    while (currNode != NULL) {
        Node* nextNode = currNode->next;
        delete currNode;
        currNode = nextNode;
    }
    
    return 0;
}

