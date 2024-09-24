#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User {
    char name[50];
    char email[50];
    char password[50];
    int age;
};

struct User getUsers() {
}

struct User addNewUser(char const *name, char const *email, char const *password, int const age) {
    struct User newUser;

    strncpy(newUser.name, name, sizeof(newUser.name) -1);
    newUser.name[sizeof(newUser.name) - 1] = '\0';

    strncpy(newUser.email, email, sizeof(newUser.email) -1);
    newUser.email[sizeof(newUser.email) - 1] = '\0';

    strncpy(newUser.password, password, sizeof(newUser.password) -1);
    newUser.password[sizeof(newUser.password) - 1] = '\0';

    newUser.age = age;

    return newUser;
};

void saveUsersToExcel() {

}

int app() {
    return 0;
};