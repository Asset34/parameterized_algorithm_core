#ifndef PARAMETERVISITOR_HPP
#define PARAMETERVISITOR_HPP

#include "parameters/intparameter.hpp"
#include "parameters/realparameter.hpp"
#include "parameters/flagparameter.hpp"

class ParameterVisitor
{
public:
    virtual void visit(IntParameter  &p) = 0;
    virtual void visit(RealParameter &p) = 0;
    virtual void visit(FlagParameter &p) = 0;

};

#endif // PARAMETERVISITOR_HPP
