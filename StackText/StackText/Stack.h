#pragma once
#ifndef _STACK_H
#define _STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


typedef int Datatype;

typedef struct stack {
	Datatype* array;
	int StackSize;//ջ��Ԫ�ظ���
	int _top;//ջ��Ԫ��
}stack;

void StackInit(stack *s);//ջ�ĳ�ʼ��
void StackDestroy(stack *s);//ջ������
void StackPush(stack *s, Datatype val);//��ջ
void StackPop(stack *s);//��ջ
Datatype StackTop(stack *s);//����ջ��Ԫ��
int StackEmpty(stack *s);//�ж��Ƿ�Ϊ��ջ
int StackCapacity(stack *s);//ջ�Ĵ�С
void TextStack(stack *s);//���Ժ���


#endif // !_STACK_H
