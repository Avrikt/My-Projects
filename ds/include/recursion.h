/********************************************
* Developer: Avri Kehat						*
* Reviewed by: Mor Zibel				    *
* Date: 15.03.23							*
* Description: Header file for recursion	*
*********************************************/

#ifndef MY_PROJECT_RECURSION_H__
#define MY_PROJECT_RECURSION_H__

#include <stddef.h>	/*size_t*/

#include "stack.h"

typedef struct node
{
    void *data;
    struct node *next;
} node_t;

unsigned long FibonacciIter(size_t element_index);

unsigned long FibonacciRec(size_t element_index);

node_t *FlipList(node_t *node);

void SortStack(stack_t *stack);

size_t StrLenRec(const char *s);

int StrCmpRec(const char *s1, const char *s2);

char *StrCpyRec(char *dest, const char *src);

char *StrCatRec(char *dest, const char *src);

char *StrStrRec(const char *haystack, const char *needle);


#endif
