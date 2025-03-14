// Vous devez ajouter ce #pragma a tous vos fichiers .h de votre projet.
// Il garantit que le fichier "header" n'est inclus qu'une seule fois par compilation,
// ce qui evite les erreurs de redefinition et les conflits de symboles.
#pragma once

void add_Item(inventory* inventaire, Node* node);

void remove_Item();

void sort_Item();

void find_By_Index();

void find_By_Name();

void item_Quantity();

typedef struct Node Node;

struct Node {
	void* data;
	Node* prev;
	Node* next;
};

typedef struct Inventory {
	char name[256];
	float value;
}inventory;