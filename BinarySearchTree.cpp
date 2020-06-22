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

void BST::Search(int item, node **par, node **loc) // Find Element in the Tree For The Program
{
    node *ptr, *ptrsave;
    
    if (root == NULL)
    {
        *loc = NULL;
        *par = NULL;
        
        return;
    }
    
    if (item == root->info)
    {
        *loc = root;
        *par = NULL;
        
        return;
    }
    
    if (item < root->info)
    {
        ptr = root->left;
    }    
    else
    {
        ptr = root->right;
    }
    
    ptrsave = root;
    
    while (ptr != NULL)
    {
        if (item == ptr->info)
        {
            *loc = ptr;
            *par = ptrsave;
            
            return;
        }
        
        ptrsave = ptr;
        
        if (item < ptr->info)
        {
            ptr = ptr->left;
        }
	    else
	    {
	        ptr = ptr->right;
	    }
    }
    
    *loc = NULL;
    *par = ptrsave;
}