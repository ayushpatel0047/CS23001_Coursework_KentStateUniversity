#ifndef CS2_TREE_LAB_BTREE_HPP
#define CS2_TREE_LAB_BTREE_HPP

#include <iostream>

template <typename T>
class btree {
public:
              btree    ()                 : left(0), right(0), empty(true) {}
              btree    (const T& val)     : left(0), right(0), empty(false), data(val) {}
              btree    (const btree<T>&);
              ~btree   ();
    void      swap     (btree<T>&);
    btree<T>& operator=(btree<T> rhs)     { swap(rhs); return *this; }

    bool      isEmpty  () const           { return empty; }
    void      insert   (const T&);

    // TODO - NEEDS IMPLEMENTING
    bool      find     (const T&) const;
    void      inorder  (std::ostream&) const;
    void      preorder (std::ostream&) const;
    void      postorder(std::ostream&) const;
    int findDepth(const T&) const;



private:
    btree<T>* left;
    btree<T>* right;
    bool      empty;
    T         data;

};

template <typename T>
btree<T>::btree(const btree<T>& actual) : btree<T>() {
    // Preorder
    // Visit - copy the data
    data = actual.data;
    empty = actual.empty;
    // Left
    if (actual.left)  { left  = new btree<T>(*(actual.left));  }
    // Right
    if (actual.right) { right = new btree<T>(*(actual.right)); }
}

template <typename T>
btree<T>::~btree() {
    // Postorder
    // Left
    if (left)  delete left;
    // Right
    if (right) delete right;
    // Visit - compiler deletes *this.
}

template <typename T>
void btree<T>::swap(btree<T>& rhs) {
    T temp = data;
    data = rhs.data;
    rhs.data = temp;
    bool tempty = empty;
    empty = rhs.empty;
    rhs.empty = tempty;
    
    btree<T> *ptr = left;
    left = rhs.left;
    rhs.left = ptr;
    ptr = right;
    right = rhs.right;
    rhs.right = ptr;
}


template <typename T>
void btree<T>::insert(const T& item) {
    if (empty) {
        data = item;
        empty = false;
    }
    else if (item < data) {
        if (!left) { left = new btree<T>(item); }
        else       { left->insert(item); }
    }
    else if (item > data) {
        if (!right) { right = new btree<T>(item); }
        else        { right->insert(item); }
    }
    else { return; } //No duplicates
}

template <typename T>
bool btree<T>::find(const T& key) const {
    // TODO - Needs implementing!
      if (empty) return false;

    if (key == data) return true;
    else if (key < data) {
        if (!left) return false;
        return left->find(key);
    }
    else { // key > data
        if (!right) return false;
        return right->find(key);
    }
    return false;
}

template <typename T>
void btree<T>::postorder(std::ostream& out) const {
    // TODO - Needs implementing!
    if (empty) return;

    if (left)  left->postorder(out);
    if (right) right->postorder(out);
    out << data << " ";
}

template <typename T>
void btree<T>::preorder(std::ostream& out) const {
    // TODO - Needs implementing!
    if (empty) return;

    out << data << " ";
    if (left)  left->preorder(out);
    if (right) right->preorder(out);
}

template <typename T>
void btree<T>::inorder(std::ostream& out) const {
    // TODO - Needs implementing!
    if (empty) return;

    if (left)  left->inorder(out);
    out << data << " ";
    if (right) right->inorder(out);
}

template <typename T>
int btree<T>::findDepth(const T& key) const {
    if (empty) return -1;

    // Start at depth 0
    if (key == data) return 0;

    if (key < data) {
        if (!left) return -1;
        int d = left->findDepth(key);
        return (d == -1 ? -1 : d + 1);
    }
    else { // key > data
        if (!right) return -1;
        int d = right->findDepth(key);
        return (d == -1 ? -1 : d + 1);
    }
}

#endif
