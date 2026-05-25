#include <stdio.h>
#include <stdlib.h>
#define n 10

int i = 0;

struct student {
    char name[20];
    char dep[5];
    float cgpa;
} *s[n];

void add();
void remove_student();
void print();

int main() {
    while(1) {
        int a;
        printf("1.add\n2.remove\n3.print\n4.No thanks\n");
        scanf("%d", &a);
        switch(a) {
            case 1:
                add();
                break;
            case 2:
                remove_student();
                break;
            case 3:
                print();
                break;
            case 4:
                printf("visit again thankyou!!");
                return 0;
        }
    }
    return 0;
}

void add() {
    if(i < n) {
        s[i] = (struct student*)malloc(sizeof(struct student));
        printf("Enter the name: ");
        scanf("%s", s[i]->name);
        printf("Enter the departement: ");
        scanf("%s", s[i]->dep);
        printf("Enter the cgpa: ");
        scanf("%f", &s[i]->cgpa);
        i++;
    } else {
        printf("Student array is full!\n");
    }
}

void remove_student() {
    if(i <= 0) {
        printf("Student array is empty !");
    } else {
        i--;
    }
}

void print() {
    for(int ind = 0; ind < i; ind++) {
        printf("Name : %s\n", s[ind]->name);
        printf("Departement : %s\n", s[ind]->dep);
        printf("CGPA : %.2f NAlla padi\n", s[ind]->cgpa);
    }
}
