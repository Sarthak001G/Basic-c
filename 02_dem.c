#include <stdio.h>
#include <math.h>

// Constants
const double h = 6.62607e-34;    // Planck's constant (Joule·s)
const double me = 9.1093837e-31; // Electron mass (kg)
const double conversion_factor = 6.242e+18; // Joules to eV

// Function to calculate energy levels
double En(int n, double L, double m) {
    return (h * h / (m * 8)) * (1e10 * 1e10) * conversion_factor * (pow((double)n / L, 2));
}

int main() {
    double L1, L2, max_energy;
    int nmax1, nmax2;

    // Input: Box lengths and number of levels
    printf("To see how the energy levels change for boxes of different lengths:\n");
    printf("Enter the value for L for the first box (in Angstroms): ");
    scanf("%lf", &L1);
    printf("Enter the number of levels to plot for the first box: ");
    scanf("%d", &nmax1);
    printf("Enter the value for L for the second box (in Angstroms): ");
    scanf("%lf", &L2);
    printf("Enter the number of levels to plot for the second box: ");
    scanf("%d", &nmax2);

    // File for storing energy levels for gnuplot
    FILE *file1 = fopen("energy_levels_box1.txt", "w");
    FILE *file2 = fopen("energy_levels_box2.txt", "w");

    // Calculate energy levels for the first box
    for (int n = 1; n <= nmax1; ++n) {
        double energy = En(n, L1, me);
        fprintf(file1, "%d %.6f\n", n, energy);
    }
    fclose(file1);

    // Calculate energy levels for the second box
    for (int n = 1; n <= nmax2; ++n) {
        double energy = En(n, L2, me);
        fprintf(file2, "%d %.6f\n", n, energy);
    }
    fclose(file2);

    // Generate gnuplot script
    FILE *gnuplot = fopen("plot_script.gp", "w");
    fprintf(gnuplot,
            "set terminal png size 800,1200\n"
            "set output 'energy_levels.png'\n"
            "set ylabel 'Energy (eV)'\n"
            "set xlabel 'Quantum Number (n)'\n"
            "set title 'Energy Levels for a Particle in a 1D Box'\n"
            "set grid\n"
            "plot 'energy_levels_box1.txt' using 1:2 with linespoints title 'L = %.2f Å (Box 1)' lc rgb 'red', \\\n"
            "     'energy_levels_box2.txt' using 1:2 with linespoints title 'L = %.2f Å (Box 2)' lc rgb 'blue'\n",
            L1, L2);
    fclose(gnuplot);

    // Instructions for the user
    printf("\nData has been saved to 'energy_levels_box1.txt' and 'energy_levels_box2.txt'.\n");
    printf("Run the following command to generate the plot:\n");
    printf("gnuplot plot_script.gp\n");
    printf("The output plot will be saved as 'energy_levels.png'.\n");

    return 0;
}
