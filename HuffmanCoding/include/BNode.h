#ifndef BNODE_H
#define BNODE_H
#include <iostream>
using namespace std;
class BNode
{
    public:
        BNode();
        BNode(int fr,char ch);
        BNode(int fr);
        virtual ~BNode();
         BNode* getLeft();
         BNode* getRight();
         void setLeft(BNode* node);
         void setRight(BNode* node);
         void setFr(int fr);
         void setCh(char ch);
         char getCh();
         int getFr();
         bool isLeaf();
    protected:
    private:
        BNode* left;
        BNode* right;
        char ch;
        int fr;
};

#endif // BNODE_H
