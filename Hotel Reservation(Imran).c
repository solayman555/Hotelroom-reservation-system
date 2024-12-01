#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define MAX_ROOMS 50

typedef struct {
    int roomNumber;
    char guestName[50];
    int isBooked;
} Room;

Room rooms[MAX_ROOMS];

void initializeRooms() {
    for (int i = 0; i < MAX_ROOMS; i++) {
        rooms[i].roomNumber = i + 1;
        rooms[i].isBooked = 0;
        strcpy(rooms[i].guestName, "None");
    }
}

void displayBanner() {
    printf("\n\n\t\t\t*******************************\n");
    sleep(1);
    printf("\t\t\t*   Welcome To DSC RESORT!   *\n");
    sleep(1);
    printf("\t\t\t*******************************\n");
    sleep(1);
}

void adminPanel() {
    char password[10];
    int attempts = 3;

    while (attempts > 0) {
        printf("\nEnter Admin Password: ");
        scanf("%s", password);

        if (strcmp(password, "admin") == 0) {
            printf("\nAccess Granted. Welcome Admin!\n");
            while (1) {
                printf("Admin Menu:\n");
                printf("1. View Booked Rooms\n");
                printf("2. Add New Booking\n");
                printf("3. Exit\n");
                printf("Enter your choice: ");

                int choice;
                scanf("%d", &choice);

                if (choice == 1) {
                    for (int i = 0; i < MAX_ROOMS; i++) {
                        if (rooms[i].isBooked) {
                            printf("Room %d: Booked by %s\n", rooms[i].roomNumber, rooms[i].guestName);
                        }
                    }
                } else if (choice == 2) {
                    int roomNumber;
                    char guestName[50];
                    printf("Enter Room Number (1-%d): ", MAX_ROOMS);
                    scanf("%d", &roomNumber);

                    if (roomNumber < 1 || roomNumber > MAX_ROOMS || rooms[roomNumber - 1].isBooked) {
                        printf("Invalid room selection.\n");
                    } else {
                        printf("Enter Guest Name: ");
                        scanf("%s", guestName);
                        rooms[roomNumber - 1].isBooked = 1;
                        strcpy(rooms[roomNumber - 1].guestName, guestName);
                        printf("Room %d successfully booked for %s.\n", roomNumber, guestName);
                    }
                } else if (choice == 3) {
                    break;
                } else {
                    printf("Invalid choice. Please try again.\n");
                }
            }
            break;
        } else {
            printf("Incorrect password. %d attempt(s) remaining.\n", --attempts);
        }
    }

    if (attempts == 0) {
        printf("Access denied. Returning to main menu.\n");
    }
}

void userPanel() {
    while (1) {
        printf("\nUser Menu:\n");
        printf("1. View Available Rooms\n");
        printf("2. Book a Room\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 1) {

            printf("Available Rooms:\n");
            for (int i = 0; i < MAX_ROOMS; i++) {
                if (!rooms[i].isBooked) {
                    printf("Room %d\n", rooms[i].roomNumber);
                }
            }
        } else if (choice == 2) {
            int roomNumber;
            char guestName[50];
            printf("Enter Room Number (1-%d): ", MAX_ROOMS);
            scanf("%d", &roomNumber);

            if (roomNumber < 1 || roomNumber > MAX_ROOMS || rooms[roomNumber - 1].isBooked) {
                printf("Invalid room selection.\n");
            } else {
                printf("Enter Your Name: ");
                scanf("%s", guestName);
                rooms[roomNumber - 1].isBooked = 1;
                strcpy(rooms[roomNumber - 1].guestName, guestName);
                printf("Room %d successfully booked for %s.\n", roomNumber, guestName);
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
}

int main() {
    initializeRooms();
    displayBanner();

    while (1) {
        printf("\nMain Menu:\n");
        printf("1. Admin Panel\n");
        printf("2. User Panel\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            adminPanel();
        } else if (choice == 2) {
            userPanel();
        } else if (choice == 3) {
            printf("Thank you for using the DSC Resort System. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
