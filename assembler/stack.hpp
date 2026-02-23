//
// File: stack.hpp
//
// Programmer:
// Date:        Fall 2025
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//
#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_

#include <new>
#include <cassert>


template<typename T> 
class Node {
    public:
	 T data;
    Node<T>* next;
    Node(const T& d, Node<T>* n = nullptr) : data(d), next(n) {}

};


// CLASS INV:
//
template <typename T>
class stack {
public:
              stack     ();
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T>);
    
	bool      empty     () const;
	bool      full      () const;
	T         top       () const;
	T         pop       ();
	void      push      (const T&);

private:
	Node<T>   *tos;
};

template <typename T>
stack<T>::stack() : tos(nullptr) {}

template <typename T>
void stack<T>::push(const T& value) {
    assert(!full());
    Node<T>* newNode = new Node<T>(value);
    newNode->next = tos;
    tos = newNode;
}

template <typename T>
T stack<T>::top() const {
    assert(!empty());
    return tos->data;
}

template <typename T>
T stack<T>::pop() {
    assert(!empty());
    T poppedValue = tos->data;
    Node<T>* nodeToDelete = tos;
    tos = tos->next;
    delete nodeToDelete;
    return poppedValue;
}

template <typename T>
stack<T>::~stack() {
    while (tos != nullptr) {
        Node<T>* nodeToDelete = tos;
        tos = tos->next;
        delete nodeToDelete;
    }
}

template <typename T>
void stack<T>::swap(stack<T>& otherStack) {
    Node<T>* tempNode = tos;
    tos = otherStack.tos;
    otherStack.tos = tempNode;
}

template <typename T>
stack<T>::stack(const stack<T>& other) : tos(nullptr) {
    Node<T>* current = other.tos;
    Node<T>* lastNode = nullptr;

    while (current != nullptr) {
        if (tos == nullptr) {
            tos = new Node<T>(current->data);
            lastNode = tos;
        } else {
            lastNode->next = new Node<T>(current->data);
            lastNode = lastNode->next;
        }
        current = current->next;
    }
}

template <typename T>
stack<T>& stack<T>::operator=(stack<T> rhs) {
    swap(rhs);
    return *this;
}

template <typename T>
bool stack<T>::empty() const {
    return tos == nullptr;
}

template <typename T>
bool stack<T>::full() const {
    Node<T>* testNode = new (std::nothrow) Node<T>(T());
    if (testNode == nullptr) return true;
    delete testNode;
    return false;
}

#endif
