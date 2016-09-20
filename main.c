
#include <stdio.h>
#include <malloc.h>
#include "LinkList.h"


void AddLinkList(LinkList, int);

LinkList InitLinkList();


LinkList InitLinkList() {
    LinkList head;
    head = malloc(sizeof(Node));
    head->next = NULL;
}

void AddLinkList(LinkList head, int data) {
    Node *p = malloc(sizeof(Node));
    p->data = data;
    p->next = head->next;
    head->next = p;
}

void DeleteRepetition(LinkList head) {
    Node *p = head;
    Node *curP, *delp, *nextNode;
    while (p->next != NULL) {
        curP = p->next;
        nextNode = p->next;
        while (nextNode->next != NULL) {
            delp = nextNode->next;
            if (curP->data == delp->data) {
                nextNode->next = delp->next;
                free(delp);
            }else{
                nextNode = nextNode->next;
            }
        }
        p = p->next;
    }
}
//2.4.2 删除重复节点
int main() {

    LinkList linkList = InitLinkList();
    AddLinkList(linkList, 5);
    AddLinkList(linkList, 4);
    AddLinkList(linkList, 3);
    AddLinkList(linkList, 2);
    AddLinkList(linkList, 1);
    AddLinkList(linkList, 4);

    DeleteRepetition(linkList);

    while (linkList->next != NULL) {
        linkList = linkList->next;
        printf("%d \n", linkList->data);
    }
    return 0;
}