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

    vector<int> postOrder(Node* node) {
        // code here
        vector<int>result;
        if(node==nullptr){
            return result;
        }
        
        stack<Node*>st1;
        st1.push(node);
        stack<Node*>st2;
        
        while(!st1.empty()){
            Node* curr=st1.top();
            st1.pop();
            st2.push(curr);
            
            if(curr->left){
                st1.push(curr->left);
            }
            if(curr->right){
                st1.push(curr->right);
            }
            
        }
        
        while(!st2.empty()){
            result.push_back(st2.top()->data);
            st2.pop();
        }
        
        return result;
        
    }

int main(){
  
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ans = postOrder(root);

    // Print result
     for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;


    
    return 0;
  
  
}