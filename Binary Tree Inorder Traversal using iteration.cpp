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

   vector<int> inOrder(Node* root) {
        // code here
        vector<int> result;
        if(root==nullptr){
            return result;
        }
        
        stack<Node*>st;
        Node* curr=root;
        while(!st.empty()||curr!=nullptr){
            while(curr!=nullptr){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            st.pop();
            result.push_back(curr->data);
            
            curr=curr->right;
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

    vector<int> ans = inOrder(root);

    // Print result
     for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;


    
    return 0;
  
  
}