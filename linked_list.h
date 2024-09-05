#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <vector>

template<typename Data>
class linked_list
{
private:
    unsigned int len = 0;
    class node
    {
    public:
        Data data;
        class node *previous;
        class node *next;
    };
    node *head;
public:
    linked_list(std::vector<Data>);
    void addLast(Data data);
    void addFirst(Data data);
    void removeLast();
    void removeFirst();
    void println();
    unsigned int Length();
};

#endif // LINKED_LIST_H
