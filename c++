#include<iostream>
using namespace std;

template<class type>
class node
{
public:
	type val;
	node* lchild;
	node* rchild;
};

int findNodeNumber(node<int>* p)
{
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int leftNodeNumber = findNodeNumber(p->lchild);
		int rightNodeNumber = findNodeNumber(p->rchild);
		return leftNodeNumber + rightNodeNumber + 1;
}
}

int main()
{
	node<int>* p = new node<int>;
	cout<<findNodeNumber(p);
}
