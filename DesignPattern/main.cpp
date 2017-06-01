//
//  main.cpp
//  DesignPattern
//
//  Created by DoHyun on 2017. 5. 25..
//  Copyright © 2017년 DoHyun. All rights reserved.
//

#include <iostream>

/*
 // 패턴 타입 변경
 #define STRATEGY_PATTERN   1   //스트래티지 패턴
*/

#define RUN_PATTERN STRATEGY_PATTERN

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Pattern World!\n";
    
#if RUN_PATTERN == STRATEGY_PATTERN
    std::cout << "\n\nStrategy Pattern Sample Project Start\n\n";
#endif
    
    return 0;
}
