
#include "BTree.h"
using namespace std;
int main() {
string str="Funciona,eu acho!";
BTree *t=new BTree();
t->compact(str);
return 0;
}
