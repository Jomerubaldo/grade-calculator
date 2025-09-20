#include <stdio.h>

int average = 71;

int main() {
    
    if( average >= 90 ) {
        
        printf("Grade A");
        
    }
    
    else if( average >= 80 && average < 90) {
        
        printf("Grade B");
        
    }
    
    else if( average >= 70 && average < 80  ) {
        
        printf("Grade C");
        
    }
    
    else if( average >= 60 && average < 70 ) {
        
        printf("Grade D");
        
    }
    
    else{
        
        printf("Grade F");
    }
        
    return 0;
}