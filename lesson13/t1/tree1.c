#include <stdio.h>
#include <stdlib.h>

//--------------------------------------------------------------------------

typedef int Data;

typedef struct Node
{
  Data val;
  struct Node *left;
  struct Node *right;
}node_t;

//==========================================================================

node_t *tree_add (node_t *tree, Data x);

void tree_print (node_t *tree);

void tree_destroy(node_t *tree);

//--------------------------------------------------------------------------

int main(){

  node_t * tree=NULL;
  tree = tree_add(tree, 7);
  tree = tree_add(tree, 3);
  tree = tree_add(tree, 2);
  tree = tree_add(tree, 1);
  tree = tree_add(tree, 9);
  tree = tree_add(tree, 5);
  tree = tree_add(tree, 4);
  tree = tree_add(tree, 6);
  tree = tree_add(tree, 8);

  tree_print(tree); // напечатает 1 2 3 4 5 6 7 8 9

  tree_destroy(tree);

  return 0;
}

//--------------------------------------------------------------------------

node_t *tree_add (node_t *tree, Data x){

  if (tree == NULL){

    tree = (node_t*) calloc(1, sizeof(node_t));

    tree->val = x;

    tree->left = NULL;

    tree->right = NULL;
  }

  else if (x < tree->val){

    tree->left = tree_add (tree->left, x);
  }

  else if (x > tree->val){

    tree->right = tree_add (tree->right, x);
  }

  return tree;
}

//--------------------------------------------------------------------------

void tree_print (node_t *tree){

  if (tree != NULL){

    tree_print(tree->left);

    printf("%d ", tree->val);

    tree_print(tree->right);
  }

  return;
}

//--------------------------------------------------------------------------

void tree_destroy(node_t *tree){

  if(tree != NULL){

    tree_destroy(tree->left);

    tree_destroy(tree->right);

    free(tree);
  }

  return;
}

//==========================================================================