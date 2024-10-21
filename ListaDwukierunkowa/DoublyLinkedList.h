#pragma once

#include "Node.h"

using namespace std;

/**
 * \brief Klasa DoublyLinkedList
 *
 * Klasa ta reprezentuje Listę dwukierunkową
 * Zawiera element Node, który wskazuje head listy.
 *
 */

class DoublyLinkedList {

    private:
        Node* head;             /**< Zmienna która będzie przechowywać naszą zawartość węzła */

    public:

        /**
         * Konstruktor Klasy.
         * Ustawia head jako nullptr.
         */
        DoublyLinkedList();

        /**
         * Wstawianie węzła na początku listy
         * 
         * @param value wartość która będzie przypisana do węzła.
         */
        void insertAtStart(int value);

        /**
         * Wstawianie węzła na końcu listy
         *
         * @param value wartość która będzie przypisana do węzła.
         */
        void insertAtEnd(int value);

        /**
         * Wstawianie węzła we wskazany indks
         *
         * @param value wartość która będzie przypisana do węzła.
         * @param pos pozycja na którą ma być wstawiony węzeł
         */
        void insertIndex(int value, int pos);

        /**
         * Usunięcie węzła z początku listy
         */
        void deleteAtStart();

        /**
         * Usunięcie węzła z końca listy
         */
        void deleteAtEnd();

        /**
         * Usunięcie węzła z konkretnego indeksu
         *
         * @param pos pozycja która ma zostać usunięta z listy.
         */
        void deleteIndex(int pos);

        /**
         * Wyświetlenie całej listy
         */
        void showList();

        /**
         * Wyświetlenie listy w odwrotnej kolejności
         */
        void showReverseList();


        /**
         * Wyświetlenie listy w odwrotnej kolejności
         */
        void clearList();

        /**
         * Destruktor klasy
         */
        ~DoublyLinkedList();
};

