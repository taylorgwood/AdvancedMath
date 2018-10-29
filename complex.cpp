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
    set_real(real);
    set_imaginary(imaginary);
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

double Complex::get_unsigned_imaginary()
{
    double imaginary = get_imaginary();
    double unSignedImaginary{imaginary};
    if (imaginary < 0)
    {
        unSignedImaginary = -1*imaginary;
    }
    return unSignedImaginary;
}

void Complex::print()
{
    double real = get_real();
    double imaginary = get_imaginary();
    double unSignedImaginary{0};
    unSignedImaginary = get_unsigned_imaginary();
    std::string imaginarySign{"+"};
    if (imaginary < 0)
    {
        imaginarySign = "-";
    }

    std::cout << real << " " << imaginarySign << " i" << unSignedImaginary << std::endl;
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
