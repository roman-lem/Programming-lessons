#include <stdio.h>
#include <stdlib.h>

// Struct to store list element
typedef struct list_element {
    int value;                  // Element value
    struct list_element* next;  // Pointer to next element
    struct list_element* prev;	// Pointer to previous element
} list_element;

// Create new element, set its value to 'i', return pointer to new element
list_element* create_list_element(int i)
{
    list_element* new_elem = (list_element*)malloc(sizeof(list_element));
    new_elem->value = i;
    new_elem->next = NULL;
    new_elem->prev = NULL;
    return new_elem;
}

// Insert element 'elem' into list 'root'
void insert_into_list(list_element* root, list_element* elem)
{
    int tmp = elem->value;
    elem->value = root->value;
    root->value = tmp;
    elem->prev = root;
    elem->next = root->next;
    if(root->next != NULL) {
        root->next->prev = elem;
    }
    root->next = elem;
}

// Print list
void print_list(list_element* root)
{
    unsigned int i = 0;
    list_element* elem = root;
    while(elem != NULL) {
        printf("Val[%d] = %d\n", i, elem->value);
        elem = elem->next;
        ++i;
    }
}

// Print list
void print_list_reverse(list_element* root)
{
    unsigned int i = 0;
    list_element* elem = root;
    while(elem != NULL) {
        printf("Val[%d] = %d\n", i, elem->value);
        elem = elem->prev;
        ++i;
    }
}

// Delete list
void delete_list(list_element* root)
{
    list_element* elem = root;
    list_element* to_delete = NULL;
    while(elem != NULL) {
        to_delete = elem;
        elem = elem->next;
        free(to_delete);
    }
}

void swap_elements(list_element* a, list_element* b) {

}

int main()
{
    int i;
    int n = 5;
    //======================= CREATE
    list_element* root = create_list_element(0);
    for(i = 1; i < n; i++)
    {
        list_element* elem = create_list_element(i);
        insert_into_list(root, elem);
    }

    printf("List:\n");
    print_list(root);

    //======================= TEST

    int a = 1, b = 3;
    printf("We are going to swap elements %d and %d\n", a, b);

    list_element *ptr_a = NULL, *ptr_b = NULL, *cur;
    int val_a = -1, val_b = -1;

    cur = root;
    for(i = 0; i < n; i++) {
        if(i == a) {
            ptr_a = cur;
            val_a = cur->value;
        }
        if(i == b) {
            ptr_b = cur;
            val_b = cur->value;
        }
        cur = cur->next;
    }

    printf("Values by pointers before swap: \n");
    printf("    *a = %d\n", val_a);
    printf("    *b = %d\n", val_b);

    swap_elements(ptr_a, ptr_b);

    printf("Values by pointers after swap: \n");
    printf("    *a = %d\n", val_a);
    printf("    *b = %d\n", val_b);

    printf("List after swap:\n");
    print_list(root);

    //======================= CLEAN

    delete_list(root);
    return 0;
}

void swap_elements(list_element* a, list_element* b) {

	list_element* temp = a;

	a->prev->next = b;

	b->next->prev = a;

	temp = a->prev;
	a->prev = a->next;

	return;
}