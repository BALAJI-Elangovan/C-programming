#include <stdio.h>
#define SIZE 10

int hash(int key) {
    return key % SIZE;
}

int probe(int h[], int key) {
    int index = hash(key);
    int i = 0;
    while (h[(index + i) % SIZE] != 0 && i < SIZE)  // Ensure bounds check
        i++;
    return (index + i) % SIZE;
}

void insert(int h[], int key) {
    int index = hash(key);
    if (h[index] != 0)  // Collision handling
        index = probe(h, key);
    h[index] = key;
}

void search(int h[], int key) {
    int index = hash(key);
    int i = 0;

    while (h[(index + i) % SIZE] != key) {
        if (h[(index + i) % SIZE] == 0 || i == SIZE) {  // Not found condition
            printf("Element %d not found in the hash table.\n", key);
            return;
        }
        i++;
    }

    printf("Element %d found at index %d.\n", key, (index + i) % SIZE);
}

int main() {
    int a[SIZE] = {0};  // Initialize hash table with 0

    insert(a, 10);
    insert(a, 69);
    insert(a, 54);

    search(a, 69);
    search(a, 20);  // Test case for non-existing element

    return 0;
}
