#include<stdio.h>
#define C_SIZE 20
union person
{
    char name[C_SIZE];
    char hname[C_SIZE];
    char city[C_SIZE];
    char state[C_SIZE];
    char pin[C_SIZE];
};

int main()
{
    union person person1;
    printf("Enter the name of the person: ");
    gets(person1.name);
    printf("Name of the person: %s\n", person1.name);
    printf("Enter the home address of the person: ");
    gets(person1.hname);
    printf("Home address of the person: %s\n", person1.hname);
    printf("Enter the city of the person: ");
    gets(person1.city);
    printf("City of the person: %s\n", person1.city);
    printf("Enter the state of the person: ");
    gets(person1.state);
    printf("State of the person: %s\n", person1.state);
    printf("Enter the pin code of the person: ");
    gets(person1.pin);
    printf("Pin code of the person: %s\n", person1.pin);

    return 0;

}
