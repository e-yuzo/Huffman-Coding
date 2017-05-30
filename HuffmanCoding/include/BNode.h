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
        void compress(string str);
    protected:

    private:
        BNode* left;
        BNode* right;

        char c;
        int n;

        bool leaf; //verifica se é folha

        void caractereFrequency(); //define frequência
        void readFile(); //lê arquivo
        void writeFile(); //escreve no arquivo
};

#endif // BNODE_H
