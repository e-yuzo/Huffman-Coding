#include "BTree.h"

BTree::BTree()
{
    root=NULL;
}

BTree::~BTree()
{
    //dtor
}
void BTree::compact(string const &str)
{
    if(str.size()==1){
    cout<<str[0]<<"="<<"0"<<endl;
    return;
    }
    root=comp(str);
    writeCode(root);
}
BNode* BTree::comp(string const &str)
{
int vet[128];
fill(begin(vet),end(vet),0);
vector<pair<int,char>> v;
for(unsigned int i=0;i<str.size();i++){
    vet[int(str[i])]++;
}
for(int i=0;i<128;i++){
    if(vet[i]!=0){
        v.push_back(make_pair(vet[i],char(i)));
    }
}
sort(v.begin(),v.end());
queue<BNode*> q;
for(unsigned int i=0;i<v.size();i++){
    //cout<<v[i].first<<" "<<v[i].second<<endl;
    q.push(new BNode(v[i].first,v[i].second));
}
return Huffman(q);
}
BNode* BTree::Huffman(queue<BNode*>& q1)
{
    queue <BNode*> q2;
    while(!(q1.empty() && q2.size()==1)){
        BNode *aux=new BNode();
        aux->setRight(minFrequency(q1,q2));
        aux->setLeft(minFrequency(q1,q2));
        aux->setFr(aux->getLeft()->getFr()+aux->getRight()->getFr());
        aux->setCh('*');
        q2.push(aux);
    }
    BNode *aux=q2.front();
    q2.pop();
    return aux;
}
BNode* BTree::minFrequency(queue<BNode*>& q1, queue<BNode*>& q2)
{
    BNode *aux;
    if(q2.empty()){
        aux=q1.front();
        q1.pop();
        return aux;
    }
    if(q1.empty()){
        aux=q2.front();
        q2.pop();
        return aux;
    }
    if(q2.front()->getFr()>q1.front()->getFr()){
        aux=q1.front();
        q1.pop();
        return aux;
    }
    aux=q2.front();
    q2.pop();
    return aux;
}
void BTree::writeCode(BNode* node)
{
    char s[128];
    prefixWrite(node,s,0);
}
void BTree::prefixWrite(BNode* node, char *s,int pos)
{
    if(node->getLeft()){
       s[pos]='0';
       prefixWrite(node->getLeft(),s,pos+1);
    }
    if(node->getRight()){
        s[pos]='1';
        prefixWrite(node->getRight(),s,pos+1);
    }
    if(node->isLeaf()){
        cout<<node->getCh()<<"=";
        for(int i=0;i<pos;i++){
            cout<<s[i];
        }
        cout<<endl;
    }

}

void BTree::print(BNode* node)
{
    if(node==NULL){
        return;
    }
    if(node->isLeaf()){
    cout<<node->getCh()<<" "<<node->getFr()<<endl;
    }
    print(node->getLeft());
    print(node->getRight());

}



