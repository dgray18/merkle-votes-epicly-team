#pragma once
#include <string>
using namespace std;

class bTREE
{
    struct treeNode{
        string data;
        int timeStamp;
		treeNode *left;
		treeNode *right;
    };
    
private:
    //some data structure to hold your treeNodes together ...
    //DATASTUCTURE treeNodes tree;
    //any helper private variables you need
	int leafCount;
	int treeHeight;
	int nodeX;
    
public:
    bTREE();
    ~bTREE();

	treeNode *tree;
	treeNode *root;
	treeNode *bottomLeaf;
    
    int dataInserted();
    int numNodes(const treeNode* subtree);
    
    int insert(treeNode* subTree, string data, int timeStamp);

	int countLeaves(treeNode* subtree);
    
    int find(const treeNode* subTree, string key);
    
    string locate(const treeNode* subTree, string key);
    
	void destroyTree(treeNode* &subTree);

	//Friend functions
	/*
    friend bool operator ==(const bTREE& lhs, const bTREE& rhs);
    friend bool operator!=(const bTREE& lhs, const bTREE& rhs);
    friend std::ostream& operator<<(std::ostream& out, const bTREE& p);
    */
};
