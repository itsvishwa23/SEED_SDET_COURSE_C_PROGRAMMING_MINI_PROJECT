#include <stdio.h>
#include <string.h>

struct Movie {
    char movie_name[100]; 
    int duration;
    char category[50];     
};

void getmoviedetails(struct Movie*);
void getcircledetails(char[]);
int CalculateTicketCost(struct Movie*, char*);

int main() {
    struct Movie m;
    char circle_details[100];
    int a;
    getmoviedetails(&m);
    getcircledetails(circle_details);
    a=CalculateTicketCost(&m, circle_details);
    printf("%d",a);
    
    return 0;
}

void getmoviedetails(struct Movie *m) {
    printf("Enter the name of the movie: ");
    scanf("%s", m->movie_name);

    printf("Enter the duration of the movie: ");
    scanf("%d", &m->duration);

    printf("Enter the category of the movie: ");
    scanf("%s", m->category);
}

void getcircledetails(char *circle_details) {
    printf("Enter the circle details: ");
    scanf("%s", circle_details);

    printf("Circle Details: %s\n", circle_details);
}
int CalculateTicketCost(struct Movie *m, char *circle) {
    if (strcmp(circle, "gold") == 0 && strcmp(m->category, "2d") == 0) {
        printf("Movie Name: %s\n", m->movie_name);
        printf("Duration: %d\n", m->duration);
        printf("Category: %s\n", m->category);
        printf("Ticket cost is Rs. 300\n");
        return 1;
    } else if (strcmp(circle, "gold") == 0 && strcmp(m->category, "3d") == 0) {
        printf("Movie Name: %s\n", m->movie_name);
        printf("Duration: %d\n", m->duration);
        printf("Category: %s\n", m->category);
        printf("Ticket cost is Rs. 500\n");
        return 1;
    } else if (strcmp(circle, "silver") == 0 && strcmp(m->category, "2d") == 0) {
        printf("Movie Name: %s\n", m->movie_name);
        printf("Duration: %d\n", m->duration);
        printf("Category: %s\n", m->category);
        printf("Ticket cost is Rs. 150\n");
        return 1;
    } else if (strcmp(circle, "silver") == 0 && strcmp(m->category, "3d") == 0) {
        printf("Movie Name: %s\n", m->movie_name);
        printf("Duration: %d\n", m->duration);
        printf("Category: %s\n", m->category);
        printf("Ticket cost is Rs. 400\n");
        return 1;
    } else {
        printf("Invalid input\n");
        return -1;
    }
}
