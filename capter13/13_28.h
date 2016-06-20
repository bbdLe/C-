#ifndef _13_28_H
#define _13_28_H
#include<string>

class TreeNode
{
	public:
		TreeNode() : value(std::string()), count(0), left(nullptr), right(nullptr) {}
		TreeNode(TreeNode &tn) : value(tn.value), count(tn.count), left(tn.left), right(tn.right) {}
		TreeNode &operator=(TreeNode &tn)
		{
			value = tn.value;
			count = tn.count;
			left = tn.left;
			right = tn.right;
		}
		~TreeNode() = default;
	

	private:
		std::string value;
		int count;
		TreeNode *left;
		TreeNode *right;
};

class BinStrTree
{
	public:
		BinStrTree() : root(nullptr) {}
		BinStrTree(BinStrTree &a) : root(a.root) {}
		BinStrTree &operator=(BinStrTree &a)
		{
			root = a.root;
		}
		~BinStrTree() = default;

	
	private:
		TreeNode *root;
};
#endif
