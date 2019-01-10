#ifndef PARAMETER_HPP
#define PARAMETER_HPP

#include <string>

class ParameterVisitor;

class Parameter
{
public:
    explicit Parameter(const std::string &name);
    virtual ~Parameter() = default;

    const std::string &getName() const;

    virtual void accept(ParameterVisitor &visitor) = 0;

private:
    std::string m_name;

};

#endif // PARAMETER_HPP
