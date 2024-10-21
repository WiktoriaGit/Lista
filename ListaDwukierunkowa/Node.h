#pragma once

/**
 * \brief Klasa Node
 *
 * Klasa ta reprezentuje węzeł w liście.
 * Zawiera zawartość oraz wskaźniki na kolejne elementy.
 *
 */

class Node {

    public:
        int value;          /**< Zmienna która będzie przechowywać naszą zawartość węzła */
        Node* nextNode;     /**< Wskaźnik na następny element listy */
        Node* prevNode;     /**< Wskaźnik na poprzedni element listy */

        /**
         * Konstruktor Klasy
         * @param value wartość która będzie przypisana do węzła.
         */
        Node(int value);
};

