/*已知后序和中序求层序*/
#include <bits/stdc++.h>
using namespace std;

const int kMaxn = 30 + 5;

struct BinTreeNode {
    BinTreeNode *lchild, *rchild;
    int data;

    BinTreeNode(int data) : data(data), lchild(NULL), rchild(NULL){} 
};

int post_order[kMaxn], in_order[kMaxn];

BinTreeNode* ReBuildTree(int* post, int* in, int len) {
    if(len == 0) return NULL;
    int rootnode = post[len]; 
    //BinTreeNode* new root(rootnode);
    BinTreeNode *root = new BinTreeNode(rootnode);
    int pos = 1;
    while(pos <= len && in[pos] != rootnode) pos++;
    int len_left = pos - 1;
    int len_right = len - pos;
    if(len_left > 0) 
        root->lchild = ReBuildTree(&post[0], &in[0], len_left);
    if(len_right > 0) 
        root->rchild = ReBuildTree(&post[pos - 1], &in[pos], len_right);
    return root;
}

void PostOrderTravel(BinTreeNode *root) {
    if(root == NULL) 
        return;
    PostOrderTravel(root->lchild);
    PostOrderTravel(root->rchild);
    printf("%d ", root->data);
}

void LevelOrderTravel(BinTreeNode *root) {
    vector<int>v;
    queue<BinTreeNode*>que;
    que.push(root);
    while(!que.empty()) {
        BinTreeNode* t = que.front();
        que.pop();
        if(t != NULL) {
            v.push_back(t->data);
            que.push(t->lchild);
            que.push(t->rchild);
        }
    }
    
    printf("%d", v[0]);
    for(int i = 1; i < v.size(); i++) 
        printf(" %d", v[i]);
    printf("\n");

}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) 
        scanf("%d", &post_order[i]);
    for(int i = 1; i <= n; i++) 
        scanf("%d", &in_order[i]); 
    BinTreeNode *root = ReBuildTree(&post_order[0], &in_order[0], n);
    //PostOrderTravel(root);
    LevelOrderTravel(root);
    return 0;
}
