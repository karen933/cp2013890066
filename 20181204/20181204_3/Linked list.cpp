#include <stdio.h>
#include <stdlib.h>
//linked list ����
typedef struct node
{
	int score;
	struct node*pNext; //�ڱ��ڽŰ� �Ȱ��� ����ü�� ����Ű�� ������
} Node;
//�Լ� printLL() ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: X
//�μ�ȿ��: X
void printLL(Node *ptr)
{
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
//�Է�: ���Ḯ��Ʈ�� ����������(��� �������� ������), �� ��� ������
//���: ����
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(Node**ppHead, Node*pNewNode)
{
	pNewNode->pNext =*ppHead; 
	*ppHead = pNewNode;
}
int main()
{
	Node*pHead=NULL,*ptr; //������� ������. NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� ���)
	///*Node a,b;
	//a.score = 10; b.score=20;
	//a.pNext = &b; b.pNext = NULL;*/
	//pHead=&a;
	pHead = createNode(10);
	ptr=createNode(20);
	addHead(&pHead,ptr);
	//pHead->pNext = createNode(20);
	printLL(pHead);
	return 0;
}

