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

vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>>result;
        if(root==nullptr){
            return result;
        }
        
        queue<Node* >q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            
            for(int i=0;i<size;i++){
            
            Node* curr=q.front();
            q.pop();
            
            level.push_back(curr->data);
            
            if(curr->left){
                q.push(curr->left);
            }
            
            if(curr->right){
                q.push(curr->right);
            }
            
            
            
            }
            result.push_back(level);
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

    vector<vector<int>> ans = levelOrder(root);

    // Print result
    for (auto &level : ans) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    
    return 0;
  
  
}