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

TEST(Constructor,whenBuildingObject_getCorrectObject)
{
    double expectedReal{1};
    double expectedImaginary{2};
    Complex complexNumber{expectedReal,expectedImaginary};
    EXPECT_DOUBLE_EQ(expectedReal, complexNumber.get_real());
    EXPECT_DOUBLE_EQ(expectedImaginary, complexNumber.get_imaginary());
}

TEST(Print,whenPrintingObject_getCorrectValues)
{
    double expectedReal{1};
    double expectedImaginary{2};
    Complex complexNumber{expectedReal,expectedImaginary};
    complexNumber.print();
}

TEST(AbsoluteValue, whenAskingForAbsoluteValue_getUnsignedValue)
{
    Complex complexNumber;
    double negativeImaginary{-8};
    complexNumber.set_imaginary(negativeImaginary);
    double absoluteValueResult{0};
    absoluteValueResult = complexNumber.absImaginary();
    double expectedValue{8};
    EXPECT_DOUBLE_EQ(expectedValue,absoluteValueResult);
}

TEST(Print,whenPrintingObject_getCorrectValuesAndCorrectSign)
{
    double expectedReal{1};
    double expectedImaginary{-2};
    Complex complexNumber{expectedReal,expectedImaginary};
    complexNumber.print();
}
