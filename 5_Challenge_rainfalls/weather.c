#include <stdio.h>

int main()
{
    float rainfalls[5][12] = { { 1.5, 1.7, 3.0, 2.3, 1.4, 0.9, 1.8, 2.6, 2.1, 0.5, 1.5, 3.1 },
                               { 0.9, 1.5, 1.9, 2.5, 2.4, 1.9, 1.3, 1.2, 1.8, 0.8, 2.2, 2.7 },
                               { 0.9, 1.5, 1.9, 2.5, 2.4, 1.9, 1.3, 1.2, 1.8, 0.8, 2.2, 2.7 },
                               { 2.2, 1.3, 2.8, 3.2, 1.8, 2.0, 1.0, 1.1, 3.0, 1.5, 2.7, 2.1 },
                               { 2.8, 1.0, 3.0, 2.1, 1.3, 2.2, 2.1, 1.5, 3.1, 1.6, 2.5, 1.4 } };

    float totalYear[5] = { 0 };
    float avgAlltime = 0.0f;
    float avgmonthly[12] = { 0 };

    // Find average for each year
    for(int i = 0; i < 5; i++) {
        float yearSum = 0;
        for(int j = 0; j < 12; j++) {
            yearSum += rainfalls[i][j];
            // Pass and store data for each month
            avgmonthly[j] += rainfalls[i][j];
        }
        totalYear[i] = yearSum;
        avgAlltime += yearSum;
    }
    // Find average for 5 years
    avgAlltime = avgAlltime / 5;

    // Find average for each month
    for(int i = 0; i < 12; i++) {
        avgmonthly[i] = avgmonthly[i] / 5;
    }

    // Print data on monitor
    printf("YEAR    RAINFAll(inches)\n");
    for(int i = 0; i < 5; i++) {
        printf("%d      %.1f\n", 2019 + i, totalYear[i]);
    };
    printf("\n\nThe yearly average is: %.2f\n", avgAlltime);
    printf("\nMONTHLY AVARAGE\n");
    printf("\njan\tfeb\tmar\tapr\tmay\tjun\tjul\taug\tsen\toct\tnov\tdec\n");
    for(int i = 0; i < 12; i++) {
        printf("%.2f\t", avgmonthly[i]);
    }

    return 0;
}
