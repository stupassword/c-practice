#include <iostream>

class my_user{
    private:
        std::string name;
        int age;
        int birth_year;

    public:
        void set_data(std::string user_name, int user_age, int user_birth){
            name = user_name;
            age = user_age;
            birth_year = user_birth;
        }

        void print_user_data(){
            std::cout << name << "'s age : " << age << std::endl;
            std::cout << name << "'s birth year : " << birth_year << std::endl;
        }
};