#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;           // Data to be stored in the node
    struct Node* next;  // Pointer to the next node in the list
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));  // Allocate memory for the new node
    if (newNode == NULL) {
        printf("Memory allocation failed");
        exit(1);
    }
    newNode->data = data;   // Set the data for the new node
    newNode->next = NULL;   // Set the next pointer to NULL
    return newNode;
}

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);  // Create a new node with the given data
    newNode->next = *head;  // Set the next pointer of the new node to the current head
    *head = newNode;        // Set the new node as the new head of the list
}

// Function to print the elements of the linked list
void printList(struct Node* head) {
    struct Node* current = head;  // Start from the head of the list
    while (current != NULL) {
        printf("%d -> ", current->data);  // Print the data of the current node
        current = current->next;          // Move to the next node
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;  // Initialize an empty linked list

    // Insert some elements at the beginning of the list
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 7);

    // Print the elements of the linked list
    printf("Linked list: ");
    printList(head);

    return 0;
}
```

/*In this example, we define a `struct Node` to represent each node in the linked list. The `createNode` function is used to create a new node with the given data. The `insertAtBeginning` function is used to insert a new node at the beginning of the list. The `printList` function is used to print the elements of the linked list. In the `main` function, we create a linked list and insert some elements into it, then print the elements to verify the implementation.*/
