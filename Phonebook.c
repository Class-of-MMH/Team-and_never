#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_CONTACTS 100
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 20

struct Contact
{
    char name[MAX_NAME_LENGTH];
    char phone[MAX_PHONE_LENGTH];
};
struct Contact phonebook[MAX_CONTACTS];
int num_contacts=0;

void add_contact()
{
    if(num_contacts<MAX_CONTACTS)
    {
        printf("Enter name: ");
        scanf("%s",phonebook[num_contacts].name);
        printf("Enter phone number: ");
        scanf("%s",phonebook[num_contacts].phone);
        num_contacts++;
        printf("Contact added successfully!\n");
    }
    else
        printf("Contact is full!\n");
}
void display_contact()
{
    if(num_contacts==0)
        printf("Contact is empty!\n");
    else
    {
        printf("Contacts:\n");
        for(int i=0; i<num_contacts; i++)
            printf("%d. Name: %s, Phone: %s",i+1,phonebook[i].name,phonebook[i].phone);
    }
}
int main()
{
    int choice=0;
    do
    {
        printf("Phonebook menu:\n");
        printf("1.Add contacts\n");
        printf("2.Display contacts\n");
        printf("3.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            add_contact();
            break;
        case 2:
            display_contact();
            break;
        case 3:
            printf("Exiting phonebook app\n");
        default:
            printf("Invalild choice. Please enter again\n");
        }
    }
    while(choice!=3);
return 0;
}
