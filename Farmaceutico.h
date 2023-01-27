/**
 *
 */


#pragma once

#include "Empleado.h"
using namespace System;

namespace HealthStyleModel{
    public ref class Farmaceutico : public Empleado {
    public:
        property int MedicinesDelivered;
        property int MedicinesSold;
    };
}


