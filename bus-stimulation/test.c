// // #include <stdio.h>
// // #include <string.h>
// // #include <stdbool.h>

// // #define MAX_SEATS 10

// // typedef struct {
// //     int seat_number;
// //     char passenger_name[50];
// //     bool is_booked;
// // } Seat;

// // // Initialize the bus
// // void init_bus(Seat bus[]) {
// //     for (int i = 0; i < MAX_SEATS; i++) {
// //         bus[i].seat_number = i + 1;
// //         bus[i].is_booked = false;
// //         strcpy(bus[i].passenger_name, "None");
// //     }
// // }

// // // Display the current bus layout
// // void show_layout(Seat bus[]) {
// //     printf("\n--- Current Bus Layout ---\n");
// //     for (int i = 0; i < MAX_SEATS; i++) {
// //         printf("Seat %02d: %s %s\n", 
// //                bus[i].seat_number, 
// //                bus[i].is_booked ? "BOOKED" : "FREE",
// //                bus[i].is_booked ? bus[i].passenger_name : "");
// //     }
// // }

// // // Book a seat
// // void book_seat(Seat bus[], int seat_num, char name[]) {
// //     if (seat_num < 1 || seat_num > MAX_SEATS) {
// //         printf("Error: Invalid seat number.\n");
// //     } else if (bus[seat_num - 1].is_booked) {
// //         printf("Error: Seat %d is already booked by %s.\n", seat_num, bus[seat_num - 1].passenger_name);
// //     } else {
// //         bus[seat_num - 1].is_booked = true;
// //         strcpy(bus[seat_num - 1].passenger_name, name);
// //         printf("Success: Seat %d booked for %s.\n", seat_num, name);
// //     }
// // }

// // // Cancel a seat
// // void cancel_seat(Seat bus[], int seat_num) {
// //     if (seat_num < 1 || seat_num > MAX_SEATS) {
// //         printf("Error: Invalid seat number.\n");
// //     } else if (!bus[seat_num - 1].is_booked) {
// //         printf("Error: Seat %d is already free.\n", seat_num);
// //     } else {
// //         bus[seat_num - 1].is_booked = false;
// //         strcpy(bus[seat_num - 1].passenger_name, "None");
// //         printf("Success: Booking for seat %d has been cancelled.\n", seat_num);
// //     }
// // }

// // int main() {
// //     Seat bus[MAX_SEATS];
// //     init_bus(bus);

// //     // Simulation
// //     book_seat(bus, 3, "Sahil Kumar");
// //     book_seat(bus, 7, "Sania Sharma");
// //     show_layout(bus);

// //     cancel_seat(bus, 3);
// //     book_seat(bus, 3, "John Doe");
// //     show_layout(bus);

// //     return 0;
// // }


// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// #define MAX_SEATS 10

// typedef struct {
//     int seat_number;
//     char passenger_name[50];
//     bool is_booked;
// } Seat;

// // Helper to initialize the bus
// void init_bus(Seat bus[]) {
//     for (int i = 0; i < MAX_SEATS; i++) {
//         bus[i].seat_number = i + 1;
//         bus[i].is_booked = false;
//         strcpy(bus[i].passenger_name, "None");
//     }
// }

// // Function to display layout
// void show_layout(Seat bus[]) {
//     printf("\n--- Bus Seat Map ---\n");
//     for (int i = 0; i < MAX_SEATS; i++) {
//         printf("Seat %02d: [%s] %s\n", 
//                bus[i].seat_number, 
//                bus[i].is_booked ? "BOOKED" : "FREE  ",
//                bus[i].is_booked ? bus[i].passenger_name : "");
//     }
//     printf("--------------------\n");
// }

// int main() {
//     Seat bus[MAX_SEATS];
//     init_bus(bus);
    
//     int choice, seat_num;
//     char name[50];

//     // The main loop keeps the program running
//     while (1) {
//         printf("\n1. View Seats\n2. Book Seat\n3. Cancel Seat\n4. Exit\nChoose an option: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 show_layout(bus);
//                 break;

