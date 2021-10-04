//
// Created by 974cc on 04/10/2021.
//

#ifndef PROJETGATEAU_HEADER_H
#define PROJETGATEAU_HEADER_H

#endif //PROJETGATEAU_HEADER_H



typedef struct Element_str{
    char texte[50];
    struct Element_str* next;
}Element_str;


typedef struct Pile_Gouts{
    //TODO
}Pile_Gouts;


typedef struct Gateau{
    struct Element_str* commande;
    struct Pile_Gouts* p_gouts;
}Gateau;


typedef struct Element_gtx{
    struct Gateau* gateau;
    struct Element_gtx* next;
}Element_gtx;


typedef struct File_Commandes{
    //TODO
}File_Commandes;

typedef struct File_Degustation{
    //TODO
}File_Degustation;

