


struct Node {
  int data;
  struct Node* next;
};

/* global var */
struct Node* head;

void Insert(int x);
void Print();

int main()
{
  head = NULL;
  int n, i, x;
  
}

/* note, we are always inserting in the beginning of the list */
void Insert(int x)
{
  Node* temp = (Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = NULL;
  if (head != NULL) {
    temp->next = head;
  }
  head = temp; /* will also cover the case when head is null */
}

/* below is simplified of above */
void Insert(int x)
{
  Node* temp = (Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = head;
  head = temp; /* will also cover the case when head is null */
}

void Print()
{
  struct Node* temp = head;
  while (temp != NULL)
    {
      printf(" %d", temp->data);
      temp = temp->next;
    }
}
