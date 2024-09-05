#include <cstdio>
#include <cstdlib>
#include <vector>
#include "linked_list.h"

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3};
    linked_list<int> *list = new linked_list<int>(arr);
    list->addLast(100);
    list->addLast(100);
    list->addLast(100);
    printf("%d\n", list->Length());
    list->println();
    return EXIT_SUCCESS;
}
