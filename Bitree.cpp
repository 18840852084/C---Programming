#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;
struct TreeNode {
	int val;
	TreeNode*left;
	TreeNode*right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};
TreeNode*CreateBiTree() {
	int c;
	TreeNode *T;
	cin >> c;
	if (c ==0)
		T = NULL;
	else {
		T = (TreeNode*)malloc(sizeof(TreeNode));
		//T = new TreeNode;
		T->val = c;
		T->left = CreateBiTree();
		T->right = CreateBiTree();
	}
	return T;
}
void LeverOrder(TreeNode *T) {
	queue<TreeNode*>Queue;
	Queue.push(T);
	while (!Queue.empty())
	{
		T = Queue.front();
		cout << T->val << ' ';
		Queue.pop();
		if (T->left != NULL) {
			Queue.push(T->left);
		}
		if (T->right != NULL) {
			Queue.push(T->right);
		}
	}
}
void PreOrder(TreeNode*T) {
	if (T != NULL) {
		cout << T->val << ' ';
		PreOrder(T->left);
		PreOrder(T->right);
	}
}
void InOrder(TreeNode*T) {
	if (T != NULL) {
		InOrder(T->left);
		cout << T->val << ' ';
		InOrder(T->right);
	}
}
void PostOrder(TreeNode*T) {
	if (T != NULL) {
		PostOrder(T->left);
		PostOrder(T->right);
		cout << T->val << ' ';
	}
}
void PreOrder1(TreeNode*T) {
	stack<TreeNode*>Stack;
	while (T || !Stack.empty()) {
		if (T) {
			Stack.push(T);
			cout << T->val << ' ';
			T = T->left;
		}
		else {
			T = Stack.top();
			Stack.pop();
			T = T->right;
		}
	}
}
void InOrder1(TreeNode*p) {
	stack<TreeNode*>Stack;
	//TreeNode*p = T;
	while (p || !Stack.empty()) {
		if (p) {
			Stack.push(p);
			p = p->left;
		}
		else {
			p=Stack.top();
			cout << p->val << ' ';
			Stack.pop();
			p = p->right;
		}
	}
}
void PostOrder1(TreeNode*T) {
	stack<TreeNode*>Stack;
	TreeNode *r = NULL;
	//TreeNode*p = T;
	while (T|| !Stack.empty()) {
		if (T) {
			Stack.push(T);
			T = T->left;
		}
		else {
			T = Stack.top();
			if ((T->right) && (T->right != r)) {
				T = T->right;
				Stack.push(T);
				T = T->left;
			}
			else {
				cout << T->val << ' ';
				Stack.pop();
				r=T;
				T = NULL;
			}

		}
	}
}
int main() {
	/*vector<int>a;
	stack<int>b;
	queue<int>c;*/
	TreeNode*T;
	T = CreateBiTree();
	cout << "²ã´Î±éÀú£º" << endl;
	LeverOrder(T);
	cout << endl;
	cout << "ÏÈÐòµÝ¹é±éÀú£º" << endl;
	PreOrder(T);
	cout << endl;
	cout << "ÏÈÐò·ÇµÝ¹é±éÀú£º" << endl;
	PreOrder1(T);
	cout << endl;
	cout << "ÖÐÐòµÝ¹é±éÀú£º" << endl;
	InOrder(T);
	cout << endl;
	cout << "ÖÐÐò·ÇµÝ¹é±éÀú£º" << endl;
	InOrder1(T);
	cout << endl;
	cout << "ºóÐòµÝ¹é±éÀú£º" << endl;
	PostOrder(T);
	cout << endl;
	cout << "ºóÐò·ÇµÝ¹é±éÀú£º" << endl;
	PostOrder1(T);
	cout << endl;
	return 0;
}
