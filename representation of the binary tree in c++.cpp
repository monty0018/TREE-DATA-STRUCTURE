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

int main(){
  
  Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Simple output to verify structure
    cout << "Root: " << root->data << "\n";
    cout << "Left Child of Root: " << root->left->data << "\n";
    cout << "Right Child of Root: " << root->right->data << "\n";

    return 0;
  
  
}