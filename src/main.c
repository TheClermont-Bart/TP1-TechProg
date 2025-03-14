//Bonne pratique, pour les includes systemes toujours utiliser <> et "" pour les includes de votre projet.
#include <stdio.h>
#include "definition.h"


int main(int argc, char** argv){
    printf("-------------------------------------------------------------\n");
    printf("Bienvenue la gestion d'inventaire du MMORPG Dave's World !\n");
    printf("-------------------------------------------------------------\n");
    printf("Que voulez-vous faire?\n1-Ajouter un item\n2-Supprimer un item\n3-Trier les items\n4-Trouver un item par son index\n5-Trouver par nom\n6-Combien il y a-t-il d'item\n7-Quitter\n");
    int choix;
    printf(">");
    scanf("%d", &choix);
    
    switch (choix) {
    case 1:
    add_Item();
    break;
    case 2:
    remove_Item();
    break;
    case 3:
    sort_Item();
    break;
    case 4:
    find_By_Index();
    break;
    case 5:
    find_By_Name();
    break;
    case 6:
    item_Quantity();
    break;
    case 7:
    return;
    }
}