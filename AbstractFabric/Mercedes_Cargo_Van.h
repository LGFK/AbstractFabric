#pragma once
#include "Cargo_Van.h"
class Mercedes_Cargo_Van :
    public Cargo_Van
{
public:
    Mercedes_Cargo_Van(const string &cn,int wheels);
    void ride()override;
};

