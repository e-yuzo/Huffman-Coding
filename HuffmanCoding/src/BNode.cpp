#include "BNode.h"

BNode::BNode()
{
    left=NULL;
    right=NULL;
}
BNode::BNode(int fr,char ch)
{
    this->fr=fr;
    this->ch=ch;
    left=NULL;
    right=NULL;
}
BNode::BNode(int fr)
{
    this->fr=fr;
    left=NULL;
    right=NULL;
}

BNode::~BNode()
{

}

BNode* BNode::getLeft()
{
    return left;

}

BNode* BNode::getRight()
{
    return right;
}

char BNode::getCh()
{
    return ch;
}

int BNode::getFr()
{
    return fr;
}
void BNode::setLeft(BNode* node)
{
  left=node;
}

void BNode::setRight(BNode* node)
{
    right=node;
}
void BNode::setFr(int fr)
{
    this->fr=fr;
}

void BNode::setCh(char ch)
{
    this->ch=ch;
}
bool BNode::isLeaf()
{
    return(left==NULL && right==NULL);
}



