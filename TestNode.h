#include "PersonTest.h"
class LinkedList{
private:
    struct Node { //структура узла открытая внутри класса лл
        Node *next;
        PersonTest data;
        Node();
    };
    Node *first;
public:
    LinkedList();
    LinkedList(const LinkedList &point);
    ~LinkedList();
    friend std::ostream& operator<< (std::ostream& out, const LinkedList& pt);
    friend std::ifstream& operator>> (std::ifstream& in, LinkedList& pt);
    void add(Node point);
    void sort();
    void addToSorted(Node point);
    void write();
    void remove();
};
