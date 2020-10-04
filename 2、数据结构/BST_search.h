#pragma once
#pragma once

#include <stdlib.h>
#include <iostream>
#include "biTree.h"
using namespace std;
#define N  10


//���ң����ص�һ������data�����key�Ľڵ㣬�����ڷ���NULL
BiTreeNode *search(BiTree *biTree, DataType key) {
	BiTreeNode *curNode = *biTree;
	while (curNode != NULL && curNode->data != key) {
		if (key < curNode->data) {
			curNode = curNode->left;
		}
		else {
			curNode = curNode->right;
		}
	}
	return curNode;
}
//���ض���������С�ڵ�,��������NULL
BiTreeNode *minImum(BiTree *biTree) {
	BiTreeNode *curNode = *biTree;
	while (curNode != NULL && curNode->left != NULL) {
		curNode = curNode->left;
	}
	return curNode;
}
//���ض����������ڵ�,��������NULL
BiTreeNode *maxImum(BiTree *biTree) {
	BiTreeNode *curNode = *biTree;
	while (curNode != NULL && curNode->right != NULL) {
		curNode = curNode->right;
	}
	return curNode;
}

//���ؽڵ�x�ĺ�̽ڵ�,�����ں�̣��ڵ�xΪ���ڵ㣩����NULL
BiTreeNode *successor(BiTreeNode *x) {
	if (x == NULL) return NULL;
	//���������������̽ڵ�Ϊ������������С�Ľڵ�
	if (x != NULL && x->right != NULL) {
		return minImum(&(x->right));
	}
	while (x->parent != NULL && x->parent->right == x) {
		x = x->parent;
	}
	return x->parent; //����汾Ϊ x�� �˴�Ӧ�÷��ظ����
}
//���ؽڵ�x��ǰ���ڵ㣬������ǰ�����ڵ�xΪ��С�ڵ㣩����NULL
BiTreeNode *predecessor(BiTreeNode *x) {
	if (x == NULL) return NULL;
	//���������������̽ڵ�Ϊ�������������Ľڵ�
	if (x != NULL && x->left != NULL) {
		return maxImum(&(x->left));
	}
	while (x->parent != NULL && x->parent->left == x) {
		x = x->parent;
	}
	return x->parent; //����汾Ϊ x�� �˴�Ӧ�÷��ظ����

}

void insertNode(BiTree *biTree, DataType data) {
	//�����ڵ�
	BiTreeNode *targetNode;

	targetNode = (BiTreeNode *)malloc(sizeof(BiTreeNode));
	//û���㹻�ڴ�
	if (targetNode == NULL) return;
	targetNode->data = data;
	targetNode->parent = NULL;
	targetNode->left = NULL;
	targetNode->right = NULL;

	BiTreeNode *p, *y;
	p = *biTree;
	y = NULL;
	while (p != NULL) {
		y = p;
		if (targetNode->data < p->data) {
			p = p->left;
		}
		else {
			p = p->right;
		}
	}
	//���������½ڵ���Ϊ����
	if (y == NULL) {
		*biTree = targetNode;
	}
	else {
		if (targetNode->data < y->data) {
			y->left = targetNode;
		}
		else {
			y->right = targetNode;
		}
	}
	targetNode->parent = y;
}
//ɾ��һ��ֵΪdata�Ľڵ�
void deleteNode(BiTree *biTree, DataType data) {
	//���Ҵ�ɾ���Ľڵ�
	BiTreeNode *targetNode, *x, *y;

	targetNode = search(biTree, data);
	if (targetNode == NULL) return;
	//�ҳ�������ɾ���ڵ㣬���Ŀ��ڵ����ֻ��һ������������Ϊ����ɾ���Ľڵ�
	//�������̽ڵ㣨���ֻ��һ������������Ϊʲô��Ϊ����ɾ���Ľڵ㣬Ȼ�󽫺�̽ڵ��ֵ����Ŀ��ڵ�
	if (targetNode->left == NULL || targetNode->right == NULL) {
		y = targetNode;
	}
	else {
		y = successor(targetNode);
	}

	if (y->left != NULL) {
		x = y->left;
	}
	else {
		x = y->right;
	}

	if (x != NULL) {
		x->parent = y->parent;
	}

	//���y�Ǹ��ڵ�, ����ڵ��Ϊx
	if (y->parent == NULL) {
		*biTree = x;
	}
	else {
		if (y->parent->right == y) {
			y->parent->right = x;
		}
		else {
			y->parent->left = x;
		}
	}

	if (y != targetNode) {
		targetNode->data = y->data;
	}
	//�ͷ�yռ�еĿռ�
	free(y);
}
//�������������
void inorderTraversal(BiTree *biTree, void(*visitor)(BiTreeNode *node)) {
	BiTreeNode *curNode;

	curNode = *biTree;
	if (curNode != NULL) {
		//����������
		inorderTraversal(&(curNode->left), visitor);
		//���ʽڵ�
		visitor(curNode);
		//����������
		inorderTraversal(&(curNode->right), visitor);
	}
}

void printNode(BiTreeNode *node);


void printNode(BiTreeNode *node) {
	printf("%d\t", node->data);
}

