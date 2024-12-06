#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RESERVATIONS 50
#define MAX_GUEST_NAME_LENGTH 100
#define RESERVATION_FILE "reservations.txt"

typedef struct
{
    char guestName[MAX_GUEST_NAME_LENGTH];
    int roomNumber;
    char checkInDate[11];
    char checkOutDate[11];
    char reservationStatus[20];
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int reservationCount = 0;
void payment()
{
    system("cls");
    char name[20];
    int number[15];
    int NID[20];
    int a,b,j,k,c;
    printf("\n\t\t\t=========================\n");
    char check[]="        Check-Out    ";
    printf("\t\t\t| ");
    int l=strlen(check);
    for(int i=0; i<l; i++)
    {
        printf("%c",check[i]);
        usleep(100000);
    }
    printf(" |\n");
    printf("\t\t\t=========================\n");

    printf("\n\tEnter Your Name:");
    scanf("%s",name);
    printf("\tEnter Your Number: ");
    scanf("%d",&number);
    printf("\tEnter Your NID Number: ");
    scanf("%d",&NID);
B :
    printf("\n\t1.Single Bed\n\t2.Double Bed\n\tSelect your Room Package: ");
    scanf("%d",&a);
    if(a==1 || a==2)
    {
        printf("\tRoom Package:%d \n",a);
    }
    else
    {
        printf("Invalid input.Try Again...\n");
        goto B;  //line 53
    }
    if(a==1)
    {
        j=300;
    }
    else if(a==2)
    {
        j=500;
    }
C :
    printf("\tSelect Wifi Package (5MBps 10MBps 20 MBps): ");
    scanf("%d",&b);
    if(b==5 || b==10 || b==20)
    {
        printf("\tWifi Package:%d MBps \n",b);
    }
    else
    {
        printf("Invalid input.Try Again...\n");
        goto C;  //line 66
    }
    int n;
    printf("\tHow Many Days You stay : ");
    scanf("%d",&n);
    if(b==5)
    {
        k=200;
    }
    else if(b==10)
    {
        k=500;
    }
    else
    {
        k=1000;
    }

    printf("\n\n");
    char o[]="\t\t# Thanks Your Information..... #";
    printf("\t\t===============================\n");
    int d=strlen(o);
    for(int i=0; i<d; i++)
    {
        printf("%c",o[i]);
        usleep(100000);
    }
    printf("\n\t\t==============================");
    system("cls");
    printf("\n\n\n\n\n\t\t\t\<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("\t\t\t");
    char p[]="<PLEASE WAIT YOUR BILL...>";
    int f=strlen(p);
    for(int i=0; i<f; i++)
    {
        printf("%c",p[i]);
        usleep(100000);
    }
    printf("\n\t\t\t\<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    for(int i=0; i<101; i++)
    {
        printf("\n\n\n\n\t\t\t");
        printf("Processing ");
        printf("%d%%",i);
        usleep(10000);
        system("cls");
    }
    printf("\t\t\t-----------------\n");
    printf("\t\t\t| Money Receipt |\n");
    printf("\t\t\t-----------------\n");
    printf("\t        ------------------------------------------------------------------\n");
    printf("\t\t| Name   : %s",name);
    printf("\n\t        |----------------------------------------------------------------|\n");
    printf("\t        ------------------------------------------------------------------\n");
    printf("\t\t| Number : %d",number);
    printf("\n\t        |----------------------------------------------------------------|\n");
    printf("\t        ------------------------------------------------------------------\n");
    printf("\t\t| NID   : %d",NID);
    printf("\n\t        |----------------------------------------------------------------|\n");
    printf("\t        ------------------------------------------------------------------\n");
    printf("\t\t| How days : %d ",n);
    printf("\n\t        |----------------------------------------------------------------|\n");
    int RB=j*n;
    printf("\t        ------------------------------------------------------------------\n");
    printf("\t\t| Room Bill   : %d TK",RB);
    printf("\n\t        |----------------------------------------------------------------|\n");
    printf("\t        ------------------------------------------------------------------\n");
    printf("\t\t| Wifi Bill  : %d TK",k);
    printf("\n\t        |----------------------------------------------------------------|\n");
    int SB=500*n;
    printf("\t        ------------------------------------------------------------------\n");
    printf("\t\t| Spa Bill    : %d TK",SB);
    printf("\n\t        |----------------------------------------------------------------|\n");
    int SCB=500*n;
    printf("\t        ------------------------------------------------------------------\n");
    printf("\t\t|Service Charge : %d Tk",SCB);
    printf("\n\t        |----------------------------------------------------------------|\n");
    printf("\t        ------------------------------------------------------------------\n");
    int PB=200*n;
    printf("\t\t| Parking Charge : %d TK",PB);
    printf("\n\t        |----------------------------------------------------------------|\n");
    c=RB+SB+SCB+PB+k;
    system("cls");
                char z[]="| $ Your Total payment = ";
                printf("\n\t\t\t---------------------------------\n\t\t\t");
                int r=strlen(z);
                for(int i=0; i<r; i++)
                {
                    printf("%c",z[i]);
                    usleep(10000);
                }
                printf("%d $    |",c);
                printf("\n\t\t\t---------------------------------\n\t\t\t");
                char t[]="| Thank you again for visiting. We hope you have safe travels. |";
                int w=strlen(t);
                printf("\n\t\t\t----------------------------------------------------------------\n\t\t\t");
                for(int i=0; i<w; i++)
                {
                    printf("%c",t[i]);
                    usleep(10000);
                }
                printf("\n\t\t\t----------------------------------------------------------------");
}
void services()
{
    printf("\n\t\t\t---------------------\n\t\t\t");
    char s[]="| OUR SERVICES LIST |";
    int l=strlen(s);
    for(int i=0; i<l; i++)
    {
        printf("%c",s[i]);
        usleep(100000);
    }
    printf("\n\t\t\t---------------------\n");
    printf("\n\t  1.ROOM-\n\t\t\t1.Single Bed=300TK\n\t\t\t2.Double Bed=500TK");
    printf("\n\t  2.Wifi Packages-\n\t\t\t1.5MBps-200TK\n\t\t\t2.10MBps-500Tk\n\t\t\t3.20MBps-1000TK");
    printf("\n\n\t  3.Parking Charge-200TK(per Day)");
    printf("\n\n\t  4.Spa-500TK");
    printf("\n\n\t  5.Service Charge-500TK(per day)\n");
}
void loadReservations()
{
    FILE *file = fopen(RESERVATION_FILE, "r");
    if (file == NULL)
    {
        printf("No existing reservations found.\n");
        return;
    }

    while (fscanf(file, "%99[^,],%d,%10s,%10s,%19[^\n]\n", reservations[reservationCount].guestName,
                  &reservations[reservationCount].roomNumber,
                  reservations[reservationCount].checkInDate,
                  reservations[reservationCount].checkOutDate,
                  reservations[reservationCount].reservationStatus) == 5)
    {
        reservationCount++;
    }

    fclose(file);
}

void saveReservations()
{
    system("cls");
    FILE *file = fopen(RESERVATION_FILE, "w");
    if (file == NULL)
    {
        printf("Error opening file for saving reservations.\n");
        return;
    }

    for (int i = 0; i < reservationCount; i++)
    {
        fprintf(file, "%s,%d,%s,%s,%s\n", reservations[i].guestName, reservations[i].roomNumber,
                reservations[i].checkInDate, reservations[i].checkOutDate, reservations[i].reservationStatus);
    }

    fclose(file);
}

void showRoomStatus()
{
    system("cls");
    printf("\t\tRoom List (Booked or Not):\n");
    printf("\t\t---------------------------\n");
    for (int i = 0; i < 20; i++)    // Assuming we have 20 rooms (can adjust as needed)
    {
        int booked = 0;
        for (int j = 0; j < reservationCount; j++)
        {
            if (reservations[j].roomNumber == i + 1)
            {
                booked = 1;
                break;
            }
        }
        if (booked)
            printf("Room %d: Booked\n", i + 1);
        else
            printf("Room %d: Available\n", i + 1);
    }
    printf("\n\n\t\tPress any key to go to main menu admin...");
    getch();
}

int isRoomAvailable(int roomNumber)
{
    system("cls");

    for (int i = 0; i < reservationCount; i++)
    {
        if (reservations[i].roomNumber == roomNumber)
        {
            return 0;  // Room is already booked
        }
    }
    return 1;  // Room is available
}

void addReservation()
{
    printf("\n\t\t\t=========================\n");
    char book[]="Reserve Your Paradise";
    printf("\t\t\t| ");
    int l=strlen(book);
    for(int i=0; i<l; i++)
    {
        printf("%c",book[i]);
        usleep(100000);
    }
    printf(" |\n");
    printf("\t\t\t=========================\n");

    if (reservationCount >= MAX_RESERVATIONS)
    {
        printf("Cannot add more reservations. Reservation limit reached.\n");
        return;
    }

    Reservation newReservation;
    printf("\tEnter Your name: ");
    getchar();
    fgets(newReservation.guestName, sizeof(newReservation.guestName), stdin);
    newReservation.guestName[strcspn(newReservation.guestName, "\n")] = 0;

    int roomNumber;
    printf("\tEnter room number: ");
    scanf("%d", &roomNumber);

    if (!isRoomAvailable(roomNumber))
    {
        printf("Room %d is already booked. Do you want to book it for another date? (Y/N): ", roomNumber);
        char choice;
        getchar(); // to consume the leftover newline character
        scanf("%c", &choice);

        if (choice == 'N' || choice == 'n')
        {
            printf("\tReservation not added.\n");
            return;
        }
    }

    printf("\tEnter check-in date (YYYY-MM-DD): ");
    scanf("%s", newReservation.checkInDate);

    printf("\tEnter check-out date (YYYY-MM-DD): ");
    scanf("%s", newReservation.checkOutDate);

    printf("\tEnter reservation status (Confirmed/Pending/Cancelled): ");
    scanf("%s", newReservation.reservationStatus);

    newReservation.roomNumber = roomNumber;
    reservations[reservationCount++] = newReservation;
    printf("\n\t\t-------------------------------");
    printf("\n\t\t|Reservation added successfully.|\n");
    printf("\t\t-------------------------------");

}

void displayReservations()
{
    system("cls");

    if (reservationCount == 0)
    {
        printf("\t-----------------------------");
        printf("\n\t| No reservations available.|\n");
        printf("\t-----------------------------\n");

        return;
    }
      printf("\t-------------------\n");
    printf("\n\t|Reservations list|\n");
      printf("\t-------------------\n");
    for (int i = 0; i < reservationCount; i++)
    {
        printf("Guest Name: %s\n", reservations[i].guestName);
        printf("Room Number: %d\n", reservations[i].roomNumber);
        printf("Check-In Date: %s\n", reservations[i].checkInDate);
        printf("Check-Out Date: %s\n", reservations[i].checkOutDate);
        printf("Status: %s\n", reservations[i].reservationStatus);
        printf("---------------------------------\n");
    }
}

void searchReservation()
{
    system("cls");
    char searchKey[50];
    int isNumber = 1;

    printf("\n\tEnter guest name or room number to search: ");
    getchar();
    fgets(searchKey, sizeof(searchKey), stdin);
    searchKey[strcspn(searchKey, "\n")] = 0;

    for (int i = 0; searchKey[i] != '\0'; i++)
    {
        if (searchKey[i] < '0' || searchKey[i] > '9')
        {
            isNumber = 0;
            break;
        }
    }

    int found = 0;
    for (int i = 0; i < reservationCount; i++)
    {
        if ((isNumber && reservations[i].roomNumber == atoi(searchKey)) ||
                (!isNumber && strcmp(searchKey, reservations[i].guestName) == 0))
        {
            printf("\nReservation found:\n");
            printf("\t\tGuest Name: %s\n", reservations[i].guestName);
            printf("\t\tRoom Number: %d\n", reservations[i].roomNumber);
            printf("\t\tCheck-In Date: %s\n", reservations[i].checkInDate);
            printf("\t\tCheck-Out Date: %s\n", reservations[i].checkOutDate);
            printf("\t\tStatus: %s\n", reservations[i].reservationStatus);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\n\tNo reservation found for the given search key.\n");
    }
}

void deleteReservation()
{
    system("cls");
    int roomNumber;
    printf("\tEnter room number to delete reservation: ");
    scanf("%d", &roomNumber);

    int found = 0;
    for (int i = 0; i < reservationCount; i++)
    {
        if (reservations[i].roomNumber == roomNumber)
        {
            for (int j = i; j < reservationCount - 1; j++)
            {
                reservations[j] = reservations[j + 1];
            }
            reservationCount--;
            found = 1;
            printf("\n\t-------------------------------------------------");
            printf("\n\t| Reservation for room %d deleted successfully. |\n", roomNumber);
            printf("  \t-------------------------------------------------");
            printf("\n\n\t\tPress any key to go to main menu admin...");
                    getch();
            saveReservations();
            break;
        }
    }

    if (!found)
    {
        printf("\n\t------------------------------------");
        printf("\n\t| No reservation found for room %d. |\n", roomNumber);
        printf("\t------------------------------------");
 printf("\n\t\tPress any key to go to main menu admin...");
                    getch();
    }
}
void design()
{
    printf("\n\n\t\t\t");
    for(int i=0; i<47; i++)
    {
        printf("*");
        usleep(1000);
    }
    printf("\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*\t   ");
    for(int i=0; i<25; i++)
    {
        printf("-");
        usleep(1000);
    }
    printf("\t      *");
    printf("\n");
    printf("    \t\t\t*          ");
    char b[]="| Welcome To DSC RESORT |";
    int l=strlen(b);
    for(int i=0; i<l; i++)
    {
        printf("%c",b[i]);
        usleep(100000);
    }
    printf("\t      *\n");


    printf("    \t\t\t*\t   ");
    for(int i=0; i<25; i++)
    {
        printf("-");
        usleep(1000);
    }
    printf("\t      *");
    printf("\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*                                             *\n");
    printf("\t\t\t");
    for(int i=0; i<47; i++)
    {
        printf("*");
        usleep(1000);
    }
    printf("\n\n");
    for(int i=1; i<118; i++)
    {
        printf("-");
        usleep(1000);
    }
    printf("\n\n");
    char a[]="| Login to Start Your Next Adventure |";
    int q=strlen(a);
    printf("\t\t\t--------------------------------------");
    printf("\n\t\t\t");
    for(int i=0; i<q; i++)
    {
        printf("%c",a[i]);
        usleep(10000);

    }
    printf("\n\t\t\t``````````````````````````````````````\n");
}
int main()
{
    loadReservations();
Y :
    design();
    int a,c=1;
    printf("\t\t1.Admin\n");
    printf("\t\t2.Users\n");
    printf("\t\tEnter Your Choice : ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
    {
        int pass[10];
        int passfile[10];
        FILE *password;
        password=fopen("pass.txt","r");
X:
        printf("\t\tEnter Your password: ");
        scanf("%s",pass);
        fscanf(password,"%s",passfile);
        if(strcmp(passfile,pass)==0)
        {
            for(int i=1; i<115; i++)
            {
                printf("~");
                usleep(1000);
            }
            int choice;
            do
            {
A :
                system("cls");
                printf("\n\t\t\t\t---------------");
                printf("\n\t\t\t\t|Welcome Admin|");
                printf("\n\t\t\t\t---------------\n");
                printf("\t1. Add Reservation\n");
                printf("\t2. Display Reservations\n");
                printf("\t3. Search Reservation\n");
                printf("\t4. Delete Reservation\n");
                printf("\t5. Show Room Availability\n");
                printf("\t6. Exit\n");
                printf("\tEnter your choice: ");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                     system("cls");
                    addReservation();
                 printf("\n\n\tPress any key to go to main menu admin...");
                    getch();
                    goto A;
                case 2:
                    displayReservations();
                    printf("\n\tPress any key to go to main menu admin...");
                    getch();
                    goto A;
                case 3:
                    system("cls");

                    searchReservation();
                    printf("\n\t\tPress any key to go to main menu admin...");
                    getch();
                    goto A;
                case 4:
                    deleteReservation();

                    goto A;
                case 5:
                    showRoomStatus();
                    goto A;
                case 6:
                    system("cls");
                    goto Y;
                default:
                    printf("Invalid choice, please try again.\n");
                }
            }
            while (choice != 6);
        }
        else
        {
            printf("\n\t\tWrong password.Access Denied\n\t\tTry again....\n");
            c++;
            if(c==4)break;
            goto X;
        }
    }
    case 2:
   U :
        system("cls");
        printf("\t\t\t---------------------------------\n");
        printf("\t\t\t| Good afternoon,welcome to DSC |\n");
        printf("\t\t\t---------------------------------\n");
         printf("\t1.View available rooms\n");
        printf("\t2.Request Booking of room\n");
        printf("\t3.View Our Services\n");
        printf("\t4.Cancel Booking\n");
        printf("\t5.Check-Out\n");
        printf("\t6.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
        showRoomStatus();
                goto U;
        case 2:
           system("cls");
                    addReservation();
                 printf("\n\n\tPress any key to go to main menu admin...");
                    getch();
                    goto U;
        case 3:

            system("cls");
            services();
            char t[5];
F:
            printf("\n   Do you want to go to User menu?(y/n): ");
            scanf("%s",&t);
            if(strcmp(t,"n")==0)
            {
                return 0;
            }
            else if(strcmp(t,"y")==0)
                goto U;
            else
            {
                printf("\nWrong Entry....Try Again...\n\n");
                goto F;
        }
        case 4:
        deleteReservation();
        goto U;
        case 5:
        payment();
                char h[2];
H :
                printf("\nDo you want to go to main menu?(y/n): ");
                scanf("%c",&h);
                if(strcmp(h,"n")==0)
                {
                    return 0;
                }
                else if(strcmp(h,"y")==0)
                {
                    system("cls");
                    goto Y;
                }
                else
                {
                    printf("\nWrong Entry....Try Again...\n\n");
                    goto H;
                }
        case 6:
               system("cls");
                    goto Y;
           default:
        printf("Invalid choice, please try again.\n");
        goto U;
         }

        default:
        printf("Invalid choice, please try again.\n");
    }
    return 0;
}
