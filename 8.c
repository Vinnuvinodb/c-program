#include <stdio.h>

int main() {
    int totalUsers, studentUsers, staffUsers, nonTeachingUsers;

    printf("Enter total number of users: ");
    scanf("%d", &totalUsers);
 printf("Enter number of staff users: ");
    scanf("%d", &staffUsers);
    
    nonTeachingUsers = staffUsers / 3;
    studentUsers = totalUsers-(staffUsers+nonTeachingUsers);

    printf("Total Users: %d\n", totalUsers);
    printf("Staff Users: %d\n", staffUsers);
    printf("Non-Teaching Staff Users: %d\n", nonTeachingUsers);
    printf("Student Users: %d\n", studentUsers);

    return 0;
}
