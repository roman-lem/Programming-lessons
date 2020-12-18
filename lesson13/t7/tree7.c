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

struct Node *tree_add (struct Node *tree, Data x);   // Думаю, тут все понятно

void tree_destroy(struct Node *tree);

//--------------------------------------------------------------------------

list_t* Construct(int num);

void addLast(list_t *head, struct Node *elem);
																														// Это все нужно, чтобы организовать очередь
void rmFirst(list_t **head);

void Destruct(list_t **head);

//--------------------------------------------------------------------------

int main () {
  struct Node * tree = NULL;       // Создаем дерево
  
  int x;
  scanf("%d", &x);
  while(x != 0) {

    tree = tree_add(tree, x);                   // Заполняем дерево

    scanf("%d", &x);
  }

  list_t *head = Construct(1);                  // Делаем очередь из 1 элемента

  head->elem = tree;       // Кладем в нее значение верхнего узла дерева (в хеде хранится указатель на 1 элемент очереди, поэтому так)

  while (head != NULL) {            // Пока очередь не пуста

    printf("%d ", head->elem->val);  //Печатаем значение узла дерева, хранящегося в очереди

    if (head->elem->left != NULL) {   // Если у этого узла есть дочерний слева, кладем его в конец очереди

      addLast(head, head->elem->left);
    }

    if (head->elem->right != NULL) { // Если у этого узла есть дочерний справа, кладем его в конец очереди

      addLast(head, head->elem->right);
    }

    rmFirst(&head); // Удаляем из очереди отработанный элемент
  }

  Destruct(&head); // Освобождаем память, занятую под очередь

  tree_destroy(tree); // Удаляем дерево

  return 0;
}

//--------------------------------------------------------------------------

int max(int a, int b) {  // Определяем максимальное число

  if (a >= b)
    return a;

  else
    return b;
}

int tree_heigh(struct Node *tree) {  // Чекаем глубину дерева 

  if(tree != NULL) { // Если дерево не пусто, его всота это максимальная высота поддерева (левого или правого) +1

    return 1 + max(tree_heigh(tree->left), tree_heigh(tree->right));
  }

  else              // Если дерево пусто, его высота 0
    return 0;
}

//--------------------------------------------------------------------------

struct Node *tree_add (struct Node *tree, Data x) {  // Добавление узла в дерево

  if (tree == NULL) { // Если оно пустое

    tree = (struct Node*) calloc(1, sizeof(struct Node)); // Создаем узел

    tree->val = x; // Кладем значение

    tree->left = NULL; // И у него пока нет дочерних узлов

    tree->right = NULL;
  }

  else if (x < tree->val) { //Если пришедшее число меньше значения узла, отправляем его налево

    tree->left = tree_add (tree->left, x);
  }

  else if (x > tree->val) { //В противном случае, отправляем направо

    tree->right = tree_add (tree->right, x);
  }

  return tree; 
}

//--------------------------------------------------------------------------

void tree_destroy(struct Node *tree) { //Просто рекурсивно уничтожаем дерево

  if (tree != NULL) {

    tree_destroy(tree->left);

    tree_destroy(tree->right);

    free(tree);
  }

  return;
}

//==========================================================================

list_t* Construct(int num) { // Конструктор односвязного списка на num элементов

  list_t *head = NULL, *current, *prev;

  int i;
  for(i = 0; i < num; i++) {

    current = (list_t*) calloc(1, sizeof(list_t)); //Выделяем место под элемент

    if(head == NULL) //Если он первый, кладем его адрес в хед
      head = current;

    else  //Если не первый, кладем его адрес в поле некст предыдущего
       prev->next = current;

    current->next = NULL; //Он сам пока никуда не указывает
    prev = current; //Текущий становится предыдущим
  }

  return head;
}

//--------------------------------------------------------------------------

void addLast(list_t *head, struct Node *elem) { //Добавление в конец очереди

  list_t *current = head;

  while(current->next != NULL) //Идем до последнего элемента
    current = current->next;

  current->next = (list_t*) calloc(1, sizeof(list_t)); //Добавляем к нему ещё один

  current = current->next; //Переходим в него

  current->elem = elem; //Кладем туда узел дерева

  current->next = NULL; //Последний элемент никуда не указывает

  return;
}

//--------------------------------------------------------------------------

void rmFirst(list_t **head) { //Удаляем первый элемент в очереди

  list_t *temp = (list_t*) calloc(1, sizeof(list_t)); //Вот понятия не имею, нахуя тут каллок, он скорее всего нахуй не нужон, проверь

  temp = (*head)->next; //Тут вроде понятно все

  free(*head);

  *head = temp;

  return;
}

//--------------------------------------------------------------------------

void Destruct(list_t **head) { //Удаляем очередь

  list_t *current = *head; //Тут тоже вроде очевидно

  while(*head != NULL) {

    *head = current->next;

    free(current);

    current = *head;
  }
}

//==========================================================================