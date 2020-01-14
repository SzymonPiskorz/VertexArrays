#pragma once

#include "Vector3.h"
#include <cmath>

const double PI = 3.14159265359;

	class Matrix3
	{// The class has nine variables, 3 rows and 3 columns
	public:
		double A11;
		double A12;
		double A13;
		double A21;
		double A22;
		double A23;
		double A31;
		double A32;
		double A33;

		// Constructor 1 create a zero matrix
		Matrix3();

		// Constructor 2
		Matrix3(Vector3 Row1, Vector3 Row2, Vector3 Row3);
		// Constructor 3
		Matrix3(double _A11, double _A12, double _A13,
			double _A21, double _A22, double _A23,
			double _A31, double _A32, double _A33);

		Vector3 operator *(Vector3 V1) const;
		Matrix3 Transpose(Matrix3 M1) const;
		Matrix3 operator +(Matrix3 M2) const;
		Matrix3 operator -(Matrix3 M2) const;

		Matrix3 operator*(double x) const;

		Matrix3 operator *(Matrix3 M2) const;


		double Determinant(Matrix3 M1) const;

		Vector3 Row(int i) const;

		Vector3 Column(int i) const;


		Matrix3 Inverse(Matrix3 M1) const;

		Matrix3 Rotation(int _angle) const;


		static Matrix3 Translate(float dx, float dy);

		static Matrix3 Scale(int dx, int dy);

		Matrix3 operator -() const;

		static Matrix3 RotationX(float _angle);
		static Matrix3 RotationY(float _angle);
		static Matrix3 RotationZ(float _angle);

		static Matrix3 Scale3D(int dx);

		std::string toString() const;
	};





