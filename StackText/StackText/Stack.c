#include "Stack.h"

void StackInit(stack *s)//ջ�ĳ�ʼ��
{
	assert(s);

	s->_top = 0;
	s->array = (Datatype*)malloc(sizeof(Datatype)*3);
	assert(s->array);
	s->StackSize = 3;
}

void StackDestroy(stack* s)
{
	assert(s&&s->array);
	if (s->array)
	{
		free(s->array);
		s->array = NULL;
		s->StackSize = 0;
		s->_top = 0;
	}
}

void StackPush(stack *s, Datatype val)//��ջ
{
	assert(s != NULL);
	if (s->_top == s->StackSize)
	{
		Datatype* tmp = NULL;
		tmp = (Datatype*)realloc(s->array, sizeof(Datatype)*(s->StackSize + 3));
		assert(s->array);
		s->array = tmp;
		s->StackSize += 3;
	}
	s->array[s->_top] = val;
	s->_top++;
}


void StackPop(stack *s)//��ջ
{
	assert(s);
	assert(s->array);
	assert(s->_top > 0);
	s->_top--;
}
Datatype StackTop(stack *s)//����ջ��Ԫ��
{
	assert(s);
	assert(s->array&&s->_top > 0);
	return s->array[s->_top - 1];
}

int StackEmpty(stack *s)//�ж��Ƿ�Ϊ��ջ
{
	assert(s);
	if (s->_top > 0)
	{
		return 0;
	}
	else if (s->_top == 0)
	{
		return 1;
	}
}

int StackCapacity(stack *s)//ջ�Ĵ�С
{
	assert(s);
	return s->_top;
}

void TextStack(stack *s)//���Ժ���
{
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 5);
	StackPush(&s, 7);
	StackPush(&s, 6);
	StackPush(&s, 4);
	StackPush(&s, 3);
	
	
	while (!(StackEmpty(&s)))
	{
		printf("%d\t", StackTop(&s));
		StackPop(&s);
	}


	StackDestroy(&s);
}