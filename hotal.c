#include <stdio.h>
#include <string.h>

#define MAX_ROOMS 10
#define MAX_NAME 20

struct Room {
    int number;
    char name[MAX_NAME];
    int status; // 0: available, 1: booked
};

struct Room rooms[MAX_ROOMS] = {
    {1, "Room 1", 0},
    {2, "Room 2", 0},
    {3, "Room 3", 0},
    {4, "Room 4", 0},
    {5, "Room 5", 0},
    {6, "Room 6", 0},
    {7, "Room 7", 0},
    {8, "Room 8", 0},
    {9, "Room 9", 0},
    {10, "Room 10", 0}
};

void displayRooms() {
    printf("Available Rooms:\n");
    for (int i = 0; i < MAX_ROOMS; i++)
	 {
        if (rooms[i].status == 0) {
            printf("Room %d: %s\n", rooms[i].number, rooms[i].name);
        }
    }
}

void bookRoom(int roomNumber, char *name) {
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (rooms[i].number == roomNumber && rooms[i].status == 0) {
            strcpy(rooms[i].name, name);
            rooms[i].status = 1;
            printf("Room %d booked successfully!\n", roomNumber);
            return;
        }
    }
    printf("Room %d not available!\n", roomNumber);
}

void checkoutRoom(int roomNumber) {
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (rooms[i].number == roomNumber && rooms[i].status == 1) {
            rooms[i].status = 0;
            printf("Room %d checked out successfully!\n", roomNumber);
            return;
        }
    }
    printf("Room %d not booked!\n", roomNumber);
}

int main() {
    int choice, roomNumber;
    char name[MAX_NAME];

    while (1) {
        printf("Hotel Management System\n");
        printf("1. Display Available Rooms\n");
        printf("2. Book Room\n");
        printf("3. Checkout Room\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayRooms();
                break;
            case 2:
                printf("Enter room number: ");
                scanf("%d", &roomNumber);
                printf("Enter name: ");
                scanf("%s", name);
                bookRoom(roomNumber, name);
                break;
            case 3:
                printf("Enter room number: ");
                scanf("%d", &roomNumber);
                checkoutRoom(roomNumber);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

