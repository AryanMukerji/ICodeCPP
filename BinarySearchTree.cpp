#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int info;
    struct node *left;
    struct node *right;
}*root;

class BST
{
    public:
    
    BST()
    {
        root = NULL;
    }
    
    node * Find(node *, int);
    void Search(int, node **, node **);    
    void Insert(node *, node *);
    void Delete(int);
    void CaseA(node *, node *);
    void CaseB(node *, node *);
    void CaseC(node *, node *);
    void Preorder(node *);
    void Inorder(node *);
    void Postorder(node *);
    void Display(node *, int);
};

node * BST::Find(node *no, int data) // Find Element in the Tree For The User
{
    if(no == NULL)
    {
        return (NULL);
    }
    
    if(data > no->info)
    {
        return Find(no->right, data);
    }
    else if(data < no->info)
    {
        return Find(no->left, data);
    }
    else
    {
        return no;
    }
}