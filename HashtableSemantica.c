/* 
*	TC3040: Compiladores
*	Tarea 1: Implementación clases STACK, QUEUE y TABLE/DICTIONARY
* 	Implementación TABLE/DICTIONARY
* 	Referencias: - Section 6.6 of C Programming Language (2nd Edition) 
*				por Brian W. Kernighan y Dennis M. Ritchie
* 			   	 - StackOverflow.com obtenido de 
* http://stackoverflow.com/questions/4384359/quick-way-to-implement-dictionary-in-c
*	Jesús Tadeo Galindo Manrique
*	A00806281
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct globalList { /* node table structure */
    struct globalList *next; /* next entry in chain */
    char *id; /* defined name */
    char *type; /* replacement text */
};

struct functionList { /* node table structure */
    struct functionList *next; /* next entry in chain */
    char *id; /* defined name */
    char *type; /* replacement text */
    struct globalList *table;
};


#define HASHSIZE 10000
static struct globalList *globalTable[HASHSIZE]; /* pointer table */
static struct functionList *functionTable[HASHSIZE]; /* pointer table */


/* hash: form hash value for string s */
unsigned hash(char *s)
{
    unsigned hashval;
    for (hashval = 0; (*s != '\0'); s++)
      hashval = *s + 31 * hashval;
    return hashval % HASHSIZE;
}

/* lookup: look for s in hashtab */
struct globalList *lookupVariable(char *s)
{
    struct globalList *np;
    for (np = globalTable[hash(s)]; np != NULL; np = np->next)
        if (strcmp(s, np->id) == 0)
          return np; /* found */
    return NULL; /* not found */
}

/* lookup: look for s in hashtab */
struct functionList *lookupFunction(char *s)
{
    struct functionList *np;
    for (np = functionTable[hash(s)]; np != NULL; np = np->next)
        if (strcmp(s, np->id) == 0)
          return np; /* found */
    return NULL; /* not found */
}


char *strdups(char *);
/* install: put (name, defn) in hashtab */
struct globalList *installVariable(char *id, char *type)
{
    struct globalList *np;
    unsigned hashval;
    if ((np = lookupVariable(id)) == NULL) { /* not found */
        np = (struct globalList *) malloc(sizeof(*np));
        if (np == NULL || (np->id = strdups(id)) == NULL)
          return NULL;
        hashval = hash(id);
        np->next = globalTable[hashval];
        globalTable[hashval] = np;
    } else /* already there */
        free((void *) np->type); /*free previous defn */
    if ((np->type = strdups(type)) == NULL)
       return NULL;
    return np;
}

struct functionList *installFunction(char *id, char *type, struct globalList *table)
{
    struct functionList *np;
    unsigned hashval;
    if ((np = lookupFunction(id)) == NULL) { /* not found */
        np = (struct functionList *) malloc(sizeof(*np));
        if (np == NULL || (np->id = strdups(id)) == NULL)
          return NULL;
        hashval = hash(id);
        np->next = functionTable[hashval];
        functionTable[hashval] = np;
    } else /* already there */
        free((void *) np->type); /*free previous defn */
    if ((np->type = strdups(type)) == NULL)
       return NULL;
    return np;
}



char *strdups(char *s) /* make a duplicate of s */
{
    char *p;
    p = (char *) malloc(strlen(s)+1); /* +1 for ’\0’ */
    if (p != NULL)
       strcpy(p, s);
    return p;
}










int main (){
	// crear un diccionario.
	struct globalList *table;
	// Introducir dos llaves al diccionario
	//install("jesus","int");
	//install("jesus","float");
	
	// Buscar una llave en especifico en diccionario
	//table = lookup("jesus");
	if(table==NULL){
		// Desplegar llave y liberar memoria
        //install("jesus","int");
		
	}
    else{
        printf("Error var definida\n");
    }

    //table = lookup("jesus");
    printf("%s\n",table->type);
    free(table);
}