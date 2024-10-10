#pragma once

/// <summary>
/// Color represented with three double (DBL) precicion values 
/// </summary>
struct ColorDBL {
	double r, g, b;

	ColorDBL() : r(0.0), g(0.0), b(0.0) {};
	ColorDBL(double red, double green, double blue) : r(red), g(green), b(blue) {};
};