#ifndef analyseur_lexical_h
#define analyseur_lexical_h

#include "jeton.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void analyse_lexicale(typejeton tab[], int *erreur_pg, char c[]);

Arbre creer_noeud(typejeton T,Arbre fg,Arbre fd);

#endif