#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int score;
	struct node*pNext; //자기자신과 똑같은 구조체를 가리키는 포인터
} Node;

typedef struct linkedlist
{
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;

//함수 printLL() 화면에 연결리스트의 score값을 출력
//입력: 연결리스트(연결리스트의 헤드노드 포인터)
//출력: X
//부수효과: X
void printLL(LinkedList* pList)
{
	Node * ptr=pList->pHead;
	while(ptr!=NULL)
	{
		printf("score=%d\n",ptr->score);
		ptr= ptr->pNext;
	}
}

//함수 createNode() 노드하나를 동적할당으로 생성하여 반환한다.
//입력: 성적
//출력: 노드하나를 동적할당으로 생성하여 반환한다. 이 때 socre =입력, pNext=NULL로 한다.
//부수효과:X
Node* createNode(int input)
{
	Node*ptr;
	ptr=(Node*)malloc(sizeof(Node));
	ptr->score=input;
	ptr->pNext=NULL;
	return ptr;
}

//함수: addHead()
//입력: 연결리스트 구조체 포인터(LinkedList*), 새 노드 포인터
//출력: 없음
//부수효과: 연결리스트 헤드에 새 노드를 추가
void addHead(Node* pList, Node*pNewNode)
{
	if(pList->pHead==NULL)
		pList->pTail=pNewNode;

	pNewNode->pNext= pList->pHead; //#1
	pList->pHead = pNewNode;//#2
	pList->nNode++;	
}

//함수 returnTail()
//입력: 연결리스트(연결리스트의 헤드노드 포인터)
//출력: 마지막 노드의 포인터
//부수효과: X
Node* returnTail(Node *ptr)
{
	if(ptr==NULL)
		return NULL;//연결리스트에 아무것도 없다

	while(ptr!=NULL)
	{
		if(ptr->pNext==NULL)
			return ptr;
		ptr= ptr->pNext;
	}
}

//함수 addTail()
//입력: 연결리스트, 추가하려는 노드 포인터
//출력: X
//부수효과:추가하려는 노드가 연결리스트의 tail로 추가됨
void addTail(Node* pHead, Node* pNode)
{
	if(pHead==NULL)
	{
		printf("ERROR can't add a tail to empty linked list\n");
		return;
	}

	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode; // pNode의 next는 항상 null
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

