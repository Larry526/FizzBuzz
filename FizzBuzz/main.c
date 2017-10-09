//
//  main.c
//  FizzBuzz
//
//  Created by Larry Luk on 2017-10-09.
//  Copyright © 2017 App App Studio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    for (int i = 1; i < 101; i++) {
        
        if ((i % 3) == 0 && (i % 5) == 0) {
        printf("FizzBuzz \n");
        } else if ((i % 3) == 0) {
        printf("Fizz \n");
        } else if ((i % 5) == 0) {
        printf("Buzz \n");
        } else {
           
        printf("%d \n", i);

        }
        

    }
    
}
