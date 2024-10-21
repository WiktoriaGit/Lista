#pragma once

#include "Node.h"

using namespace std;

class DoublyLinkedList {

    private:
        Node* head;

    public:
        DoublyLinkedList();

        void insertAtStart(int value);

        void insertAtEnd(int value);

        void insertIndex(int value, int pos);

        void deleteAtStart();

        void deleteAtEnd();

        void deleteIndex(int pos);

        void showList();

        void showReverseList();

        void clearList();

        ~DoublyLinkedList();
};

