#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
    ~Complex();
    Complex();
    double get_real() const;
    double get_imaginary() const;
    //    Complex(Vector3 position, Vector3 velocity, Vector3 acceleration);
    //    void set_position(Vector3 const position);

protected:

private:
    double mReal{0};
    double mImaginary{0};
    //    double  mCoefficientOfRestitution{0.8};
    //    std::vector<PhysicsObject*> *mObjectList {nullptr};

};
#endif // COMPLEX_H

