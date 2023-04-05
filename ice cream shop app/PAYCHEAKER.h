#ifndef PAYCHEAKER_H_INCLUDED
#define PAYCHEAKER_H_INCLUDED

char paycheaker()
{
    printf("Forward the Mpesa message");
    char message[300];
    gets((char*)message);

    FILE*kk;
    kk=fopen("message","w");
    fprintf(kk,"%s",message);
    fclose(kk);

    printf("%s",message);


}

#endif // PAYCHEAKER_H_INCLUDED
