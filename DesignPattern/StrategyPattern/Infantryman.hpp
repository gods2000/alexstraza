//
//  Infantryman.hpp
//  DesignPattern
//
//  Created by DoHyun on 2017. 6. 1..
//  Copyright © 2017년 DoHyun. All rights reserved.
//

#ifndef Infantryman_hpp
#define Infantryman_hpp

#include <stdio.h>
#include "Solider.hpp"

class Infantryman : public Solider {
    
public:
    Infantryman();
    virtual ~Infantryman();
    
    virtual void disply() override;
    
};

#endif /* Infantryman_hpp */
