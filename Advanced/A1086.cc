/*用栈模拟二叉树的先序和中序，求后序*/
#include <bits/stdc++.h>
using namespace std;

const int kMaxn = 30 + 5;

int pre_order[kMaxn], in_order[kMaxn];
vector<int>res;

struct BinTreeNode {
    int data;
    BinTreeNode *lchild, *rchild;
    BinTreeNode(int data) : data(data), lchild(NULL), rchild(NULL) {}
};

BinTreeNode* ReBuildTree(int *in, int *pre, int len) {
    if(len == 0)
         return NULL;
    int rootnode = pre[0];
    BinTreeNode *root = new BinTreeNode(rootnode);
    int pos = 0;
    while(pos < len && in[pos] != rootnode) pos++;
    int left_len = pos;
    int right_len = len - pos - 1;
    if(left_len > 0) 
        root->lchild = ReBuildTree(&in[0], &pre[1], left_len);
    if(right_len > 0)
        root->rchild = ReBuildTree(&in[pos + 1], &pre[pos + 1], right_len);
    return root;
}

void PostOrderTravel(BinTreeNode *root) {
    if(root == NULL) 
        return;
    PostOrderTravel(root->lchild);
    PostOrderTravel(root->rchild);
    res.push_back(root->data);
    //cout << root->data << " ";
    //printf("%d\n", root->data);
}

int main() {
    int n;
    cin >> n;
    stack<int>st;
    int len1 = 0;
    int len2 = 0;
    n = n * 2;
    while(n--) {
        getchar();
        string s;
        cin >> s;
        if(s == "Push") {
            int x;
            cin >> x;
            st.push(x);
            pre_order[len1++] = x;
        }
        else {
            in_order[len2++] = st.top();
            st.pop();
        }
    }
    /*for(int i = 0; i < len1; i++) 
        cout << pre_order[i] << " ";
    cout << endl;
    for(int i = 0; i < len1; i++) 
        cout << in_order[i] << " ";
    cout << endl;*/
    BinTreeNode *root = ReBuildTree(in_order, pre_order, len1);
    PostOrderTravel(root);
    cout << res[0];
    for(int i = 1; i < res.size(); i++)
       cout << " " << res[i]; 
    cout << endl;
    return 0;
}
