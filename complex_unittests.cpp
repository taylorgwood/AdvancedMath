#include <iostream>
#include "gtest/gtest.h"
//#include "vector3d.h"
#include "complex.h"

void EXPECT_EQ_COMPLEX(const Complex& firstObject, const Complex& secondObject)
{
    EXPECT_DOUBLE_EQ(firstObject.get_real(), secondObject.get_real());
    EXPECT_DOUBLE_EQ(firstObject.get_imaginary(), secondObject.get_imaginary());
}

TEST(Constructor,whenBuildingEmptyObject_getEmptyObject)
{
    Complex complexNumber;
    double zeroReal{0};
    double zeroImaginary{0};
    EXPECT_DOUBLE_EQ(zeroReal, complexNumber.get_real());
    EXPECT_DOUBLE_EQ(zeroImaginary, complexNumber.get_imaginary());
}
