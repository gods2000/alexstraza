//
//  Sniper.hpp
//  DesignPattern
//
//  Created by DoHyun on 2017. 6. 1..
//  Copyright © 2017년 DoHyun. All rights reserved.
//

#ifndef Sniper_hpp
#define Sniper_hpp

#include <stdio.h>
#include "Solider.hpp"

class Sniper : public Solider {
    
public:
    Sniper();
    virtual ~Sniper();
    
    virtual void disply() override;
    
};

#endif /* Sniper_hpp */
