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


//==========================================================================

struct Node *tree_add (struct Node *tree, Data x);

//void tree_print (struct Node *tree);

void tree_destroy(struct Node *tree);

int tree_heigh(struct Node *tree);

//void tree_print_leafs (struct Node *tree);

int isBalanced (struct Node *tree);

//--------------------------------------------------------------------------

int main () {
  struct Node * tree = NULL;
  
  int x;
  scanf("%d", &x);
  while(x != 0) {

    tree = tree_add(tree, x);

    scanf("%d", &x);
  }

  if (isBalanced(tree) == 1) {

    printf("YES\n");
  }

  else {

    printf("NO\n");
  }

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

void tree_destroy(struct Node *tree) {

  if (tree != NULL) {

    tree_destroy(tree->left);

    tree_destroy(tree->right);

    free(tree);
  }

  return;
}

//==========================================================================