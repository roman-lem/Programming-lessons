
//----------------------------------------------------------------------------------------------------------------

void list_init(struct Node *list) {
	
	list->next = NULL;
	list->prev = NULL;

	return;
}

//----------------------------------------------------------------------------------------------------------------

void list_insert(struct Node * list, struct Node * t) {
	t = (struct Node *)malloc(sizeof(struct Node));
	struct Node * stan;
	
	if ((list->next == NULL) && (list->prev == NULL)) {
		list->prev = t;
		t->next = list;
	}
	else {
		stan = list->next;
		t->next = list->next;
		stan->prev = t;
	}

	t->prev = list;
	list->next = t;

	return;
}

//----------------------------------------------------------------------------------------------------------------

void list_insert_before(struct Node * list, struct Node * t) {
	t = (struct Node *)malloc(sizeof(struct Node));
	struct Node * stan;
	
	if ((list->next == NULL) && (list->prev == NULL)) {
		
		t->prev = list;
		list->next = t;

	}
	else {
		
		stan = list->prev;
		t->prev = stan;
		stan->next = t;
	}

	t->next = list;
	list->prev = t;

	return;

}

//----------------------------------------------------------------------------------------------------------------

void list_remove(struct Node * t) {
	struct Node * elem_prev;
	struct Node * elem_next;

	elem_prev = t->prev;
	elem_next = t->next;

	elem_prev->next = elem_next;
	elem_next->prev = elem_prev;

	free(t);

	return;

}

//----------------------------------------------------------------------------------------------------------------

struct Node * list_push_front(struct Node * list, Data d) {
	struct Node * elem;
	struct Node * first_elem;

	elem = (struct Node *)malloc(sizeof(struct Node));

	elem->data = d;

	if ((list->next == NULL) && (list->prev == NULL)) {
		
		list->prev = elem;
		elem->next = list;
		
	}

	else {
		
		first_elem = list->next;
		elem->next = first_elem;
		first_elem->prev = elem;
	}

	list->next = elem;
	elem->prev = list;

	return list;
}

//----------------------------------------------------------------------------------------------------------------

struct Node * list_push_back(struct Node * list, Data d) {
	struct Node * elem;
	struct Node * last_elem;

	elem = (struct Node *)malloc(sizeof(struct Node));

	elem->data = d;

	if ((list->next == NULL) && (list->prev == NULL)) {
		
		list->next = elem;
		elem->prev = list;
		
	}

	else {

		last_elem = list->prev;
		elem->prev = last_elem;
		last_elem->next = elem;
	}

	list->prev = elem;
	elem->next = list;

	return list;
}

//----------------------------------------------------------------------------------------------------------------

Data list_pop_front(struct Node * list) {
	struct Node * first_elem;
	struct Node * second_elem;
	
	Data num;

	first_elem = list->next;
	second_elem = first_elem->next;

	num = first_elem->data;

	second_elem->prev = list;
	list->next = second_elem;

	free(first_elem);

	return num;

}

//----------------------------------------------------------------------------------------------------------------

Data list_pop_back(struct Node * list) {
	struct Node * last_elem;
	struct Node * before_last_elem;
	
	Data num;

	last_elem = list->prev;
	before_last_elem = last_elem->prev;

	num = last_elem->data;

	before_last_elem->next = list;
	list->prev = before_last_elem;

	free(last_elem);

	return num;

}

//----------------------------------------------------------------------------------------------------------------

Data list_delete(struct Node * t) {
	Data num;
	struct Node * elem;

	elem = t->prev;
	elem->next = t->next;
	elem = t->next;
	elem->prev = t->prev;
	num = t->data;

	free(t);

	return num;
}

//----------------------------------------------------------------------------------------------------------------

int list_is_empty(struct Node * list) {
	
	if (list->next == NULL && list->prev == NULL) {
		
		return 1;

	}

	else {
		return 0;
	}

	return -1;

}

//----------------------------------------------------------------------------------------------------------------

int list_clear(struct Node * list) {
	struct Node *elem1;
	struct Node *elem2;

	elem2 = list->next;
	while (elem2 != list) {
		
		elem1 = elem2;
		elem2 = elem2->next;
		
		free(elem1);

	}

	list->next = NULL;
	list->prev = NULL;

	return 15;
}

//----------------------------------------------------------------------------------------------------------------

void print_elem(Data d, void * param){
	struct Node *elem;

	elem =(struct Node *) param;


	printf("%d ", elem->data);
	d += 1;
	d -= 1;

	return;
}

//----------------------------------------------------------------------------------------------------------------

void sum_element(Data d, void * param){
	struct Node *elem;

	elem =(struct Node *) param;

	d += elem->data;

	return;
}

//----------------------------------------------------------------------------------------------------------------

void list_foreach(struct Node * list, void (*func)(Data d, void * param), void * param) {
	struct Node * elem;
	Data d;

	d = 0;

	elem = list->next;
	
	while (elem != list) {
		func(d, elem);
		elem = elem->next;

	}
	if (param != stderr) {
	
	*((int *)param) = d;

	}
	
	return;
}

//----------------------------------------------------------------------------------------------------------------

void list_print (struct Node * list) {
	
	list_foreach(list, print_elem, stderr);
	printf("\n");
}

//----------------------------------------------------------------------------------------------------------------

Data list_sum (struct Node * list) {
	int num;

	list_foreach(list, sum_element, &num);

	return num;

}

//----------------------------------------------------------------------------------------------------------------

