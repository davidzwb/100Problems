//n名学生的成绩已在主函数中放入一个带头节点的链表结构中，h指向链表的头节点。请编写函数fun，它的功能是：找出学生的最高分，由函数值返回。
#include <stdio.h>

typedef struct node
{
	int score;
	struct node *next;
} Node;

int fun(Node *h)
{
	int max;
	Node *p = h->next;
	max = p->score;
	while(p->next != NULL)
	{
		if(p->score > max)
			max = p->score;
		p = p->next;
	}
}