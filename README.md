<div id="header" align="center"> <img src="https://media.giphy.com/media/ztl9x7JlhSlU4MWD6h/giphy.gif" width="200"/> </div> <h1 align="center">libft</h1>

    Projet du cursus de l’école 42 Paris

Ce dépôt contient tous les fichiers du projet libft du cursus central de l’école 42 Paris. Il s'agit d'une bibliothèque personnalisée de fonctions utiles en langage C. Le dépôt inclut le Makefile et la bibliothèque libft.h.
<h2 align="center"> <a href="#apropos">À propos</a> <span> · </span> <a href="#index">Index</a> <span> · </span> <a href="#exigences">Exigences</a> <span> · </span> <a href="#instructions">Instructions</a> <span> · </span> <a href="#tests">Tests</a> </h2>
À propos

Ce projet est une bibliothèque C de fonctions utiles qui peuvent être utilisées dans de futurs projets du cursus 42. L'accès à cette bibliothèque permet de simplifier et d'accélérer le codage dans les prochains projets. Le but de réécrire ces fonctions est d’approfondir leur compréhension et de disposer d’une gamme complète d’outils pour les projets futurs. Plus d'informations sont disponibles dans le sujet du projet. Tous les fichiers sont regroupés dans un même dossier, conformément aux exigences du sujet.

Le code de ce dépôt respecte les règles de la Norminette.
Index
Fonctions de la bibliothèque <ctype.h>

    ft_isascii - Vérifie si un caractère est un caractère ASCII sur 7 bits.
    ft_isalpha - Vérifie si un caractère est alphabétique.
    ft_isdigit - Vérifie si un caractère est un chiffre décimal.
    ft_isalnum - Vérifie si un caractère est alphanumérique.
    ft_isprint - Vérifie si un caractère est imprimable, y compris l’espace.
    ft_tolower - Convertit un caractère en minuscule.
    ft_toupper - Convertit un caractère en majuscule.

Fonctions de la bibliothèque <stdlib.h>

    ft_atoi - Convertit une chaîne ASCII en entier.
    ft_calloc - Alloue de la mémoire pour un tableau et l'initialise à 0.

Fonctions de la bibliothèque <strings.h>

    ft_bzero - Initialise une partie d’un objet à des octets nuls.
    ft_memset - Remplit une zone mémoire avec une valeur donnée.

Fonctions de la bibliothèque <string.h>

    ft_strlen - Calcule la longueur d'une chaîne.
    ft_strchr - Trouve la première occurrence d'un caractère dans une chaîne.
    ft_strdup - Crée un duplicata d’une chaîne, en utilisant malloc.

Fonctions non standards

    ft_itoa - Convertit un entier en chaîne ASCII.
    ft_split - Divise une chaîne en un tableau de chaînes selon un caractère délimiteur.

Fonctions de liste chaînée (bonus)

    ft_lstnew - Crée une nouvelle liste.
    ft_lstsize - Compte les éléments d'une liste.

Exigences

La bibliothèque est écrite en langage C et nécessite le compilateur gcc, avec les bibliothèques standards <stdlib.h> et <unistd.h>.
Instructions
1. Compilation de la bibliothèque

Pour compiler la bibliothèque, navigue vers le répertoire et exécute :

Pour les fonctions de base :

$ make

Pour les fonctions bonus :

$ make bonus

2. Nettoyage des fichiers binaires (.o) et exécutables (.a)

Pour supprimer tous les fichiers générés avec make, exécute :

$ make fclean

3. Utilisation dans ton code

Pour utiliser les fonctions de la bibliothèque dans ton code, inclue simplement cet en-tête :

#include "libft.h"

Tests

Cette bibliothèque a été testée avec Francinette.
