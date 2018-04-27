/*
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
int height(Node* root) {
        // Write your code here.
        if(root==NULL)
            return -1;
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        return max(leftHeight,rightHeight)+1;
    }
