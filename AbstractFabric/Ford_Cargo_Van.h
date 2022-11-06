#pragma once
#include "Cargo_Van.h"
class Ford_Cargo_Van :
    public Cargo_Van
{
public:
    Ford_Cargo_Van(const string& fn, int wheels);
    void ride()override;
};

