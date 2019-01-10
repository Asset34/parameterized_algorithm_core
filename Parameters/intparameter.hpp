#ifndef INTPARAMETER_HPP
#define INTPARAMETER_HPP

#include "parameter.hpp"

class IntParameter : public Parameter
{
public:
    explicit IntParameter(const std::string &name, int min, int max, int value);

    int getMin() const;
    int getMax() const;

    int getValue() const;
    void setValue(int value);

    virtual accept(ParameterVisitor &visitor) override;

private:
    int m_min;
    int m_max;
    int m_value;

};

#endif // INTPARAMETER_HPP
