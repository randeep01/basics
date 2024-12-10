struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

void insertAtBeginning(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head != nullptr) {
        newNode->next = head;
        head->prev = newNode;
    }
    head = newNode;
}

void insertAfter(Node* prevNode, int data) {
    if (prevNode == nullptr) return;
    Node* newNode = new Node(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    newNode->prev = prevNode;
    if (newNode->next != nullptr) {
        newNode->next->prev = newNode;
    }
}

void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void insertBefore(Node*& head, Node* nextNode, int data) {
    if (nextNode == nullptr) return;
    Node* newNode = new Node(data);
    newNode->prev = nextNode->prev;
    newNode->next = nextNode;
    if (nextNode->prev != nullptr) {
        nextNode->prev->next = newNode;
    }
    else {
        head = newNode;
    }
    nextNode->prev = newNode;
}

void deleteFromBeginning(Node*& head) {
    if (head == nullptr) return;
    Node* temp = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    }
    delete temp;
}
void deleteFromEnd(Node*& head) {
    if (head == nullptr) return;
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    if (temp->prev != nullptr) {
        temp->prev->next = nullptr;
    } else {
        head = nullptr;
    }
    delete temp;
}



void forwardTraversal(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

void backwardTraversal(Node* head) {
    Node* temp = head;
    if (temp == nullptr) return;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->prev;
    }
    std::cout << std::endl;
}

bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key) return true;
        temp = temp->next;
    }
    return false;
}

void updateNode(Node* head, Node* targetNode, int newValue) {
    if (targetNode != nullptr) {
        targetNode->data = newValue;
    }
}

int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }
    return length;
}

bool isEmpty(Node* head) {
    return head == nullptr;
}


void reverseList(Node*& head) {
    Node* temp = nullptr;
    Node* current = head;
    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != nullptr) {
        head = temp->prev;
    }
}