//             case 2:
//                 printf("Enter seat number (1-%d): ", MAX_SEATS);
//                 scanf("%d", &seat_num);
//                 if (seat_num < 1 || seat_num > MAX_SEATS) {
//                     printf("Invalid seat number!\n");
//                 } else if (bus[seat_num - 1].is_booked) {
//                     printf("Error: Already booked by %s.\n", bus[seat_num - 1].passenger_name);
//                 } else {
//                     printf("Enter passenger name: ");
//                     scanf("%s", name);
//                     bus[seat_num - 1].is_booked = true;
//                     strcpy(bus[seat_num - 1].passenger_name, name);
//                     printf("Booking confirmed for %s!\n", name);
//                 }
//                 break;

//             case 3:
//                 printf("Enter seat number to cancel: ");
//                 scanf("%d", &seat_num);
//                 if (seat_num < 1 || seat_num > MAX_SEATS) {
//                     printf("Invalid seat number!\n");
//                 } else if (!bus[seat_num - 1].is_booked) {
//                     printf("Seat is already free.\n");
//                 } else {
//                     bus[seat_num - 1].is_booked = false;
//                     strcpy(bus[seat_num - 1].passenger_name, "None");
//                     printf("Cancellation successful.\n");
//                 }
//                 break;

//             case 4:
//                 printf("Exiting... Goodbye!\n");
//                 return 0; // Terminates the loop and the program

//             default:
//                 printf("Invalid choice! Try again.\n");
//         }
//     }

//     return 0;
// }

#include <stdio.h>   // Standard Input/Output library
#include <string.h>  // Library for string manipulation (like strcpy)
#include <stdbool.h> // Library to use true/false boolean types

// Define the maximum number of seats at the top (easy to change later)
#define MAX_SEATS 5 

// 'typedef' allows us to define our own data structure type called "Seat"
typedef struct {
    int seat_number;          // Stores the seat ID
    char passenger_name[50];  // Stores the name as a character array (string)
    bool is_booked;           // Tracks status: true = booked, false = free
} Seat;

int main() {
    // Declare an array of 'Seat' structures to hold all seats
    Seat bus[MAX_SEATS];

    // Initialize all seats at the start
    for (int i = 0; i < MAX_SEATS; i++) {
        bus[i].seat_number = i + 1;
        bus[i].is_booked = false; // Set initial status to false (free)
        strcpy(bus[i].passenger_name, "None"); // Default name
    }

    int choice; // Variable to store user menu choice
    int seat_num; // Variable to store input for seat numbers
    char name[50]; // Temporary buffer for capturing names

    // Start of the infinite loop (the application remains active)
    while (1) {
        // Displaying the Menu
        printf("\n--- Bus Reservation System ---\n");
        printf("1. View Seats\n");
        printf("2. Book a Seat\n");
        printf("3. Cancel a Booking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch structure to handle user interaction
        switch (choice) {
            case 1:
                printf("\n--- Current Status ---\n");
                for (int i = 0; i < MAX_SEATS; i++) {
                    printf("Seat %d: %s [%s]\n", 
                           bus[i].seat_number, 
                           bus[i].is_booked ? "BOOKED" : "FREE  ",
                           bus[i].is_booked ? bus[i].passenger_name : "");
                }
                break;

            case 2:
                printf("Enter seat number to book (1-%d): ", MAX_SEATS);
                scanf("%d", &seat_num);
                // Input Validation
                if (seat_num < 1 || seat_num > MAX_SEATS) {
                    printf("Error: Invalid seat number.\n");
                } else if (bus[seat_num - 1].is_booked) {
                    printf("Error: Seat is already taken.\n");
                } else {
                    printf("Enter passenger name: ");
                    scanf("%s", name);
                    // Update the struct values
                    bus[seat_num - 1].is_booked = true;
                    strcpy(bus[seat_num - 1].passenger_name, name);
                    printf("Success: Booked for %s.\n", name);
                }
                break;

            case 3:
                printf("Enter seat number to cancel: ");
                scanf("%d", &seat_num);
                if (seat_num < 1 || seat_num > MAX_SEATS) {
                    printf("Error: Invalid seat number.\n");
                } else if (!bus[seat_num - 1].is_booked) {
                    printf("Error: Seat is not booked.\n");
                } else {
                    // Reset the struct values
                    bus[seat_num - 1].is_booked = false;
                    strcpy(bus[seat_num - 1].passenger_name, "None");
                    printf("Success: Cancellation confirmed.\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                return 0; // Returning 0 terminates the 'while' loop and the program

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}