// struct Node {
//     int data;
//     struct Node* nextNode;
// };

// struct Node* CreateNode(int data) {
//     struct *Node newNode = (struct Node*)malloc(sizeof(struct Node));

//     newNode->data = data;
//     mewMpde->nextNode = NULL;

//     return newNode;
// }

// struct Node* InsertNode(struct Node* current, int data) {
//     struct Node* after = current->nextNode;

//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

//     newNode->data = data;
//     newNode->nextNode = after;

//     current->nextNode = newNode;

//     return newNode;
// }