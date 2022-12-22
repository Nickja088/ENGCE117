#include <stdio.h>

struct acat {
    int age;
    int height;
    int weight;
};

void set( struct acat *state ); //Prototype

int main() {
    struct acat d;
    set(&d);
    printf("cat age : %d years\n", d.age);
    printf("cat height : %d cm\n", d.height);
    printf("cat weight : %d kg\n", d.weight);
    return 0;
}

void set( struct acat *state ){
    (*state).age = 2;
    (*state).height = 25;
    (*state).weight = 3.5;
}
