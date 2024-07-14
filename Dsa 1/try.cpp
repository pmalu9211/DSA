#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// enum Color { RED, BLACK };

// template <typename T>
// struct Node {
//     T key;
//     Color color;
//     Node* parent;
//     Node* left;
//     Node* right;

//     Node(T k) : key(k), color(RED), parent(nullptr), left(nullptr), right(nullptr) {}
// };

// template <typename T>
// class RedBlackTree {
// private:
//     Node<T>* root;

//     void leftRotate(Node<T>* x);
//     void rightRotate(Node<T>* y);
//     void insertFixup(Node<T>* z);
//     void inorderTraversal(Node<T>* x);

// public:
//     RedBlackTree() : root(nullptr) {}

//     void insert(T key);
//     void printInOrder();
// };

// // Left rotation
// template <typename T>
// void RedBlackTree<T>::leftRotate(Node<T>* x) {
//     Node<T>* y = x->right;
//     x->right = y->left;
//     if (y->left != nullptr) {
//         y->left->parent = x;
//     }
//     y->parent = x->parent;
//     if (x->parent == nullptr) {
//         root = y;
//     } else if (x == x->parent->left) {
//         x->parent->left = y;
//     } else {
//         x->parent->right = y;
//     }
//     y->left = x;
//     x->parent = y;
// }

// // Right rotation
// template <typename T>
// void RedBlackTree<T>::rightRotate(Node<T>* y) {
//     Node<T>* x = y->left;
//     y->left = x->right;
//     if (x->right != nullptr) {
//         x->right->parent = y;
//     }
//     x->parent = y->parent;
//     if (y->parent == nullptr) {
//         root = x;
//     } else if (y == y->parent->left) {
//         y->parent->left = x;
//     } else {
//         y->parent->right = x;
//     }
//     x->right = y;
//     y->parent = x;
// }

// // Insertion fixup to maintain Red-Black Tree properties
// template <typename T>
// void RedBlackTree<T>::insertFixup(Node<T>* z) {
//     while (z->parent != nullptr && z->parent->color == RED) {
//         if (z->parent == z->parent->parent->left) {
//             Node<T>* y = z->parent->parent->right;
//             if (y != nullptr && y->color == RED) {
//                 z->parent->color = BLACK;
//                 y->color = BLACK;
//                 z->parent->parent->color = RED;
//                 z = z->parent->parent;
//             } else {
//                 if (z == z->parent->right) {
//                     z = z->parent;
//                     leftRotate(z);
//                 }
//                 z->parent->color = BLACK;
//                 z->parent->parent->color = RED;
//                 rightRotate(z->parent->parent);
//             }
//         } else {
//             Node<T>* y = z->parent->parent->left;
//             if (y != nullptr && y->color == RED) {
//                 z->parent->color = BLACK;
//                 y->color = BLACK;
//                 z->parent->parent->color = RED;
//                 z = z->parent->parent;
//             } else {
//                 if (z == z->parent->left) {
//                     z = z->parent;
//                     rightRotate(z);
//                 }
//                 z->parent->color = BLACK;
//                 z->parent->parent->color = RED;
//                 leftRotate(z->parent->parent);
//             }
//         }
//     }
//     root->color = BLACK;
// }

// // Insert a key into the Red-Black Tree
// template <typename T>
// void RedBlackTree<T>::insert(T key) {
//     Node<T>* z = new Node<T>(key);
//     Node<T>* y = nullptr;
//     Node<T>* x = root;

//     while (x != nullptr) {
//         y = x;
//         if (z->key < x->key) {
//             x = x->left;
//         } else {
//             x = x->right;
//         }
//     }

//     z->parent = y;
//     if (y == nullptr) {
//         root = z;
//     } else if (z->key < y->key) {
//         y->left = z;
//     } else {
//         y->right = z;
//     }

//     insertFixup(z);
// }

// // In-order traversal of the Red-Black Tree
// template <typename T>
// void RedBlackTree<T>::inorderTraversal(Node<T>* x) {
//     if (x != nullptr) {
//         inorderTraversal(x->left);
//         std::cout << x->key << " ";
//         inorderTraversal(x->right);
//     }
// }

// // Public function to print the Red-Black Tree in-order
// template <typename T>
// void RedBlackTree<T>::printInOrder() {
//     inorderTraversal(root);
//     std::cout << std::endl;
// }

// vector<int> twoSum(vector<int> &nums, int target)
// {
//     unordered_map<int, int> m;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         auto it = m.find(target - nums[i]);
//         if (it != m.end())
//         {
//             m[nums[i]] = i;
//         }
//         else
//         {
//             vector<int> ans = {i, it->second};
//         }
//     }
//     return {};
// }

vector<int> topKFrequent(vector<int> &nums, int k)
{
    if (nums.size() == 1)
    {
        return {nums[0]};
    }
    vector<int> ans(k);
    map<int, int> m;
    for (int i = 0; i < nums.size(); ++i)
    {
        m.find(i)->second++;
    }
    auto it = m.begin();
    for (int j = 0; j < k; j++)
    {
        ans[j] = it->first;
        cout << it->second;
        it++;
    }
    for (const auto &it2 : m)
    {
        cout << it2.first << " " << it2.second << endl;
    }
    return ans;
}

// Example usage
int main()
{
    vector<int> a = {4, 1, -1, 2, -1, 2, 3};
    topKFrequent(a, 2);
    // RedBlackTree<int> tree;

    // // Insert some keys into the Red-Black Tree
    // tree.insert(10);
    // tree.insert(20);
    // tree.insert(30);
    // tree.insert(15);
    // tree.insert(25);

    // // Print the Red-Black Tree in-order
    // std::cout << "In-order traversal: ";
    // tree.printInOrder();
    // tree.

    // return 0;
}
