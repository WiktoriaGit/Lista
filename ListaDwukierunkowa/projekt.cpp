#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;


int main()
{
    DoublyLinkedList list;

    cout << "Dodajmy element na poczatku: " << endl;
    list.insertAtStart(1);
    list.showList();

    cout << "Dodajmy element na koncu: " << endl;
    list.insertAtEnd(10);
    list.showList();

    cout << "Dodajmy element na 1 indeks (2 miejsce): " << endl;
    list.insertIndex(2, 1);
    list.showList();

    cout << "Wyswietlmy liste na odwrot: " << endl;
    list.showReverseList();

    cout << "Dodajmy jeszcze kilka wartosci: " << endl;
    list.insertAtEnd(30);
    list.insertAtEnd(80);
    list.insertAtEnd(10);
    list.insertAtEnd(66);
    list.insertAtEnd(77);
    list.insertAtEnd(100);
    list.insertAtEnd(120);
    list.insertAtEnd(0);
    list.showList();

    cout << "Usunmy element na 4 indeksie (5 miejscu): " << endl;
    list.deleteIndex(4);
    list.showList();

    cout << "Usunmy pierwszy element: " << endl;
    list.deleteAtStart();
    list.showList();

    cout << "Usunmy ostatni element: " << endl;
    list.deleteAtEnd();
    list.showList();

    cout << "Czyscimy cala liste: " << endl;
    list.clearList();
    list.showList();

    

    return 0;
}