#include "intparameter.hpp"

IntParameter::IntParameter(const std::string &name, int min, int max, int value)
    : Parameter(name),
      m_min(min),
      m_max(max),
      m_value(value)
{
}

int IntParameter::getMin() const
{
    return m_min;
}

int IntParameter::getMax() const
{
    return m_max;
}

int IntParameter::getValue() const
{
    return m_value;
}

void IntParameter::setValue(int value)
{
    m_value = value;
}

IntParameter::accept(ParameterVisitor &visitor)
{
    // TODO
}
