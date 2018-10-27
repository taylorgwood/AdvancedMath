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

    void set_real(double const real);
    void set_imaginary(double const imaginary);

    double absImaginary();
    void print();
    Complex conjugate();
    double modulus();
    Complex operator+(const Complex secondComplexNumber);

protected:

private:
    double mReal{0};
    double mImaginary{0};

};
#endif // COMPLEX_H


