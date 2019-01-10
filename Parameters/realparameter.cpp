#include "realparameter.hpp"

RealParameter::RealParameter(const std::string &name, double min, double max, double value)
    : Parameter(name),
      m_min(min),
      m_max(max),
      m_value(value)
{
}

double RealParameter::getMin() const
{
    return m_min;
}

double RealParameter::getMax() const
{
    return m_max;
}

double RealParameter::getValue() const
{
    return m_value;
}

void RealParameter::setValue(int value)
{
    m_value = value;
}

RealParameter::accept(ParameterVisitor &visitor)
{
    // TODO
}
