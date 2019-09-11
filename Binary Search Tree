#include <iostream>



struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
    
};


BstNode *CreateNode(int data)
{
    BstNode *newnode = new BstNode;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    
    return newnode;
    
}

BstNode *Insert(BstNode *root, int data)
{
    if (root == NULL)
        root = CreateNode(data);
    
    else if (data <= root->data)
        root->left = Insert(root->left, data);
    
    else
        root->right = Insert(root->right, data);
    
    return root;
    
}

bool Search(BstNode *root, int data)
{
    if (root == NULL)
        return false;
    
    else if (data == root->data)
        return true;
    
    else if (data <= root->data)
        return Search(root->left, data);
    
    
    else
        return Search(root->right, data);
}

int main ()
{
    BstNode *root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 16);
    root = Insert(root, 19);
    
    int number;
    std::cout << "Enter number to be searched";
    std::cin >> number;
    
    
    
    if (Search(root, number) == true)
        std::cout << "Number found";
    else
        std::cout << "Number not found";
    
}

BstNode *FindMin(BstNode *root);

BstNode *Delete(BstNode *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    
    else if (data < root->data)
    {
        root->left = Delete(root->left, data);
    }
    
    else if (data > root->data)
    {
        root->right = Delete(root->right, data);
    }
    
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        
        else if (root->left == NULL)
        {
            BstNode *temp = root;
            root = root->right;
            delete temp;
        }
        
        else if (root->right == NULL)
        {
            BstNode *temp = root;
            root = root->left;
            delete temp;
        }
        
        else
        {
            BstNode *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
            delete temp;
        }
        
    }
    return root;
}


BstNode *FindMin(BstNode *root)
{
    BstNode *min = root->right;
    return min;
    
}
