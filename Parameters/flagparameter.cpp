#include "flagparameter.hpp"

FlagParameter::FlagParameter(const std::string &name, bool value)
    : Parameter(name),
      m_value(value)
{
}

bool FlagParameter::getValue() const
{
    return m_value;
}

void FlagParameter::setValue(bool value)
{
    m_value = value;
}

FlagParameter::accept(ParameterVisitor &visitor)
{
    // TODO
}
