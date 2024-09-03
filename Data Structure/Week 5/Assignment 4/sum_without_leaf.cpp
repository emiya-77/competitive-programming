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

int sum_without_leaf(Node *root)
{
    queue<Node *> q;
    int sum = 0;
    q.push(root);

    while (!q.empty())
    {
        // 1.
        Node *f = q.front();
        q.pop();

        // 2.
        if (f->left != NULL && f->right != NULL)
        {
            sum += f->val;
        }

        // 3.
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return sum;
}

int main()
{
    Node *root = input_tree();
    cout << sum_without_leaf(root) << endl;
}