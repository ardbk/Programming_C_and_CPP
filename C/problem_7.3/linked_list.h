/*CH-230-A
 * a7_p3.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

struct list {
    int info;
    struct list *next;
};

struct list* pushFront(struct list* my_list, int value);
struct list* pushBack(struct list* my_list, int value);
void disposeList(struct list* my_list);
void printList(struct list* my_list);
struct list* removeFirstElement(struct list* my_list);
