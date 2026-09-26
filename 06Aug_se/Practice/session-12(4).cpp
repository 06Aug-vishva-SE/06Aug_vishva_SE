#include <stdio.h>

struct InstaProfile
{
    char username[20];
    int followers;

    struct Bio
    {
        char description[50];
        int age;
    } bio;
};

int main()
{
    struct InstaProfile p = {"mobile123", 5000, "Student", 20};

    printf("Username: %s\n", p.username);
    printf("Followers: %d\n", p.followers);
    printf("Description: %s\n", p.bio.description);
    printf("Age: %d", p.bio.age);

    return 0;
}
