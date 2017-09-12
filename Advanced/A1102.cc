/*二叉树翻转后中序遍历和翻转前相反*/
#include <bits/stdc++.h>
using namespace std;

const int kMaxn = 10 + 5;

bool f[kMaxn];
vector<int>post_order;

struct BinTreeNode {
    int data;
    int lchild, rchild;
} bin_tree[kMaxn];


void LevelOrder(int root) {
    queue<int>que;
    que.push(root);
    vector<int>x;
    while(!que.empty()) {
        int top = que.front();
        que.pop();
        if(top == -1) continue;
        else x.push_back(top);
            //printf("%d\n", top);
        que.push(bin_tree[top].rchild);
        que.push(bin_tree[top].lchild);
    }
    printf("%d", x[0]);
    for(int i = 1; i < x.size(); i++)
       printf(" %d", x[i]);
   printf("\n"); 
}

void InOrder(int root) {
    //printf("%d\n", root);
    //printf("(%d %d)\n", bin_tree[root].lchild, bin_tree[root].rchild);
    if(root == -1) 
        return;
    InOrder(bin_tree[root].lchild);
    post_order.push_back(root);
    //printf("%d\n", root);
    InOrder(bin_tree[root].rchild);
}

int main() {
    int n;
    scanf("%d", &n);
    memset(f, false, sizeof(f));
    for(int i = 0; i < n; i++) {
        getchar();
        char l,r;
        scanf("%c %c", &l, &r);
        if(l == '-') bin_tree[i].lchild = -1;
        else bin_tree[i].lchild = l - '0', f[l - '0'] = true;;
        if(r == '-') bin_tree[i].rchild = -1;
        else bin_tree[i].rchild = r - '0', f[r - '0'] = true;   
    } 
    int root = -1;
    for(int i = 0; i < n; i++) 
        if(!f[i]) {
            root = i; 
            break;
        }
    LevelOrder(root);
    InOrder(root);
    printf("%d", post_order[n - 1]);
    for(int i = n - 2; i >= 0; i--)
        printf(" %d", post_order[i]);
    printf("\n");
    return 0;
}
