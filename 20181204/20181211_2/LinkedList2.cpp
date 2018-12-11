#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int score;
	struct node*pNext; //�ڱ��ڽŰ� �Ȱ��� ����ü�� ����Ű�� ������
} Node;

typedef struct linkedlist
{
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;

//�Լ� printLL() ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: X
//�μ�ȿ��: X
void printLL(LinkedList* pList)
{
	Node * ptr=pList->pHead;
	while(ptr!=NULL)
	{
		printf("score=%d\n",ptr->score);
		ptr= ptr->pNext;
	}
}

//�Լ� createNode() ����ϳ��� �����Ҵ����� �����Ͽ� ��ȯ�Ѵ�.
//�Է�: ����
//���: ����ϳ��� �����Ҵ����� �����Ͽ� ��ȯ�Ѵ�. �� �� socre =�Է�, pNext=NULL�� �Ѵ�.
//�μ�ȿ��:X
Node* createNode(int input)
{
	Node*ptr;
	ptr=(Node*)malloc(sizeof(Node));
	ptr->score=input;
	ptr->pNext=NULL;
	return ptr;
}

//�Լ�: addHead()
//�Է�: ���Ḯ��Ʈ ����ü ������(LinkedList*), �� ��� ������
//���: ����
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(Node* pList, Node*pNewNode)
{
	if(pList->pHead==NULL)
		pList->pTail=pNewNode;

	pNewNode->pNext= pList->pHead; //#1
	pList->pHead = pNewNode;//#2
	pList->nNode++;	
}

//�Լ� returnTail()
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: ������ ����� ������
//�μ�ȿ��: X
Node* returnTail(Node *ptr)
{
	if(ptr==NULL)
		return NULL;//���Ḯ��Ʈ�� �ƹ��͵� ����

	while(ptr!=NULL)
	{
		if(ptr->pNext==NULL)
			return ptr;
		ptr= ptr->pNext;
	}
}

//�Լ� addTail()
//�Է�: ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������
//���: X
//�μ�ȿ��:�߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���
void addTail(Node* pHead, Node* pNode)
{
	if(pHead==NULL)
	{
		printf("ERROR can't add a tail to empty linked list\n");
		return;
	}

	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode; // pNode�� next�� �׻� null
}



double averageLL(Node *ptr)
{
	int sum = 0, count=0;
	double average; 
	while(ptr!=NULL)
	{
		sum += ptr->score;
		count++;
		//printf("score=%d\n",ptr->score);
		ptr= ptr->pNext;
	}
	average=(double) sum/count;
	return average;
}

int main()
{
	LinkedList* pList;
	pList =(LinkedList*)malloc(sizeof(LinkedList));
	pList->pHead= pList->pTail=NULL; pList->nNode=0;
	addHead(pList, createNode(10));
	addHead(pList, createNode(20));

	//pHead = createNode(11);
	//ptr=createNode(20);
	//addHead(&pHead,ptr);
	//addTail(pHead, createNode(100));
	////pHead->pNext = createNode(20);
	//printLL(pHead);
	//printf("average=%f\n", averageLL(pHead));
	//pHead=NULL;
	//addTail(pHead, createNode(100));

	return 0;
}

