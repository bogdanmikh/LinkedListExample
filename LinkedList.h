// Добавлять числа в конец pushBack
// Добавлять числа в начало pushFront
// Удалять числа под индексом erase
// Получить размер
// Получить число под индексом

class Node {
public:
    int value;
    Node* next;
};

class LinkedList {
private:
    int size = 0;
    Node *first = nullptr;
    Node *last = nullptr;
public:
    void pushBack(int value) {
        if (first == nullptr) {
            first = new Node;
            last = first;
            first->value = value;
            size++;
            return;
        }
        last->next = new Node;
        last = last->next;
        last->value = value;
        size++;
    }

    void pushFront(int value) {
        if(first == nullptr) {
            first = new Node;
            first->value = value;
            last = first;
            size++;
            return;
        }
        Node* newItem = new Node;
        newItem->value = value;
        newItem->next = first;
        first = newItem;
        size++;
    }

    void erase(int index) {
        Node* current = first;
        for(int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        current->next = current->next->next;
        size--;
    }

    void sort() {}

    int getSize() const { return size; }

    int get(int index) const {
        Node* current = first;
        for(int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->value;
    }
};

