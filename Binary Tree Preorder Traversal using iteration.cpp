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

 vector<int> preOrder(Node* root) {
        // code here
        vector<int> result;
        if(root==nullptr){
            return result;
        }
        
        stack<Node*>st;
        st.push(root);
        
        while(!st.empty()){
            Node* curr=st.top();
            st.pop();
            
            result.push_back(curr->data);
            
            if(curr->right){
                st.push(curr->right);
            }
            if(curr->left){
                st.push(curr->left);
            }
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

    vector<int> ans = preOrder(root);

    // Print result
     for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;


    
    return 0;
  
  
}