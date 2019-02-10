#include "compositeparameter.hpp"

#include "../parametervisitor.hpp"

CompositeParameter::CompositeParameter(const std::string &name)
    : Parameter(name)
{
}

Parameter &CompositeParameter::operator[](int index) const
{
    return *m_parameters[index];
}

int CompositeParameter::getCount() const
{
    return m_parameters.size();
}

void CompositeParameter::addParameter(Parameter *p)
{
    m_parameters.push_back(p);
}

void CompositeParameter::insertParameter(int index, Parameter *p)
{
    m_parameters.insert(m_parameters.begin() + index, p);
}

void CompositeParameter::removeParameter(int index)
{
    m_parameters.erase(m_parameters.begin() + index);
}

void CompositeParameter::clear()
{
    m_parameters.clear();
}

void CompositeParameter::accept(ParameterVisitor &visitor)
{
    visitor.visit(*this);
}
