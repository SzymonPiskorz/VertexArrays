#pragma once

#include <iostream>
#include <cmath>
#include <string>


	class Vector3
	{
	public:
		// The class has three variables x, y and z 
		double x;
		double y;
		double z;

		// Constructor 1
		Vector3();

		// Constructor 2
		Vector3(double x1, double y1, double z1);


		double Length() const;
		double LengthSquared() const;

		void Normalise();


		Vector3 operator+(Vector3 V2) const;

		Vector3 operator-(Vector3 V2) const;

		
		double operator*(Vector3 V2) const;
		
		Vector3 operator*(double k) const;

		Vector3 operator*(float k) const;

		Vector3 operator *(int k) const;

		Vector3 operator^(Vector3 V2) const;

		std::string toString() const;

	};


