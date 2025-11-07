#include <stdio.h>
#include <string.h>

void bookFlightseat() {
    char seats[6][4];             
    char names[6][4][20];         
    int i, j;
    char seat[3];
    int row, col;
    int n;

    
    for (i = 0; i < 6; i++)
        for (j = 0; j < 4; j++) {
            seats[i][j] = 'A';
            strcpy(names[i][j], ""); 
        }

    
    printf("How many passengers? ");
    scanf("%d", &n);

    for (int p = 0; p < n; p++) {
        printf("\nPassenger %d\n", p + 1);

        
        printf("\nSeats (A = Available, X = Booked):\n");
        for (i = 0; i < 6; i++) {
            printf("%c ", 'A' + i);
            for (j = 0; j < 4; j++) {
                if (j == 2) printf("   ");
                printf("%d[%c] ", j + 1, seats[i][j]);
            }
            printf("\n");
        }

        printf("\nEnter seat (e.g., B2): ");
        scanf("%s", seat);

        row = seat[0] - 'A';
        col = seat[1] - '1';

        if (row >= 0 && row < 6 && col >= 0 && col < 4) {
            if (seats[row][col] == 'A') {
                printf("Enter passenger name: ");
                scanf("%s", names[row][col]);
                seats[row][col] = 'X';
                printf("Seat %c%d booked for %s\n", 'A' + row, col + 1, names[row][col]);
            } else {
                printf("Seat %c%d is already booked.\n", 'A' + row, col + 1);
                p--; 
            }
        } else {
            printf("Invalid seat. Try again.\n");
            p--; 
        }
    }

    
    printf("\nFinal Booking Summary:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            if (seats[i][j] == 'X')
                printf("Seat %c%d - %s\n", 'A' + i, j + 1, names[i][j]);
        }
    }
}
//----------------------------------------------------------
void del_hyd() {
    int flight[7]={101, 102,103,104,105,106,107};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:101:6E203:Departs at 06:31, arrives at 08:42\n");
    printf("code:102:6E2255:Departs at 07:38, arrives at 9:48\n");
    printf("code:103:6E6601:Departs at 13:37, arrives at 15:40\n");
    printf("code:104:6E6212:Departs at 15:23, arrives at 17:45\n");
    printf("code:105:6E5605:Departs at 18:43, arrives at 20:53\n");
    printf("code:106:6E382:Departs at 20:31, arrives at 22:46\n");
    printf("code:107:6E494:Departs at 21:59, arrives at 00:06\n");

    int f_code;
    printf("enter the flight code  ");
    scanf ("%d", &f_code);

    for (int i = 0; i < 7; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void del_ben() {
    int flight[6]={201, 202,203,204,205,206};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:201:6E6612:Departs at 05:45, arrives at 08:30\n");
    printf("code:202:6E6403:Departs at 07:00, arrives at 09:45\n");
    printf("code:203:6E308:Departs at 08:15, arrives at 11:00\n");
    printf("code:204:6E6608:Departs at 09:30, arrives at 12:15\n");
    printf("code:205:6E173:Departs at 10:35, arrives at 13:20\n");
    printf("code:206:6E2434:Departs at 11:45, arrives at 14:30\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void del_kol() {
    int flight[6]={301, 302,303,304,305,306};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:301:6E282:Departs at 04:50, arrives at 07:05\n");
    printf("code:302:6E861:Departs at 05:45, arrives at 08:00\n");
    printf("code:303:6E219:Departs at 06:50, arrives at 09:05\n");
    printf("code:304:6E377:Departs at 07:50, arrives at 10:05\n");
    printf("code:305:6E921:Departs at 13:50, arrives at 16:00\n");
    printf("code:306:6E283:Departs at 17:00, arrives at 19:20\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void del_mum() {
    int flight[6]={401, 402,403,404,405,406};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:401:6E171:Departs at 04:55, arrives at 07:10\n");
    printf("code:402:6E993:Departs at 06:40, arrives at 08:50\n");
    printf("code:403:6E167:Departs at 07:30, arrives at 09:40\n");
    printf("code:404:6E3175:Departs at 13:00, arrives at 15:10\n");
    printf("code:405:6E189:Departs at 15:00, arrives at 17:10\n");
    printf("code:406:6E129:Departs at 17:30, arrives at 19:45\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void hyd_del() {
    int flight[6]={101, 102,103,104,105,106};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:101:6E6031:Departs at 12:00, arrives at 14:25\n");
    printf("code:102:6E5605:Departs at 16:25, arrives at 18:35\n");
    printf("code:103:6E6605:Departs at 16:15, arrives at 18:30\n");
    printf("code:104:6E2324:Departs at 17:15, arrives at 19:40\n");
    printf("code:105:6E6146:Departs at 17:15, arrives at 19:30\n");
    printf("code:106:6E771:Departs at 23:35, arrives at 01:50\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void hyd_ben() {
    int flight[6]={201, 202,203,204,205,206};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:201:6E202:Departs at 05:30, arrives at 07:00\n");
    printf("code:202:6E204:Departs at 08:00, arrives at 09:30\n");
    printf("code:203:6E206:Departs at 11:30, arrives at 13:00\n");
    printf("code:204:6E208:Departs at 14:00, arrives at 15:30\n");
    printf("code:205:6E210:Departs at 17:30, arrives at 19:00\n");
    printf("code:206:6E212:Departs at 20:00, arrives at 21:30\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void hyd_kol() {
    int flight[6]={301, 302,303,304,305,306};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:301:6E664:Departs at 03:00, arrives at 05:00\n");
    printf("code:302:6E376:Departs at 06:30, arrives at 08:30\n");
    printf("code:303:6E223:Departs at 07:00, arrives at 09:20\n");
    printf("code:304:6E6907:Departs at 09:30, arrives at 11:50\n");
    printf("code:305:6E6494:Departs at 21:25, arrives at 23:35\n");
    printf("code:306:6E944:Departs at 21:05, arrives at 23:15\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void hyd_mum() {
    int flight[6]={401, 402,403,404,405,406};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:401:6E6699:Departs at 08:00, arrives at 09:35\n");
    printf("code:402:6E5099:Departs at 09:00, arrives at 10:30\n");
    printf("code:403:6E773:Departs at 09:50, arrives at 11:25\n");
    printf("code:404:6E5259:Departs at 11:15, arrives at 12:45\n");
    printf("code:405:6E5257:Departs at 12:45, arrives at 14:15\n");
    printf("code:406:6E5163:Departs at 09:30, arrives at 11:00\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void ben_del() {
    int flight[6]={101, 102,103,104,105,106};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:101:6E501:Departs at 06:00, arrives at 08:30\n");
    printf("code:102:6E502:Departs at 09:00, arrives at 11:30\n");
    printf("code:103:6E503:Departs at 12:00, arrives at 14:30\n");
    printf("code:104:6E504:Departs at 15:00, arrives at 17:30\n");
    printf("code:105:6E505:Departs at 18:00, arrives at 20:30\n");
    printf("code:106:6E506:Departs at 21:00, arrives at 23:30\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void ben_hyd() {
    int flight[6]={201, 202,203,204,205,206};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:201:6E601:Departs at 05:30, arrives at 07:00\n");
    printf("code:202:6E602:Departs at 08:00, arrives at 09:30\n");
    printf("code:203:6E603:Departs at 11:30, arrives at 13:00\n");
    printf("code:204:6E604:Departs at 14:00, arrives at 15:30\n");
    printf("code:205:6E605:Departs at 17:30, arrives at 19:00\n");
    printf("code:206:6E606:Departs at 20:00, arrives at 21:30\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void ben_kol() {
    int flight[6]={301, 302,303,304,305,306};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:301:6E701:Departs at 06:00, arrives at 08:30\n");
    printf("code:302:6E702:Departs at 09:00, arrives at 11:30\n");
    printf("code:303:6E703:Departs at 12:00, arrives at 14:30\n");
    printf("code:304:6E704:Departs at 15:00, arrives at 17:30\n");
    printf("code:305:6E705:Departs at 18:00, arrives at 20:30\n");
    printf("code:306:6E706:Departs at 21:00, arrives at 23:30\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void ben_mum() {
    int flight[6]={401,402, 403,404,405,406};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:401:6E801:Departs at 05:45, arrives at 07:15\n");
    printf("code:402:6E802:Departs at 08:15, arrives at 09:45\n");
    printf("code:403:6E803:Departs at 11:45, arrives at 13:15\n");
    printf("code:404:6E804:Departs at 14:15, arrives at 15:45\n");
    printf("code:405:6E805:Departs at 17:45, arrives at 19:15\n");
    printf("code:406:6E806:Departs at 20:15, arrives at 21:45\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void kol_del() {
    int flight[6]={101, 102,103,104,105,106};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:101:6E901:Departs at 06:00, arrives at 08:30\n");
    printf("code:102:6E902:Departs at 09:00, arrives at 11:30\n");
    printf("code:103:6E903:Departs at 12:00, arrives at 14:30\n");
    printf("code:104:6E904:Departs at 15:00, arrives at 17:30\n");
    printf("code:105:6E905:Departs at 18:00, arrives at 20:30\n");
    printf("code:106:6E906:Departs at 21:00, arrives at 23:30\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
void kol_hyd() {
    int flight[6]={201, 202,203,204,205,206};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:201:6E1001:Departs at 05:30, arrives at 07:30\n");
    printf("code:202:6E1002:Departs at 08:00, arrives at 10:00\n");
    printf("code:203:6E1003:Departs at 11:30, arrives at 13:30\n");
    printf("code:204:6E1004:Departs at 14:00, arrives at 16:00\n");
    printf("code:205:6E1005:Departs at 17:30, arrives at 19:30\n");
    printf("code:206:6E1006:Departs at 20:00, arrives at 22:00\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void kol_ben() {
    int flight[6]={301, 302,303,304,305 , 306};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:301:6E1101:Departs at 06:00, arrives at 08:30\n");
    printf("code:302:6E1102:Departs at 09:00, arrives at 11:30\n");
    printf("code:303:6E1103:Departs at 12:00, arrives at 14:30\n");
    printf("code:304:6E1104:Departs at 15:00, arrives at 17:30\n");
    printf("code:305:6E1105:Departs at 18:00, arrives at 20:30\n");
    printf("code:306:6E1106:Departs at 21:00, arrives at 23:30\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return;
}
//------------------------------------------------------------------
void kol_mum() {
    int flight[6]={401, 402,403,404,405,406};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:401:6E1201:Departs at 05:45, arrives at 08:15\n");
    printf("code:402:6E1202:Departs at 08:15, arrives at 10:45\n");
    printf("code:403:6E1203:Departs at 11:45, arrives at 14:15\n");
    printf("code:404:6E1204:Departs at 14:15, arrives at 16:45\n");
    printf("code:405:6E1205:Departs at 17:45, arrives at 20:15\n");
    printf("code:406:6E1206:Departs at 20:15, arrives at 22:45\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void mum_del() {
    int flight[6]={101, 102,103,104,105,106};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:101:6E1301:Departs at 06:00, arrives at 08:15\n");
    printf("code:102:6E1302:Departs at 08:30, arrives at 10:45\n");
    printf("code:103:6E1303:Departs at 11:00, arrives at 13:15\n");
    printf("code:104:6E1304:Departs at 14:00, arrives at 16:15\n");
    printf("code:105:6E1305:Departs at 17:00, arrives at 19:15\n");
    printf("code:106:6E1306:Departs at 20:00, arrives at 22:15\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void mum_hyd() {
    int flight[6]={201, 202,203,204,205,206};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:201:6E1401:Departs at 06:30, arrives at 08:00\n");
    printf("code:202:6E1402:Departs at 09:30, arrives at 11:00\n");
    printf("code:203:6E1403:Departs at 12:30, arrives at 14:00\n");
    printf("code:204:6E1404:Departs at 15:30, arrives at 17:00\n");
    printf("code:205:6E1405:Departs at 18:30, arrives at 20:00\n");
    printf("code:206:6E1406:Departs at 21:30, arrives at 23:00\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void mum_ben() {
    int flight[6]={301, 302,303,304,305,306};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:1501:6E1501:Departs at 05:45, arrives at 07:15\n");
    printf("code:1502:6E1502:Departs at 08:45, arrives at 10:15\n");
    printf("code:1503:6E1503:Departs at 11:45, arrives at 13:15\n");
    printf("code:1504:6E1504:Departs at 14:45, arrives at 16:15\n");
    printf("code:1505:6E1505:Departs at 17:45, arrives at 19:15\n");
    printf("code:1506:6E1506:Departs at 20:45, arrives at 22:15\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
void mum_kol() {
    int flight[6]={401, 402,403,404,405,406};
    printf("====WELCOME TO INDIGO FLIGHTS====\n");
    printf("code:1601:6E1601:Departs at 06:00, arrives at 08:45\n");
    printf("code:1602:6E1602:Departs at 09:00, arrives at 11:45\n");
    printf("code:1603:6E1603:Departs at 12:00, arrives at 14:45\n");
    printf("code:1604:6E1604:Departs at 15:00, arrives at 17:45\n");
    printf("code:1605:6E1605:Departs at 18:00, arrives at 20:45\n");
    printf("code:1606:6E1606:Departs at 21:00, arrives at 23:45\n");

    int f_code;
    printf("Enter the flight code: ");
    scanf("%d", &f_code);

    for (int i = 0; i < 6; i++) {
        if (flight[i] == f_code) {
            bookFlightseat();
            return ;
        }
    }

    printf("Invalid flight code.\n");
    return ;
}
//------------------------------------------------------------------
int main() {
    printf("*\n");
    printf("~WELCOME TO AEROGATE~\n");
    printf("*\n");
    printf("CITIES AVAILABLE:\n");
    printf("DELHI\nHYDERABAD\nBENGALURU\nKOLKATA\nMUMBAI\n");

    char dep_city[20];
    char des_city[20];
    int flight[7] = {101, 102, 103, 104, 105,106,107};

    printf("enter the departure place: ");
    scanf("%s", dep_city);
    printf("enter the destination place: ");
    scanf("%s", des_city);

    if ((strcmp(dep_city, "delhi") == 0) && (strcmp(des_city, "hyderabad") == 0)) {
        del_hyd();
    } 
    else if ((strcmp(dep_city, "delhi") == 0) && (strcmp(des_city, "bengaluru") == 0)){
        del_ben();
    }
    else if((strcmp(dep_city, "delhi") == 0) && (strcmp(des_city, "kolkata") == 0)){
         del_kol();
    }
    else if((strcmp(dep_city, "delhi") == 0) && (strcmp(des_city, "mumbai") == 0)){
         del_mum();
    }
    else if((strcmp(dep_city, "hyderabad") == 0) && (strcmp(des_city, "delhi") == 0)){
         hyd_del();
    }
    else if((strcmp(dep_city, "hyderabad") == 0) && (strcmp(des_city, "bengaluru") == 0)){
         hyd_ben();
    }
    else if((strcmp(dep_city, "hyderabad") == 0) && (strcmp(des_city, "kolkata") == 0)){
         hyd_kol();
    }
    else if((strcmp(dep_city, "hyderabad") == 0) && (strcmp(des_city, "mumbai") == 0)){
         hyd_mum();
    }
    else if((strcmp(dep_city, "bengaluru") == 0) && (strcmp(des_city, "delhi") == 0)){
         ben_del();
    }
    else if((strcmp(dep_city, "bengaluru") == 0) && (strcmp(des_city, "hyderabad") == 0)){
         ben_hyd();
    }
    else if((strcmp(dep_city, "bengaluru") == 0) && (strcmp(des_city, "kolkata") == 0)){
         ben_kol();
    }
    else if((strcmp(dep_city, "bengaluru") == 0) && (strcmp(des_city, "mumbai") == 0)){
         ben_mum();
    }
    else if((strcmp(dep_city, "kolkata") == 0) && (strcmp(des_city, "delhi") == 0)){
         kol_del();
    }
    else if((strcmp(dep_city, "kolkata") == 0) && (strcmp(des_city, "hyderabad") == 0)){
         kol_hyd();
    }
    else if((strcmp(dep_city, "kolkata") == 0) && (strcmp(des_city, "bengaluru") == 0)){
         kol_ben();
    }
    else if((strcmp(dep_city, "kolkata") == 0) && (strcmp(des_city, "mumbai") == 0)){
         kol_mum();
    }
    else if((strcmp(dep_city, "mumbai") == 0) && (strcmp(des_city, "delhi") == 0)){
         mum_del();
    }
    else if((strcmp(dep_city, "mumbai") == 0) && (strcmp(des_city, "hyderabad") == 0)){
         mum_hyd();
    }
    else if((strcmp(dep_city, "mumbai") == 0) && (strcmp(des_city, "bengaluru") == 0)){
         mum_ben();
    }
    else if((strcmp(dep_city, "mumbai") == 0) && (strcmp(des_city, "kolkata") == 0)){
         mum_kol();
    }
    return 0;
}