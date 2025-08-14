#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
      int dia=0;
    int findMaxHeight(Node* root){
        if(root==nullptr){
            return 0;
        }
        
        int l=findMaxHeight(root->left);
        int r=findMaxHeight(root->right);
        
        dia=max(dia,l+r);
        
        return 1+max(l,r);
        
    }
   
    int diameter(Node* root) {
        // Your code here
       dia=0;
       findMaxHeight(root);
       return dia;
    }
    

int main() 
{
    // Sample tree:
    //       1
    //      / \
    //     2   3
    //    / \     
    //   4   5  
    //      /
    //     6

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);

    cout << "Diameter of the tree: " << diameter(root) << endl;

    return 0;
}