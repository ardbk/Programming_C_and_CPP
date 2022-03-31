#include <stdio.h>
#include <stdlib.h>

struct coffee {
    int id;
    unsigned char property;
};

void unset_coffee_property(struct coffee* c, const unsigned char property) {
    if((c->property&property) == property){
        c->property = c->property^property;
    }
}

void set_coffee_property(struct coffee* c, const unsigned char property) {
    if(property<5){
        unset_coffee_property(c, 1);
        unset_coffee_property(c, 2);
        unset_coffee_property(c, 4);
    } else if(property < 33){
        unset_coffee_property(c, 8);
        unset_coffee_property(c, 16);
        unset_coffee_property(c, 32);
    } else{
        unset_coffee_property(c, 64);
        unset_coffee_property(c, 128);
    }
    c->property = c->property^property;
}

void print(struct coffee c){
    for (int i = 7; i >= 0; i--) {
        printf("%d", ((c.property >> i) & 1) ? 1 : 0);
    }
    printf("\n");
}


int main() {
    const unsigned char regular = 1<<0;
    const unsigned char espresso = 1<<1;
    const unsigned char double_espresso = 1<<2;
    const unsigned char milk = 1<<3;
    const unsigned char cream = 1<<4;
    const unsigned char soy_milk = 1<<5;
    const unsigned char sugar = 1<<6;
    const unsigned char sweetener = 1<<7;
    struct coffee *ptr;
    ptr = (struct coffee*)malloc(sizeof(struct coffee));
    print(*ptr);
    set_coffee_property(ptr, sugar);
    set_coffee_property(ptr, milk);
    set_coffee_property(ptr, regular);

    print(*ptr);
    return 0;
}
