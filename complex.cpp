#include "complex.h"
#include <string>
#include <iostream>
#include <cmath>


Complex::~Complex()
{
}

Complex::Complex()
{
}

Complex::Complex(double real, double imaginary)
{
    mReal = real;
    mImaginary = imaginary;
}


//Complex::Complex(Vector3 position, Vector3 velocity, Vector3 acceleration): mPosition{position}, mVelocity{velocity}, mAcceleration{acceleration}
//{
//}

double Complex::get_real() const
{
    return mReal;
}

double Complex::get_imaginary() const
{
    return mImaginary;
}

void Complex::set_real(double const real)
{
    mReal = real;
}

void Complex::set_imaginary(double const imaginary)
{
    mImaginary = imaginary;
}

double Complex::absImaginary()
{
    double imaginary = get_imaginary();
    double absoluteValueImaginary{imaginary};
    if (imaginary < 0)
    {
        absoluteValueImaginary = -1*imaginary;
    }
    return absoluteValueImaginary;
}

void Complex::print()
{
    double real = get_real();
    double imaginary = get_imaginary();
    double notSignedImaginary{0};
    notSignedImaginary = absImaginary();
    std::string imaginarySign{"+"};
    if (imaginary < 0)
    {
        imaginarySign = "-";
    }

    std::cout << real << " " << imaginarySign << " i" << notSignedImaginary << std::endl;
}

Complex Complex::conjugate()
{
    double real = get_real();
    double imaginary = get_imaginary();
    Complex conjugate{real,-1*imaginary};
    return conjugate;
}

double Complex::modulus()
{
    double a = get_real();
    double b = get_imaginary();
    double modulus{0};
    modulus = sqrt(a*a + b*b);
    return modulus;
}

//double PhysicsObject::get_coefficient_of_restitution() const
//{
//    return mCoefficientOfRestitution;
//}

//void PhysicsObject::set_position(Vector3 const position)
//{
//    mPosition = position;
//}
