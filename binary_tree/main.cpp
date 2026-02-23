#include <iostream>
#include "btree.hpp"

int main() {
    btree<int> tree;

    
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);
    tree.insert(12);
    tree.insert(16);

    std::cout << "Inorder:   ";
    tree.inorder(std::cout);
    std::cout << "\n";

    std::cout << "Preorder:  ";
    tree.preorder(std::cout);
    std::cout << "\n";

    std::cout << "Postorder: ";
    tree.postorder(std::cout);
    std::cout << "\n";

    std::cout << "Find(12): " << (tree.find(12) ? "true" : "false") << "\n";
    std::cout << "FindDepth(16): " << tree.findDepth(16) << "\n";

    return 0;
}
