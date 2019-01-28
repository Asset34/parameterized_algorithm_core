#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include <string>
#include <vector>

#include "parameters/parameter.hpp"

class Algorithm
{
public:
    virtual ~Algorithm() = default;

    virtual std::string getName() const = 0;
    virtual std::vector<Parameter*> getParameters() = 0;

};

#endif // ALGORITHM_HPP
