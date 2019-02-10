#ifndef COMPOSITEPARAMETER_HPP
#define COMPOSITEPARAMETER_HPP

#include "parameter.hpp"

#include <vector>
#include <memory>

class CompositeParameter : public Parameter
{
public:
    explicit CompositeParameter(const std::string &name);

    Parameter &operator[](int index) const;

    int getCount() const;

    void addParameter(Parameter *p);
    void insertParameter(int index, Parameter *p);
    void removeParameter(int index);
    void clear();

    virtual void accept(ParameterVisitor &visitor) override;

private:
    std::vector<Parameter*> m_parameters;

};

#endif // COMPOSITEPARAMETER_HPP
