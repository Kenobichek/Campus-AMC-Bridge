#include <iostream>
#include <iomanip>

int main() {
	// The given point
	double Mx, My, Mz;
	std::cin >> Mx >> My >> Mz;

	// The point on the line
	double M1x, M1y, M1z;
	std::cin >> M1x >> M1y >> M1z;

	// The direction vector of the line
	double	Sx, Sy, Sz;
	std::cin >> Sx >> Sy >> Sz;

	double MM1x = M1x - Mx;
	double MM1y = M1y - My;
	double MM1z = M1z - Mz;

	double MM1xS_x = MM1y * Sz - MM1z * Sy;
	double MM1xS_y = MM1x * Sz - MM1z * Sx;
	double MM1xS_z = MM1x * Sy - MM1y * Sx;

	// A real, the distance between the given point and the line.
	double d = (sqrt(pow(MM1xS_x, 2) + pow(MM1xS_y, 2) + pow(MM1xS_z, 2))) / sqrt((pow(Sx, 2) + pow(Sy, 2) + pow(Sz, 2)));

	std::cout << std::fixed << std::setprecision(8);
	std::cout << d;

	return 0;
}