#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

DoublyLinkedList::DoublyLinkedList() : head(nullptr) {}

void DoublyLinkedList::insertAtStart(int value)
{
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    newNode->nextNode = head;
    head->prevNode = newNode;
    head = newNode;
}

void DoublyLinkedList::insertAtEnd(int value)
{
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->nextNode != nullptr) {
        temp = temp->nextNode;
    }

    temp->nextNode = newNode;
    newNode->prevNode = temp;
}
    
void DoublyLinkedList::insertIndex(int value, int pos)
{
    if (pos == 0) {
        insertAtStart(value);
        return;
    }

    Node* newNode = new Node(value);
    Node* temp = head;

    for (int i = 0; temp != nullptr && i < pos - 1; i++) {
        temp = temp->nextNode;
    }

    if (temp == nullptr) {
        cout << "Podano zbyt du¿y indeks" << endl;
        delete newNode;
        return;
    }

    newNode->nextNode = temp->nextNode;
    newNode->prevNode = temp;
    if (temp->nextNode != nullptr) {
        temp->nextNode->prevNode = newNode;
    }
    temp->nextNode = newNode;
}

void DoublyLinkedList::deleteAtStart()
{
    if (head == nullptr) {
        cout << "Lista jest pusta" << endl;
        return;
    }

    Node* temp = head;
    head = head->nextNode;
    if (head != nullptr) {
        head->prevNode = nullptr;
    }
    delete temp;
}

void DoublyLinkedList::deleteAtEnd()
{
    if (head == nullptr) {
        cout << "Lista jest pusta" << endl;
        return;
    }

    Node* temp = head;
    if (temp->nextNode == nullptr) {
        head = nullptr;
        delete temp;
        return;
    }

    while (temp->nextNode != nullptr) {
        temp = temp->nextNode;
    }

    temp->prevNode->nextNode = nullptr;
    delete temp;
}

void DoublyLinkedList::deleteIndex(int pos)
{
    if (head == nullptr) {
        cout << "Lista jest pusta" << endl;
        return;
    }

    if (pos == 0) {
        deleteAtStart();
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != nullptr && i < pos; i++) {
        temp = temp->nextNode;
    }

    if (temp == nullptr) {
        cout << "Z³y indeks" << endl;
        return;
    }

    if (temp->nextNode != nullptr) {
        temp->nextNode->prevNode = temp->prevNode;
    }
    if (temp->prevNode != nullptr) {
        temp->prevNode->nextNode = temp->nextNode;
    }
    delete temp;
}

void DoublyLinkedList::showList()
{
    Node* temp = head;
    if (temp == nullptr) {
        cout << "Lista jest pusta" << endl;
        return;
    }
    cout << "Lista: ";
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->nextNode;
    }
    cout << endl;
}

void DoublyLinkedList::showReverseList()
{
    Node* temp = head;

    if (temp == nullptr) {
        cout << "Lista jest pusta" << endl;
        return;
    }

    while (temp->nextNode != nullptr) {
        temp = temp->nextNode;
    }

    cout << "Lista odwrotnie: ";
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->prevNode;
    }
    cout << endl;
}

void DoublyLinkedList::clearList()
{
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->nextNode;
        delete temp;
    }
    head = nullptr;
}

DoublyLinkedList::~DoublyLinkedList() 
{
        clearList();
}