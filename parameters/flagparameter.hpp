#ifndef FLAGPARAMETER_HPP
#define FLAGPARAMETER_HPP

#include "parameter.hpp"

class FlagParameter : public Parameter
{
public:
    explicit FlagParameter(const std::string &name, bool value);

    FlagParameter &operator=(bool value);
    operator bool() const;

    bool getValue() const;
    void setValue(bool value);

    virtual void accept(ParameterVisitor &visitor) override;

private:
    bool m_value;

};

#endif // FLAGPARAMETER_HPP
