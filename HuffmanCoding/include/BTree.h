#ifndef BTREE_H
#define BTREE_H
#include "BNode.h"
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

class BTree
{
    public:
        BTree();
        virtual ~BTree();
        void compact(string const &str);

    protected:

    private:
    BNode* root;
    BNode* comp(string const &str);
    BNode* Huffman(queue <BNode*> &q1);
    BNode* minFrequency(queue<BNode*>&q1,queue<BNode*> &q2);
    void writeCode(BNode* node);
    void prefixWrite(BNode* node,char *s,int pos);
    void print(BNode* node);
};

#endif // BTREE_H
