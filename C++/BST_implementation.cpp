#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
    Node* root;

    Node* insertNode(Node* node, int data) {
        if (!node) return new Node(data);
        if (data <= node->data)
            node->left = insertNode(node->left, data);
        else
            node->right = insertNode(node->right, data);
        return node;
    }

    bool searchNode(Node* node, int data) {
        if (!node) return false;
        if (node->data == data) return true;
        if (data < node->data) return searchNode(node->left, data);
        else return searchNode(node->right, data);
    }

    Node* findMin(Node* node) {
        while (node && node->left) node = node->left;
        return node;
    }

    Node* deleteNode(Node* node, int data) {
        if (!node) return nullptr;
        if (data < node->data)
            node->left = deleteNode(node->left, data);
        else if (data > node->data)
            node->right = deleteNode(node->right, data);
        else {
            // Node found
            if (!node->left) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (!node->right) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            else {
                Node* minNode = findMin(node->right);
                node->data = minNode->data;
                node->right = deleteNode(node->right, minNode->data);
            }
        }
        return node;
    }

    void printTree(Node* node) {
    if (!node) return;
    cout << node->data << ":";
    if (node->left) {
        cout << "L:" << node->left->data << ",";
    }
    if (node->right) {
        cout << "R:" << node->right->data;
    }
    cout << endl;
    printTree(node->left);
    printTree(node->right);
}


public:
    BST() {
        root = nullptr;
    }

    void insert(int data) {
        root = insertNode(root, data);
    }

    void remove(int data) {
        root = deleteNode(root, data);
    }

    bool search(int data) {
        return searchNode(root, data);
    }

    void printTree() {
        printTree(root);
    }
};

int main() {
    int n;
    cin >> n;
    BST bst;
    for (int i = 0; i < n; ++i) {
        string op;
        cin >> op;
        if (op == "1") {
            int x;
            cin >> x;
            bst.insert(x);
        } else if (op == "2") {
            int x;
            cin >> x;
            bst.remove(x);
        } else if (op == "3") {
            int x;
            cin >> x;
            cout << (bst.search(x) ? "true" : "false") << endl;
        } else if (op == "4") {
            bst.printTree();
        }
    }
    return 0;
}
