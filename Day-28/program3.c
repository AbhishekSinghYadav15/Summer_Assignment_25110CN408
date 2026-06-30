#include <stdio.h>

#define TOTAL_SEATS 10

int main() {
    int seats[TOTAL_SEATS] = {0}; // 0 = available, 1 = booked
    int choice, seatNo;

    do {
        printf("\n=== Ticket Booking System ===\n");
        printf("1. View Available Seats\n");
        printf("2. Book a Seat\n");
        printf("3. Cancel a Seat\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Available Seats: ");
                for (int i = 0; i < TOTAL_SEATS; i++) {
                    if (seats[i] == 0)
                        printf("%d ", i + 1);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter seat number to book (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seatNo);
                if (seatNo < 1 || seatNo > TOTAL_SEATS)
                    printf("Invalid seat number!\n");
                else if (seats[seatNo - 1] == 1)
                    printf("Seat already booked!\n");
                else {
                    seats[seatNo - 1] = 1;
                    printf("Seat %d booked successfully!\n", seatNo);
                }
                break;

            case 3:
                printf("Enter seat number to cancel (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seatNo);
                if (seatNo < 1 || seatNo > TOTAL_SEATS)
                    printf("Invalid seat number!\n");
                else if (seats[seatNo - 1] == 0)
                    printf("Seat was not booked!\n");
                else {
                    seats[seatNo - 1] = 0;
                    printf("Seat %d cancelled successfully!\n", seatNo);
                }
                break;

            case 4:
                printf("Thank you for using Ticket Booking System!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}