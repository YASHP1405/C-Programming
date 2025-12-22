/* 16. Write a menu-driven program using structure to:
        Add record
        Display record
        Search record by ID */

#include<stdio.h>
include<string.h>
struct Student {
    int id;
    char name[50];
};
void addRecord(struct Student* s, int id, const char* name) {
    s->id = id;
    strcpy(s->name, name);
}       
void displayRecord(struct Student* s) {
    printf("ID: %d, Name: %s\n", s->id, s->name);
}
int searchRecord(struct Student* s, int id) {
    if (s->id == id) {
        return 1;
    }
    return 0;
}
int main() {
    struct Student student;
    int choice, id;
    char name[50];
    while (1) {
        printf("Menu:\n1. Add Record\n2. Display Record\n3. Search Record by ID\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter ID: ");
                scanf("%d", &id);
                printf("Enter Name: ");
                scanf("%s", name);
                addRecord(&student, id, name);
                break;
            case 2:
                displayRecord(&student);
                break;
            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                if (searchRecord(&student, id)) {
                    printf("Record found:\n");
                    displayRecord(&student);
                } else {
                    printf("Record not found.\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
