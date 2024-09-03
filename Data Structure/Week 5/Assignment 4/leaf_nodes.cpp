#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1.
        Node *f = q.front();
        q.pop();

        // 2.
        cout << f->val << " ";

        // 3.
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // 1. take out
        Node *p = q.front();
        q.pop();

        // 2. perform any task
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }

        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        // push the children in the queue
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

vector<int> leaf_nodes(Node *root)
{
    vector<int> leaf;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1.
        Node *f = q.front();
        q.pop();

        // 2.
        if (f->left == NULL && f->right == NULL)
        {
            leaf.push_back(f->val);
        }

        // 3.
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    reverse(leaf.begin(), leaf.end());
    return leaf;
}

int main()
{
    Node *root = input_tree();
    vector<int> leaves = leaf_nodes(root);

    for (int val : leaves)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}