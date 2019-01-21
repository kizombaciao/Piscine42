
/* 
   Inserting a node at beginning
   using local variable for head
   https://www.youtube.com/watch?v=cAZ8CyDY56s&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=6
 */

struct Node {
  int data;
  struct Node* next;
};

void Insert(int x);
void Print(Node* head); /* this head is a local variable, a copy */

int main()
{
  Node* head = NULL;
  int n, i, x;
  head = Insert(head, x); /* if we used &head, then need Node** head */
  Print(head);
}

/* note, we are always inserting in the beginning of the list */
Node* Insert(Node* head, int x)
{
  Node* temp = (Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = NULL;
  if (head != NULL) {
    temp->next = head;
  }
  head = temp; /* will also cover the case when head is null */
  return (head);
}

/* below is simplified of above */
void Insert(int x)
{
  Node* temp = (Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = head;
  head = temp; /* will also cover the case when head is null */
}

void Print(Node* head) /* like temp before, head here is a local var */
{
  while (head != NULL)
    {
      printf(" %d", head->data);
      head = head->next;
    }
}
