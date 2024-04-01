#include <iostream>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
};
struct Node* newNode(int value){
    Node* n= new Node;
    n->key=value;
    n->left=NULL;
    n-> right=NULL;
    return n;
};
struct Node* insertValue(struct Node*root, int value,queue<Node*>&q)
int main(){

return 0;
}