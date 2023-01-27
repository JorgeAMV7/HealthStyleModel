/**
 * Project Untitled
 */


#ifndef _DOCTOR_H
#define _DOCTOR_H

#include "Empleado.h"


public ref class Doctor: public Empleado {
public: 
    property String^ Speciality;
    property int PatiensAttended;
};

#endif //_DOCTOR_H
