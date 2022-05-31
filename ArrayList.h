//
// Created by Админ on 17.04.2022.
//

// Добавлять числа в конец pushBack
// Добавлять числа в начало pushFront
// Удалять числа под индексом erase
// Получить размер
// Получить число под индексом
class ArrayList {
private:
    int count = 2;
    int *array = new int[count];
    int size = 0;

    void resizeArray() {
        int *storeArray = new int[count];
        for (int i = 0; i < count; i++) {
            storeArray[i] = array[i];
        }
        delete[] array;
        count *= 2;
        array = new int[count];
        for (int i = 0; i < size; i++) {
            array[i] = storeArray[i];
        }
        delete[] storeArray;
    }
public:
    void pushBack(int value) {
        if (size == count) {
            resizeArray();
        }
        array[size] = value;
        size++;
    }

    void pushFront(int value) {
        if (size == count) {
            resizeArray();
        }
        size++;
        for (int i = size; i > 0; --i) {
            array[i] = array[i - 1];
        }
        array[0] = value;
    }

    void erase(int index) {
        for (int i = index; i < size - 1; i++) {
            array[i] = array[i + 1];
        }
        size--;
    }

    void sort() {
        int sortedArray[size];
        for (int i = 0; i < size; i++) {
            int minElement = INT_MAX;
            int minIndex = 0;
            for (int j = 0; j < size; ++j) {
                if (array[j] < minElement) {
                    minElement = array[j];
                    minIndex = j;
                }
            }
            array[minIndex] = INT_MAX;
            sortedArray[i] = minElement;
        }
        for (int i = 0; i < size; ++i) {
            array[i] = sortedArray[i];
        }
     }

    int getSize() const { return size; }

    int get(int index) const {
        return array[index];
    }
};
