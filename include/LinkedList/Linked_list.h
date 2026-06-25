#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdexcept>

template<typename T>
class Node
{
public:
    T data;
    Node<T>* next;

    Node(const T& value)
    {
        data = value;
        next = nullptr;
    }

    Node(const T& value, Node<T>* nextNode)
    {
        data = value;
        next = nextNode;
    }
};

template<typename T>
class LinkedList
{
private:
    Node<T>* head;
    Node<T>* tail;
    int currentSize;

public:
    LinkedList();
    LinkedList(const LinkedList& other);
    LinkedList& operator=(const LinkedList& other);
    ~LinkedList();
    void pushFront(const T& value);
    void pushBack(const T& value);
    void insert(int index, const T& value);
    void removeFront();
    void removeBack();
    void remove(int index);
    T& get(int index);
    bool contains(const T& value) const;
    int size() const;
    bool isEmpty() const;
    void clear();
    Node<T>* getNode(int index) const;
};

#include "../../src/LinkedList/Linked_list.tpp"

#endif