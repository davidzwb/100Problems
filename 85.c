//n名学生的成绩已在主函数中放入一个带头节点的链表结构中，h指向链表的头节点。请编写函数fun，它的功能是：求出平均分，由函数值返回。

#include <stdio.h>

typedef struct node
{
	int score;
	struct node *next;
} Node;

int fun(Node *h, int n)
{
	int sum;
	Node *p = h->next;
	max = p->score;
	while(p->next != NULL)
	{
		sum += p->score;
	}
	return sum / n;
}