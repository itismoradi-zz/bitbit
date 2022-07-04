#ifndef MUX_IG
#define MUX_IG

#include "module.hpp"
#include <fstream>

class Mux : public Module
{
public:
    Mux(std::fstream, unsigned int, unsigned int);
    virtual Module & create() override;
private:
    
};

#endif
