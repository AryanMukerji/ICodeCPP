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

void BST::Insert(node *tree, node *newnode) // Inserting Element into the Tree
{
    if (root == NULL)
    {
        root = new node;
        root->info = newnode->info;
        root->left = NULL;
        root->right = NULL;
        
        cout<<"\n Root Node is Added !! \n";
        return;
    }
    
    if (tree->info == newnode->info)
    {
        cout<<"\n Element already in the tree !! \n";
        return;
    }
    
    if (tree->info > newnode->info)
    {
        if (tree->left != NULL)
        {
            Insert(tree->left, newnode);	
	    }
	    else
	    {
            tree->left = newnode;
            (tree->left)->left = NULL;
            (tree->left)->right = NULL;
            
            cout<<"\n Node Added To Left !! \n";
            return;
        }
    }
    else
    {
        if (tree->right != NULL)
        {
            Insert(tree->right, newnode);
        }
        else
        {
            tree->right = newnode;
            (tree->right)->left = NULL;
            (tree->right)->right = NULL;
            
            cout<<"\n Node Added To Right !! \n";
            return;
        }	
    }
}

void BST::Delete(int item) // Delete Element from the tree
{
    node *parent, *location;
    
    if (root == NULL)
    {
        cout<<"\n Tree is Empty !! \n"<<endl;
        return;
    }
    
    Search(item, &parent, &location);
    
    if (location == NULL)
    {
        cout<<"\n Item not present in tree !! \n"<<endl;
        return;
    }
    
    if (location->left == NULL && location->right == NULL)
    {
        CaseA(parent, location);
    }
    
    if (location->left != NULL && location->right == NULL)
    {
        CaseB(parent, location);
    }
    
    if (location->left == NULL && location->right != NULL)
    {
        CaseB(parent, location);
    }
    
    if (location->left != NULL && location->right != NULL)
    {
        CaseC(parent, location);
    }
    
    free(location);
}