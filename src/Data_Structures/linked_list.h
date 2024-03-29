#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct node
{
  struct node *nxt;
  struct node *prev;
  void *data;
} Node;

typedef struct linked_list
{
  Node *head;
  Node *tail;
  int size;
} LinkedList;

/**
 * @brief creates a linked list node
 * @param obj the object to add reference to in the linked list
 * @return pointer to linked list node created
 */
Node *CreateNode(void *obj);

/**
 * @brief creates a linked list
 * @return pointer to linked list created
 */
LinkedList *CreateLinkedList();

/**
 * @brief adds node to linked list
 * @param listPtr pointer to linked list
 * @param nodePtr pointer to node
 * @return void
 */
void AddNode(LinkedList *listPtr, Node *nodePtr);

/**
 * @brief adds node to end of linked list
 * @param  listPtr pointer to linked list
 * @param  nodePtr pointer to node
 * @return void
 */
void AddNodeToBack(LinkedList *listPtr, Node *nodePtr);

/**
 * @brief adds node to front of a linked list
 * @param listPtr pointer to linked list
 * @param nodePtr pointer to node
 * @return void
 */
void AddNodeToFront(LinkedList *listPtr, Node *nodePtr);

/**
 * @brief removes node from linked list
 * @param listPtr pointer to linked list
 * @param nodePtr pointer to node
 * @return pointer to node
 */
void *RemoveNode(LinkedList *listPtr, Node *nodePtr);

/**
 * @brief removes node from front of linked list
 * @param listPtr pointer to linked list
 * @return pointer to node
 */
void *RemoveNodeFromFront(LinkedList *listPtr);

/**
 * @brief removes node from back of linked list
 * @param listPtr pointer to linked list
 * @return pointer to node
 */
void *RemoveNodeFromBack(LinkedList *listPtr);


/**
 * @brief peeks at the first node of the linked list
 * @param listPtr pointer to linked list
 * @return pointer to data of the first node, or NULL if the list is empty
 */
void *Peek(LinkedList *listPtr);

#endif