#pragma once

/*file:biTree.h*/
#ifndef CHIYX_BITREE
#define CHIYX_BITREE
#ifndef NULL
#define NULL 0
#endif
typedef int DataType;
//�������Ľڵ�ṹ
typedef struct BiTreeNode {
	DataType data;
	struct BiTreeNode *parent;
	struct BiTreeNode *left;
	struct BiTreeNode *right;
}BiTreeNode, *BiTree;

//���ң����ص�һ������data�����key�Ľڵ㣬�����ڷ���NULL
BiTreeNode *search(BiTree *biTree, DataType key);
//���ض���������С�ڵ�,��������NULL
BiTreeNode *minImum(BiTree *biTree);
//���ض����������ڵ�,��������NULL
BiTreeNode *maxImum(BiTree *biTree);
//���ؽڵ�x�ĺ�̽ڵ�,�����ں�̣��ڵ�xΪ���ڵ㣩����NULL
BiTreeNode *successor(BiTreeNode *x);
//���ؽڵ�x��ǰ���ڵ㣬������ǰ�����ڵ�xΪ��С�ڵ㣩����NULL
BiTreeNode *predecessor(BiTreeNode *x);
//��ֵdata���뵽�������У�����һ��ֵΪdata�Ľڵ㣩
void insertNode(BiTree *biTree, DataType data);
//ɾ��һ��ֵΪdata�Ľڵ�
void deleteNode(BiTree *biTree, DataType data);
//�������������
void inorderTraversal(BiTree *biTree, void(*visitor)(BiTreeNode *node));
#endif


