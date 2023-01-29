// Patipan Boonchu  65543206067-2 sec 3
// https://www.youtube.com/watch?v=meq7kOEPWUI&t=24s
#include <stdio.h>

struct Node
{
    int Dtn;
    struct Node *next;
};

struct Node *AddNode(struct Node **walk, int newDtn);
void ShowAll(struct Node *walk);
void UpdateNode(struct Node **walk, int choose, int newDtn);
void ShowBack( struct Node **walk);
void SwapNode (struct Node **walk,int Dtn1,int Dtn2);

struct Node *AddNode(struct Node **walk, int newDtn)
{
    while (*walk != NULL)
    {
        walk = &(*walk)->next;
    }
    *walk = new struct Node;
    (*walk)->Dtn = newDtn;
    (*walk)->next = NULL;
    return *walk;
}

int main()
{
    struct Node *start;
    start = NULL;
    AddNode(&start, 10);
    AddNode(&start, 20);
    AddNode(&start, 30);
    AddNode(&start, 40);
    ShowAll(start);
    UpdateNode(&start, 10, 99);
    ShowAll(start);
    ShowBack(&start);
    ShowAll(start);
    SwapNode(&start, 99, 40);
    ShowAll(start);
    return 0;
}

void ShowAll(struct Node *walk)
{
    while (walk != NULL)
    {
        printf("%d ", walk->Dtn);
        walk = walk->next;
    }
    printf("\n");
}
void UpdateNode(struct Node **walk, int choose, int newDtn)
{
    while ((*walk)->Dtn != choose)
    {
        walk = &(*walk)->next;
    }
    (*walk)->Dtn = newDtn;
}
void ShowBack(struct Node **walk)
{
    struct Node* open = NULL;
    struct Node* current = *walk;
    struct Node* next = NULL;
    while (current != NULL) {   
        next = current->next;
        current->next = open;
        open = current;
        current = next;
    }
    *walk = open;
}
void SwapNode(struct Node**walk, int Dt1, int Dt2)
{
    
    
    struct Node *prevDt1 = NULL, *curryDt1 = *walk;
    while (curryDt1 && curryDt1->Dtn != Dt1) {
        prevDt1 = curryDt1;
        curryDt1 = curryDt1->next;
    }
    struct Node *prevDt2 = NULL, *curryDt2 = *walk;
    while (curryDt2 && curryDt2->Dtn != Dt2) {
        prevDt2 = curryDt2;
        curryDt2 = curryDt2->next;
    }
    if (prevDt1 != NULL)
        prevDt1->next = curryDt2;
    else 
        *walk = curryDt2;
    if (prevDt2 != NULL)
        prevDt2->next = curryDt1;
    else 
        *walk = curryDt1; 
    struct Node* temp = curryDt2->next;
    curryDt2->next = curryDt1->next;
    curryDt1->next = temp;
}
