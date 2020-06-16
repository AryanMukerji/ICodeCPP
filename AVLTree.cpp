#include <iostream>
using namespace std;

class Node 
{
    public:
    
    int key;
    Node *left;
    Node *right;
    int height;
};

int max(int a, int b) 
{
    return (a > b) ? a : b;
}

int height(Node *N) // Calculate height
{
    if(N == NULL)
    {
        return 0;
    }
    
    return N->height;
}

Node *newNode(int key) // New node creation
{
    Node *node = new Node();
    
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    
    return (node);
}


