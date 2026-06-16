#include <stdio.h>
#include <string.h>
#include <stdbool.h>



struct bus
{
    char passanger[20];
    int seatnumber; 
    bool status;
};

struct bus seat[20];

void viewseat(){

}

void bookseat(){

}

void cancelseat(){

}

int main() {    
    // int seat;

    for (int i = 0; i < 20; i++)
    {
        seat[i].seatnumber = i;
        seat[i].status = false;
    }
    bool loop = true;

    while (loop)
    {
        //display 
        int choice;
        printf("---Bus reservation stimulator---\n");
        printf("1. view seats status\n");
        printf("2. Book seat \n");
        printf("3. cancel seat\n");
        printf("4. exit");

        printf("Enter your choice : \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("available seats ");
            //1 is free
            //2 is occupied
            break;

            case 2:
            int book;
            printf("Enter number you want to book : ");
            scanf("%d",&book );
            if(book <1 || book >20){
                printf("That seat doesn't exists\n");
            }else if(seat[book].status == true){
                printf("seat is booked already");
            }else{
                
                printf(" ");
                printf("enter your name : ");
                scanf("%s",&seat[book].passanger);

                // printf("enter your seat number : ");
                // scanf("%d",&seat[book].seatnumber);

                seat[book].status = true ;

                printf("seat number %d is booked by %s ",seat[book].seatnumber,seat[book].passanger);
                 
            }

            //1 is free
            //2 is occupied
            break;

            case 3:
            printf("Enter number you want to cancel : ");
            // scanf("%
            // if ()
            break;

            case 4:
            
            printf("Exiting loop ");
            loop = false;
            break;
        }
        //end of display
    }
    

    

}
