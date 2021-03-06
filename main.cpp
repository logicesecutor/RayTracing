//
// Created by Chrees on 21/10/2021.
//

#include "vec3.h"
#include "color.h"

#include <iostream>
#include <fstream>

int main(){

    std::ofstream file_out("image.ppm");
    // Image

    const int image_width = 256;
    const int image_height = 256;

    // Render

    file_out << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = image_height-1; j >= 0; --j) {
        std::cerr << "\rScan-lines remaining: " << j << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i) {
            color pixel_color(double(i)/(image_width-1), double(j)/(image_height-1), 0.5);
            write_color(file_out, pixel_color);
        }
    }

    std::cerr << "\nDone.\n";

    file_out.close();

    return 0;
}