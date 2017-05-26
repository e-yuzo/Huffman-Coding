#ifndef BNODE_H
#define BNODE_H


class BNode
{
    public:
        BNode();
        BNode(bool leaf); //set atributo que verifica se é folha

        void setValue(char c);
        void setValue(int n);

        int getValueN();
        char getValueC();

        virtual ~BNode();
    protected:

    private:
        BNode* left;
        BNode* right;

        char c;
        int n;

        bool leaf; //verifica se é folha

        void caractereCount(); //define frequência
        void readFile(); //lê arquivo
        void writeFile(); //escreve no arquivo
};

#endif // BNODE_H
