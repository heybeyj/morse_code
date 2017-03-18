#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
	char val;
	struct Node *children[2];
};

void insert (struct Node *, char, int);
char print(char *);

struct Node * root = (struct Node *) malloc (sizeof(struct Node));

int main () {
	insert(root, 'e', 1);
	insert(root, 't', 0);
	insert(root->children[1], 'i', 1);
	printf("%c\n", print('11'));
}

char print(char * string) {
	struct Node * current;
	if (root == NULL) {
		exit(0);
	} else {
		int i;
		struct Node * current = root;
		for (i = 0; i < strlen(string); i++) {
			current = root->children[i];
		}
	}
	return current->val;
}

void insert (struct Node * parent, char val, int dot) {
	struct Node * new = (struct Node *) malloc(sizeof(struct Node));
	new->val = val;

	parent->children[dot] = new;
}
