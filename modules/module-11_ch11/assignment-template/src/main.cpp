#include <iostream>
#include <memory>
#include <queue>
#include <stack>

struct TreeNode {
    int data;
    std::shared_ptr<TreeNode> left;
    std::shared_ptr<TreeNode> right;
    
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    std::shared_ptr<TreeNode> root;
    
    // TODO: Helper functions for recursive operations
    std::shared_ptr<TreeNode> insertHelper(std::shared_ptr<TreeNode> node, int value);
    bool searchHelper(std::shared_ptr<TreeNode> node, int value);
    void inorderHelper(std::shared_ptr<TreeNode> node);
    
public:
    // TODO: Implement constructor
    BinarySearchTree();
    
    // TODO: Implement insert function
    void insert(int value);
    
    // TODO: Implement search function
    bool search(int value);
    
    // TODO: Implement inorder traversal (recursive)
    void inorderTraversal();
    
    // TODO: Implement preorder traversal
    void preorderTraversal();
    
    // TODO: Implement postorder traversal
    void postorderTraversal();
    
    // TODO: Implement level-order traversal (using queue)
    void levelOrderTraversal();
    
    // TODO: Implement find minimum value
    int findMin();
    
    // TODO: Implement find maximum value
    int findMax();
};

int main() {
    // TODO: Create a BST object
    
    // TODO: Insert elements: 50, 30, 70, 20, 40, 60, 80
    
    // TODO: Perform and display all traversals
    
    // TODO: Search for specific values (both existing and non-existing)
    
    // TODO: Display minimum and maximum values
    
    // BONUS TODO: Implement delete operation
    
    return 0;
}