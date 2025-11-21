/* Aim: Make a system for sport team
   Programmer : Jihan Patel
*/
#include <stdio.h>
#include <string.h>

#define MAX 50

// Structure for Coach Information
struct Coach {
    char name[50];
    int age;
    int experience;
};

// Structure for Team Information (Nested Structure)
struct Team {
    char teamName[50];
    char sportType[50];
    struct Coach coach;
};

int main() {
    struct Team teams[MAX];
    int count = 0;
    int choice;
    printf("Jihan Patel\n 25CE079\n\n");

    while(1) {
        printf("\n--- Sports Team Management System ---\n");
        printf("1. Add New Team\n");
        printf("2. Display All Teams\n");
        printf("3. Search Team by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count < MAX) {
                printf("\nEnter Team Name: ");
                scanf("%s", teams[count].teamName);

                printf("Enter Sport Type: ");
                scanf("%s", teams[count].sportType);

                printf("Enter Coach Name: ");
                scanf("%s", teams[count].coach.name);

                printf("Enter Coach Age: ");
                scanf("%d", &teams[count].coach.age);

                printf("Enter Coach Experience (years): ");
                scanf("%d", &teams[count].coach.experience);

                count++;
                printf("Team added successfully!\n");
            } else {
                printf("Storage full! Cannot add more teams.\n");
            }
        }

        else if(choice == 2) {
            if(count == 0) {
                printf("No teams available!\n");
            } else {
                int i;
                printf("\n--- Displaying all teams ---\n");
                for(i = 0; i < count; i++) {
                    printf("\nTeam %d:\n", i + 1);
                    printf("Name: %s\n", teams[i].teamName);
                    printf("Sport: %s\n", teams[i].sportType);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Coach Age: %d\n", teams[i].coach.age);
                    printf("Experience: %d years\n", teams[i].coach.experience);
                }
            }
        }

        else if(choice == 3) {
            char searchName[50];
            int found = 0, i;

            printf("\nEnter team name to search: ");
            scanf("%s", searchName);

            for(i = 0; i < count; i++) {
                if(strcmp(teams[i].teamName, searchName) == 0) {
                    found = 1;
                    printf("\nTeam Found!\n");
                    printf("Name: %s\n", teams[i].teamName);
                    printf("Sport: %s\n", teams[i].sportType);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Coach Age: %d\n", teams[i].coach.age);
                    printf("Experience: %d years\n", teams[i].coach.experience);
                    break;
                }
            }

            if(!found) {
                printf("Team not found!\n");
            }
        }

        else if(choice == 4) {
            printf("Exiting program...\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
