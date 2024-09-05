#include "linked_list.h"
#include <iostream>

template void linked_list<int>::addLast(int);
template linked_list<int>::linked_list(std::vector<int>);
template unsigned int linked_list<int>::Length();
template void linked_list<int>::println();

template<typename Data>
linked_list<Data>::linked_list(std::vector<Data> list)
{
    head = new node;
    head->next = new node;
    for(Data& i : list)
    {

    }
}

template<typename Data>
void linked_list<Data>::addLast(Data data)
{
    this->len++;
    while(head->next!=nullptr)
    {
        head = head->next;
    }
    node *n = new node;
    n->previous = head;
    n->next = nullptr;
    n->data = data;
}

template<typename Data>
void linked_list<Data>::println()
{
    while (head->next != nullptr)
    {
        head = head->next;
        std::cout << head->data << std::endl;
    }
}

template<typename Data>
unsigned int linked_list<Data>::Length()
{
    return this->len;
}
