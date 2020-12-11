#include <stdio.h>
#include <stdlib.h>

//--------------------------------------------------------------------------

typedef int Data;

struct Node
{
  Data val;
  struct Node *left;
  struct Node *right;
};

typedef struct list
{

  struct Node *elem;

  struct list *next;
} list_t;


//==========================================================================

struct Node *tree_add (struct Node *tree, Data x);

//void tree_print (struct Node *tree);

void tree_destroy(struct Node *tree);

//int tree_heigh(struct Node *tree);

//void tree_print_leafs (struct Node *tree);

//int isBalanced (struct Node *tree);

//void tree_print_deep (struct Node *tree, int deep, int N);

//--------------------------------------------------------------------------

list_t* Construct(int num);

void addLast(list_t *head, struct Node *elem);

void rmFirst(list_t **head);

void Destruct(list_t **head);

//--------------------------------------------------------------------------

int main () {
  struct Node * tree = NULL;
  
  int x;
  scanf("%d", &x);
  while(x != 0) {

    tree = tree_add(tree, x);

    scanf("%d", &x);
  }

  list_t *head = Construct(1);

  head->elem = tree;

  while (head != NULL) {

    printf("%d ", head->elem->val);

    if (head->elem->left != NULL) {

      addLast(head, head->elem->left);
    }

    if (head->elem->right != NULL) {

      addLast(head, head->elem->right);
    }

    rmFirst(&head);
  }

  Destruct(&head);

  tree_destroy(tree);

  return 0;
}

//--------------------------------------------------------------------------

int max(int a, int b) {

  if (a >= b)
    return a;

  else
    return b;
}

int tree_heigh(struct Node *tree) {

  if(tree != NULL) {

    return 1 + max(tree_heigh(tree->left), tree_heigh(tree->right));
  }

  else
    return 0;
}

//--------------------------------------------------------------------------

struct Node *tree_add (struct Node *tree, Data x) {

  if (tree == NULL) {

    tree = (struct Node*) calloc(1, sizeof(struct Node));

    tree->val = x;

    tree->left = NULL;

    tree->right = NULL;
  }

  else if (x < tree->val) {

    tree->left = tree_add (tree->left, x);
  }

  else if (x > tree->val) {

    tree->right = tree_add (tree->right, x);
  }

  return tree;
}

//--------------------------------------------------------------------------

/*void tree_print (struct Node *tree) {

  if (tree != NULL) {

    tree_print(tree->left);

    printf("%d ", tree->val);

    tree_print(tree->right);
  }

  return;
}*/

//--------------------------------------------------------------------------

/*void tree_print_leafs (struct Node *tree) {

  if (tree != NULL) {

    tree_print_leafs (tree->left);

    if (tree->left == NULL && tree->right == NULL)
      printf("%d ", tree->val);

    tree_print_leafs (tree->right);
  }

  return;
}*/

//--------------------------------------------------------------------------

/*int isBalanced (struct Node *tree) {

  if (tree->left != NULL && tree->right != NULL) {

    if (isBalanced(tree->left) && isBalanced(tree->right)) {

      return 1;
    }

    else {

      return 0;
    }
  }

  else {

    if (tree->left == NULL && tree_heigh(tree->right) <= 1) {

      return 1;
    }

    else if (tree->right == NULL && tree_heigh(tree->left) <= 1) {

      return 1;
    }

    else {

      return 0;
    }
  }
}*/

//--------------------------------------------------------------------------

/*void tree_print_deep (struct Node *tree, int deep, int N) {

  if (tree != NULL) {

    tree_print_deep (tree->left, deep + 1, N);

    if (deep == N) {

      printf("%d ", tree->val);
    }

    tree_print_deep (tree->right, deep + 1, N);
  }

  return;
}*/

//--------------------------------------------------------------------------

void tree_destroy(struct Node *tree) {

  if (tree != NULL) {

    tree_destroy(tree->left);

    tree_destroy(tree->right);

    free(tree);
  }

  return;
}

//==========================================================================

list_t* Construct(int num) {

  list_t *head = NULL, *current, *prev;

  int i;
  for(i = 0; i < num; i++) {

    current = (list_t*) calloc(1, sizeof(list_t));

    if(head == NULL)
      head = current;

    else
       prev->next = current;

    current->next = NULL;
    prev = current;
  }

  return head;
}

//--------------------------------------------------------------------------

void addLast(list_t *head, struct Node *elem) {

  list_t *current = head;

  while(current->next != NULL)
    current = current->next;

  current->next = (list_t*) calloc(1, sizeof(list_t));

  current = current->next;

  current->elem = elem;

  current->next = NULL;

  return;
}

//--------------------------------------------------------------------------

void rmFirst(list_t **head) {

  list_t *temp = (list_t*) calloc(1, sizeof(list_t));

  temp = (*head)->next;

  free(*head);

  *head = temp;

  return;
}

//--------------------------------------------------------------------------

void Destruct(list_t **head) {

  list_t *current = *head;

  while(*head != NULL) {

    *head = current->next;

    free(current);

    current = *head;
  }
}

//==========================================================================