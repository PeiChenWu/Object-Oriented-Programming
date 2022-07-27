#include <iostream>
using namespace std;

class A {
    public:
        virtual void fun() {
            cout << "base" << endl;
        }
};

class B : public A {
    public:
        void fun() {
            cout << "derived" << endl;
        }
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:

    bool isSymmetricHelper(TreeNode* left, TreeNode* right) {
        if(left == NULL && right == NULL) {
            return true;
        }
        else if (left == NULL || right == NULL) {
            return false;
        }
        else if(left->val != right->val){
            return false;
        }
        else{
            return isSymmetricHelper(left->right, right->right) && isSymmetricHelper(right->left, left->right);
        }

        return false;
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        return isSymmetricHelper(root->left, root->right);
    }
};


int main() {

    //B b;
    //b.fun();

    A *a = new B;
    a->fun();
    delete(a);

    A *b = new A;
    b->fun();
    delete(b);


    TreeNode* node1 = new TreeNode();

    cout << node1->val << endl;

    delete(node1);

    TreeNode* node2;

    cout << node2->val << endl;

    return 0;
}