#include<stdio.h>
void main()
{
    float sun,mon,tue,wed,thu,fri,sat,avg;
    
    printf("Welcome to weather forcasting!\n");
    
    //input from user
    printf("Please Enter temperature of 7 days of week in degree celcius:\n");
    printf("Temperature of Sunday=");
    scanf("%f",&sun);
    printf("Temperature of Monday=");
    scanf("%f",&mon);
    printf("Temperature of Tuesday=");
    scanf("%f",&tue);
    printf("Temperature of Wednesday=");
    scanf("%f",&wed);
    printf("Temperature of Thursday=");
    scanf("%f",&thu);
    printf("Temperature of Friday=");
    scanf("%f",&fri);
    printf("Temperature of Saturday=");
    scanf("%f",&sat);

    //Print average temperature
    avg=(sun+mon+tue+wed+thu+fri+sat)/7; 
    printf("Average Temperature of a week is:%f\n",avg);

    //Weather condition
    printf("Condition of weather is: ");
     if(avg<0)
     {
        printf("Freezing Weather.");
     }     
     else if(avg<10) 
     { 
        printf("Very Cold Weather.");
     }
     else if(avg<30)
     {
        printf("Cold Weather.");
     }
     else if(avg<35)
     {
        printf("Normal Weather.");
     }
     else if(avg<45)
     {
        printf("Hot Weather.");
     }
     else
     {
        printf("Very Hot Weather.");
     }  

}
