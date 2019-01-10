#include "parameter.hpp"

Parameter::Parameter(const std::string &name)
    : m_name(name)
{
}

const std::string &Parameter::getName() const
{
    return m_name;
}
