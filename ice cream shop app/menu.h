#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

int security()
 {

    char username[15];
    char password[12];


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);


    if((strcmp(username,"timothyadmn")==0)||(strcmp(username,"sheeadmn")==0))

    {
        if((strcmp(password,"@kinyijr1")==0)||(strcmp(password,"@sheejr1")==0))
        {

        printf("\nWelcome.Login Success!");

        action ();
        }else
        {
    printf("\nwrong password");
        }
    }else
         {
    printf("\nUser doesn't exist");
         }


system("pause");
}




#endif // MENU_H_INCLUDED
