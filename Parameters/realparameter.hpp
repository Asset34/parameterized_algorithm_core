#ifndef REALPARAMETER_HPP
#define REALPARAMETER_HPP

#include "parameter.hpp"

class RealParameter : public Parameter
{
public:
    explicit RealParameter(const std::string &name, double min, double max, double value);

    RealParameter &operator=(double value);
    operator double() const;

    double getMin() const;
    double getMax() const;

    double getValue() const;
    void setValue(int value);

    virtual void accept(ParameterVisitor &visitor) override;

private:
    double m_min;
    double m_max;
    double m_value;

};

#endif // REALPARAMETER_HPP
