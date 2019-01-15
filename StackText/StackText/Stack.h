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
	int StackSize;//栈内元素个数
	int _top;//栈顶元素
}stack;

void StackInit(stack *s);//栈的初始化
void StackDestroy(stack *s);//栈的销毁
void StackPush(stack *s, Datatype val);//入栈
void StackPop(stack *s);//出栈
Datatype StackTop(stack *s);//返回栈顶元素
int StackEmpty(stack *s);//判断是否为空栈
int StackCapacity(stack *s);//栈的大小
void TextStack(stack *s);//测试函数


#endif // !_STACK_H
