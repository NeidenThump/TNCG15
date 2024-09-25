#pragma once

struct ColorRGB {
	double r, g, b;

	ColorRGB() : r(0.0), g(0.0), b(0.0) {};
	ColorRGB(double red, double green, double blue) : r(red), g(green), b(blue) {};
};