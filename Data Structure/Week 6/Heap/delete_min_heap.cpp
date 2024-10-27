#include <bits/stdc++.h>
using namespace std;

void print_heap(vector<int> v);
void insert_heap(vector<int> &v, int x);
void delete_heap(vector<int> &v);

void insert_heap(vector<int> &v, int x)
{
    if (v.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        print_heap(v);
    }
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] > v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;

        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            if (v[left_idx] < v[cur] || v[right_idx] < v[cur])
            {
                if (v[left_idx] <= v[right_idx])
                {
                    swap(v[left_idx], v[cur]);
                    cur = left_idx;
                }
                else
                {
                    swap(v[right_idx], v[cur]);
                    cur = right_idx;
                }
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            if (v[left_idx] < v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            if (v[right_idx] < v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

void print_heap(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            insert_heap(v, x);
        }
        else if (c == 1)
        {
            if (v.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                print_heap(v);
            }
        }
        else if (c == 2)
        {
            delete_heap(v);
        }
    }

    return 0;
}