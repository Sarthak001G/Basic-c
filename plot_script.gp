set terminal png size 800,1200
set output 'energy_levels.png'
set ylabel 'Energy (eV)'
set xlabel 'Quantum Number (n)'
set title 'Energy Levels for a Particle in a 1D Box'
set grid
plot 'energy_levels_box1.txt' using 1:2 with linespoints title 'L = 10.00 Å (Box 1)' lc rgb 'red', \
     'energy_levels_box2.txt' using 1:2 with linespoints title 'L = 10.00 Å (Box 2)' lc rgb 'blue'
