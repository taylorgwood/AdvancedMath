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
    double real = get_real();
    double imaginary = get_imaginary();
    double modulus{0};
    modulus = sqrt(real*real + imaginary*imaginary);
    return modulus;
}

Complex Complex::operator+(const Complex secondComplexNumber)
{
    double real1 = get_real();
    double imaginary1 = get_imaginary();
    double real2 = secondComplexNumber.get_real();
    double imaginary2 = secondComplexNumber.get_imaginary();
    Complex summedComplexNumber{real1+real2,imaginary1+imaginary2};
    return summedComplexNumber;
}
