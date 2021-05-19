#include <iostream>
#include "game.cpp"
#include <list>

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
							cout << get_random(0, 10) << "\n";
							break;
						}
					case 4:{


							std::list<lake_model> lakes;

							string lakes_names[4] = lake_names_def;
							

							for(int lake_cnt = 0; lake_cnt < cnt_lakes; lake_cnt++){
								std::list<Ducks_model> ducks;

								for (int duck_cnt = 0; duck_cnt < cnt_ducks/cnt_lakes; duck_cnt++){

											can_model 		      can;
											attribute_model       attribute;
											if(lakes_names[lake_cnt] == "Аргентино"){
													attribute.mother_lake_name = "Аргентино";
													if(get_random(1, 2) == 1){
															can.can_fly = 1;
														can.know_were_live = 1;
														attribute.name_duck = "Чирок-свистунок";
														attribute.weight 	= get_random(1, 10);
														attribute.sex		= get_random(0, 1);
														attribute.endurance = get_random(0, 10);
													}
													else {
														can.can_krya = 1;
														can.know_were_live = 0;
														
														attribute.name_duck = "Чирок-свистунок";
														attribute.weight	= get_random(0, 10);
														attribute.form_beak = get_random(0, 10);
														attribute.size_tail = get_random(0, 5);
												

													}
											}
											if(lakes_names[lake_cnt] == "Тахо"){
													attribute.mother_lake_name = "Тахо";
													if(get_random(1, 2) == 1){
														can.can_swimm = 1;
														can.know_were_live = 1;
														attribute.name_duck = "Мраморные чирки";
														attribute.weight    = get_random(0, 10);
														attribute.endurance = get_random(0,10);
														attribute.plumage_color= get_random(0, 10);
													}
													else {
														can.can_fish = 1;
														can.know_were_live = 0;
														
														attribute.name_duck = "Пеганки";
														attribute.weight	= get_random(0, 10);
														attribute.beak_size = get_random(0, 10);
														attribute.color = get_random(0, 5);

													}

											}											
											if(lakes_names[lake_cnt] == "Танганьика"){
													attribute.mother_lake_name = "Танганьика";
													if(get_random(1, 2) == 1){
														can.can_swimm = 1;
														can.know_were_live = 1;
														attribute.name_duck = "Голубокрылый чирок";
														attribute.weight    = get_random(0, 10);
														attribute.endurance = get_random(0,10);
														attribute.age		= get_random(0, 10);
													}
													else {
														can.can_do_nothong = 1;
														can.know_were_live = 0;
														
														attribute.name_duck = "Шилохвость";
														attribute.weight	= get_random(0, 10);
														attribute.color = get_random(0, 5);
														attribute.strength = get_random(0, 10);

													}
												
											}	
											if(lakes_names[lake_cnt] == "Тоба"){
													attribute.mother_lake_name = "Тоба";
													if(get_random(1, 2) == 1){
														can.can_fly = 1;
														can.know_were_live = 0;
														attribute.name_duck = "Мраморные чирки";
														attribute.weight    = get_random(0, 10);
														attribute.size_tail = get_random(0, 5);
														attribute.color		= get_random(0, 5);
													}
													else {
														can.byte = 1;
														can.know_were_live = 0;
														
														attribute.name_duck = "Пеганки";
														attribute.weight	= get_random(0, 10);
														attribute.sex = get_random(0, 1);
														attribute.hobby = get_random(0, 10);

													}
											}
											ducks.push_back(Ducks_model(attribute, can));
										}
									lakes.push_back(lake_model(lakes_names[lake_cnt], ducks));
							

							}
							game Game_runner(lakes);
							Game_runner.run();
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
			cout << "\033[34m3: Ранжомное значение\033[0m"<< "\n";
			cout << "\033[34m4: Начало игры\033[0m"<< "\n";


			cout << "\033[31m0: выход;\033[0m"<< "\n";
			cout << "Введите код: >> " ;
		}

};
