#include "complex.h"
#include <string>
#include <iostream>


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
    double absoluteValueImaginary{mImaginary};
    if (mImaginary < 0)
    {
        absoluteValueImaginary = -1*mImaginary;
    }
    return absoluteValueImaginary;
}

void Complex::print()
{
    double notSignedImaginary{0};
    notSignedImaginary = absImaginary();
    std::string imaginarySign{"+"};
    if (mImaginary < 0)
    {
        imaginarySign = "-";
    }

    std::cout << mReal << " " << imaginarySign << " i" << notSignedImaginary << std::endl;
}

//double PhysicsObject::get_coefficient_of_restitution() const
//{
//    return mCoefficientOfRestitution;
//}

//void PhysicsObject::set_position(Vector3 const position)
//{
//    mPosition = position;
//}
