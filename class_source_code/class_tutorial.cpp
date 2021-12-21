#include <iostream>
#include "user_class.h"

int main(){

    my_user user1;
    user1.set_data("Kim", 19, 1996);
    
    my_user user2;
    user2.set_data("Yee", 22, 1999);

    user1.print_user_data();
    user2.print_user_data();
    return 0;
}