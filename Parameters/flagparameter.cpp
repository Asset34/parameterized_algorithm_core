#include "flagparameter.hpp"

#include "../parametervisitor.hpp"

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

void FlagParameter::accept(ParameterVisitor &visitor)
{
    visitor.visit(*this);
}
