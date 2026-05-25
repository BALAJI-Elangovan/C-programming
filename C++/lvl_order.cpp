#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node(int data) : data(data), left(nullptr), right(nullptr) {}
};

void dis(node* head) {
    if (head == nullptr)
        return;
    dis(head->left);
    cout << head->data << " ";
    dis(head->right);
}

int main() {
    queue<node*> q;
    string line;
    getline(cin, line); // Read whole line of input
    istringstream iss(line);
    vector<int> nums;
    int num;
    while (iss >> num) {
        nums.push_back(num);
    }

    size_t i = 0;
    int data;
    node* root;
    node* head;

    data = nums[i++];
    node* nn = new node(data);
    head = nn;
    q.push(nn);

    while (!q.empty() && i < nums.size()) {
        root = q.front(); q.pop();
        if (i < nums.size()) {
            data = nums[i++];
            if (data != -1) {
                root->left = new node(data);
                q.push(root->left);
            }
        }
        if (i < nums.size()) {
            data = nums[i++];
            if (data != -1) {
                root->right = new node(data);
                q.push(root->right);
            }
        }
    }
    dis(head);

    // To avoid memory leaks, proper node deallocation is needed, but omitted here for brevity.
    return 0;
}
