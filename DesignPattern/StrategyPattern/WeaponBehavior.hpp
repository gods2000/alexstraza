//
//  WeaponBehavior.hpp
//  DesignPattern
//
//  Created by DoHyun on 2017. 6. 1..
//  Copyright © 2017년 DoHyun. All rights reserved.
//

#ifndef WeaponBehavior_hpp
#define WeaponBehavior_hpp

#include <stdio.h>
#include <iostream>

class WeaponBehavior {
    
public:
    WeaponBehavior();
    virtual ~WeaponBehavior();
    
    virtual void useWeapon() = 0;
};

#endif /* WeaponBehavior_hpp */

class AKWeaponBehavior : public WeaponBehavior {
    
public:
    AKWeaponBehavior();
    virtual ~AKWeaponBehavior();
    
    virtual void useWeapon() override;
};

class PSGWeaponBehavior : public WeaponBehavior {
    
public:
    PSGWeaponBehavior();
    virtual ~PSGWeaponBehavior();
    
    virtual void useWeapon() override;
};


