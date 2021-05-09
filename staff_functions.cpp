#include <iostream>
#include "game.cpp"

using namespace std;
class menu {
    public:
        void memu(int code){
			cout << '\n';
			switch (code)
					{
					case 0:
						cout << "Выход";
						break;
					case 1:{
							can_model 		can;
							attribute_model attribute;
							can.byte = 1;
							attribute.age = 11;
							attribute.name_duck = "}{Yй";
							Ducks_model duck(attribute,can);
		
							duck.say_characteristics();
							break;
						}
					case 2:{
						
						

						break;	
					}
					case 3:
						{
							break;
						}
					case 4:
						{
							break;
						}
					default:
						cout << "Ошибка ввода повторите ввод";
						break;
					}     
	        }
		void echo_menu(){			
			cout << '\n';
			cout << "\033[32m1: Вывод состояния утки;\033[0m"<< "\n";
			cout << "\033[33m2: Играть;\033[0m"<< "\n";
			cout << "\033[34m3: Вывод людей в файле;\033[0m"<< "\n";
			cout << "\033[34m4: Колличество строк в файле;\033[0m"<< "\n";


			cout << "\033[31m0: выход;\033[0m"<< "\n";
			cout << "Введите код: >> " ;
		}

};
