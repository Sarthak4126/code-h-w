#include <stdio.h>

int main() {
    double unit_rate, initial_reading, final_reading;

    // Prompt the user to enter the unit rate and meter readings
    printf("Enter the unit rate (per kWh): ");
    scanf("%lf", &unit_rate);

    printf("Enter the initial meter reading: ");
    scanf("%lf", &initial_reading);

    printf("Enter the final meter reading: ");
    scanf("%lf", &final_reading);

    // Calculate the energy consumption
    double energy_consumed = final_reading - initial_reading;

    // Calculate the total bill
    double total_bill = energy_consumed * unit_rate;

    // Display the results
    printf("Energy consumed: %.2lf kWh\n", energy_consumed);
    printf("Total bill: $%.2lf\n", total_bill);

    return 0;
}
