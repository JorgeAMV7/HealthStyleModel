/**
 * 
 */
#pragma once
using namespace System;

namespace HealthStyleModel {
    public ref class Person {
    public:
        property int Id;
        property String^ Name;
        property String^ DocNumber;
        property String^ Adress;
        property String^ PhoneNumber;
        property String^ Email;
        property char Status;
    };
}


