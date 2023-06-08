#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*prev;
	struct node
};
typedef struct node NODE;
int main()
{
	NODE*n1=(NODE*)malloc(sizeof(NODES));
	NODE*n2=(NODE*)malloc(sizeof(NODES));
	NODE*n3=(NODE*)malloc(sizeof(NODES));
	NODE*n4=(NODE*)malloc(sizeof(NODES));
	NODE*n5=(NODE*)malloc(sizeof(NODES));
	//DATA
	N1->data=10;
	N2->data=20;
	N3->data=30;
	N4->data=40;
	//next connection
	N1->next=N2;
	N2->next=N3;
	N3->next=N4;
	N4->next=NULL
	//PREVIOUS
	N1->prev=NULL;
	N2->prev->N1;
	N3->prev->N2;
	N4->prev->N3;
	printf("%d %d %d %d",N1->data,N1->next->data,N1->next->next->data,N1->next->next->nrxt->data);
	printf("%d %d %d %d",n4->data,n4->prev)
N1->next=N2;
}
