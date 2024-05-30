#include <stdio.h>
#include <string.h>

struct Movie {
    char movie_name[100]; 
    int duration;
    char category[50];     
    
};

void getmoviedetails();
void getcircledetails();
void CalculateTicketCost(struct Movie m, char circle[]);

int main() {
    struct Movie m;
    char circle_details[100];

    printf("Enter the name of the movie: ");
    scanf("%s", m.movie_name);

    printf("Enter the duration of the movie: ");
    scanf("%d", &m.duration);

    printf("Enter the category of the movie: ");
    scanf("%s", m.category);

  

    // printf("The details of the movie saved successfully.\n");
   
   

    printf("Enter the circle details: ");
    scanf("%s", circle_details);

    printf("Circle Details: %s\n", circle_details);

    CalculateTicketCost(m, circle_details);

    return 0;
}

void CalculateTicketCost(struct Movie m, char circle[]) {
    if (strcmp(circle, "gold") == 0 && strcmp(m.category, "2d") == 0) {
    printf("Movie Name: %s\n", m.movie_name);
    printf("Duration: %d\n", m.duration);
    printf("Category: %s\n", m.category);
    printf("Ticket cost is Rs. 300\n");
   
    } else if (strcmp(circle, "gold") == 0 && strcmp(m.category, "3d") == 0) {
    printf("Movie Name: %s\n", m.movie_name);
    printf("Duration: %d\n", m.duration);
    printf("Category: %s\n", m.category);
    printf("Ticket cost is Rs. 200\n");
        printf("Ticket cost is Rs. 500\n");
    } else if (strcmp(circle, "silver") == 0 && strcmp(m.category, "2d") == 0) {
            printf("Movie Name: %s\n", m.movie_name);
    printf("Duration: %d\n", m.duration);
    printf("Category: %s\n", m.category);
    printf("Ticket cost is Rs. 200\n");
        printf("Ticket cost is Rs. 150\n");
    } else if (strcmp(circle, "silver") == 0 && strcmp(m.category, "3d") == 0) {
            printf("Movie Name: %s\n", m.movie_name);
    printf("Duration: %d\n", m.duration);
    printf("Category: %s\n", m.category);
    printf("Ticket cost is Rs. 200\n");
        printf("Ticket cost is Rs. 400\n");
    } else {
        printf("Invalid input\n");
    }
}
