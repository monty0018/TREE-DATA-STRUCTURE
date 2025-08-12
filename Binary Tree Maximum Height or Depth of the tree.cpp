#include<bits/stdc++.h>
using namespace std;


class Node{
  public:
  int data;
  Node* left;
  Node* right;
  
  Node(int val){
    data=val;
    left=right=nullptr;
  }
  
};

    int maxDepth(Node *root) {
        // Your code here
        if(root==nullptr){
            return 0;
        }
        
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        
        return 1+max(l,r);
    }
    
    
int main(){
  
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

     int maxi_height=maxDepth(root);

    // Print result
    cout<<maxi_height;

    
    return 0;
  
  
}