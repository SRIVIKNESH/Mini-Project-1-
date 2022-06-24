#include <stdio.h>
int main(){
int section;
float temp_input,far_input,far_to_cel,cel_input,cel_to_far,dis_input,km_input,km_to_miles,miles_input,miles_to_km,weight_input,kg_input, kg_to_pound,pound_input,pound_to_kg;
printf("Unit Converter\n");
printf("Choose the type of conversion\n");
printf("Press 1 for Temprature conversion\n");
printf("Press 2 for Distance conversion\n");
printf("Press 3 for Weight conversion\n");
scanf("%d",&section);
if(section == 1)
{
    printf("Choose the type of conversion you want to make\n");
    printf("Press 1 for Fahrenheit to Celsius\n");
    printf("Press 2 for Celsius to Fahrenheit\n");
    scanf("%f",&temp_input);
    if(temp_input == 1){
        printf("Enter the Fahrenheit degree: \n");
        scanf("%f",&far_input);
        far_to_cel =  ((far_input-32) * (5.0/9.0));
        printf("Temprature in Celsius: %.2f \n",far_to_cel);
      }
    else{
        printf("Enter the Celsius degree: \n");
        scanf("%f",&cel_input);
        cel_to_far =  ((9.0/5.0)*cel_input + 32);
        printf("Temprature in Fahrenheit: %.2f \n",cel_to_far);
    }
}
else if(section == 2){
    printf("Choose the type of conversion you want to make\n");
    printf("Press 1 for Kilometers to Miles\n");
    printf("Press 2 for Miles to Kilometers\n");
    scanf("%f",&dis_input);
    if(dis_input == 1){
        printf("Enter the distance in Kilometers: \n");
        scanf("%f",&km_input);
        km_to_miles = km_input*0.62137;
        printf("Distance in Miles: %.2f \n",km_to_miles);
    }
    else{
        printf("Enter the distance in Miles: \n");
        scanf("%f",&miles_input);
        miles_to_km = miles_input * 1.60934;
        printf("Distance in Kilometer: %.2f \n",miles_to_km);       
    }
}
else{
    printf("Choose the type of conversion you want to make\n");
    printf("Press 1 for Kilogram to Pounds\n");
    printf("Press 2 for Pounds to Kilogram\n");
    scanf("%f",&weight_input);
    if(weight_input == 1){
        printf("Enter the weight in Kilogram: \n");
        scanf("%f",&kg_input);
        kg_to_pound = kg_input * 2.20462;
        printf("Weight in Pounds is: %.2f \n",kg_to_pound);
    }
    else{
        printf("Enter the weight in Pounds: \n");
        scanf("%f",&pound_input);
        pound_to_kg = pound_input * 0.453592;
        printf("Weight in Kilogram: %.2f",pound_to_kg);
        }
}
}