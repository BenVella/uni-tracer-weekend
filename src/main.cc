#include <iostream>
#include <glm/vec3.hpp>

int main() {
	// Image Declare
	const int image_width = 256;
	const int image_height = 256;

	// Render Image
	std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

	for (int j = image_height -1; j >= 0; --j) { // Reducing row Y, top max height, bottom is zero
		std::cerr << "\rScanlines Remaining: " << j << ' ' << std::flush;
		for (int i = 0; i < image_width; i++) { // Incrementing column X
		       auto r = double(i) / (image_width -1);
		       auto g = double(j) / (image_height -1);
		       auto b = 0.25;

		       int ir = static_cast<int>(255.999 * r);
		       int ig = static_cast<int>(255.999 * g);
		       int ib = static_cast<int>(255.999 * b);

		       std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}
	std::cerr << "\nDone\n";
	return (EXIT_SUCCESS);
}
