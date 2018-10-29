#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
    ~Complex();
    Complex();
    Complex(double real, double imaginary);
    double get_real() const;
    double get_imaginary() const;
    double get_unsigned_imaginary();
    void set_real(double const real);
    void set_imaginary(double const imaginary);
    void print();
    double modulus();
    Complex conjugate();
    Complex operator+(const Complex secondComplexNumber);

protected:

private:
    double mReal{0};
    double mImaginary{0};

};
#endif // COMPLEX_H


