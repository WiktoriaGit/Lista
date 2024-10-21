#include "Node.h"

Node::Node(int value)
{
    this->value = value;
    this->nextNode = nullptr;
    this->prevNode = nullptr;
}
