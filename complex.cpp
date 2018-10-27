#include "complex.h"

Complex::~Complex()
{
}

Complex::Complex()
{
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
//double PhysicsObject::get_coefficient_of_restitution() const
//{
//    return mCoefficientOfRestitution;
//}

//void PhysicsObject::set_position(Vector3 const position)
//{
//    mPosition = position;
//}
