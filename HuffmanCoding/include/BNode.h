#ifndef BNODE_H
#define BNODE_H


class BNode
{
    public:
        BNode();
        BNode();
        virtual ~BNode();

    protected:

    private:
        BNode* left;
        BNode* right;

        bool leaf; //verifica se é folha
};

#endif // BNODE_H
