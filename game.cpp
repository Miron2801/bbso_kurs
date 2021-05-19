#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <string>
#include <sys/cdefs.h>
#include "defs.h"
#include <list>
#include <unistd.h>

using namespace std;

struct attribute_model {
                string name_duck         = "";
                string mother_lake_name  = ""; 
                int weight               = -1;
                int sex                  = -1;
                int endurance            = -1;
                int form_beak            = -1;
                int size_tail            = -1;
                int beak_size            = -1;
                int dexterity            = -1;
                int plumage_color        = -1;
                int color                = -1;
                int age                  = -1;
                int strength             = -1;
                int hobby                = -1;
                int cnt_catches          =  0;
                int can_escape           =  1;
                
};

struct can_model{
                int can_fly        = -1;
                int know_were_live = -1;
                int can_krya       = -1;
                int can_swimm      = -1;
                int can_fish       = -1;
                int can_do_nothong = -1;
                int byte           = -1;
};             


class Ducks_model
{
        public:
                attribute_model attribute; 
                can_model can;

                Ducks_model(attribute_model attribute_b, can_model can_b){   
                                attribute = attribute_b;
                                can = can_b;
                }
                ~Ducks_model(){

                }

                void say_characteristics(){
                    cout << "+------------------------------------+"<< '\n';
                        if(attribute.name_duck != "")
                                cout << "|Имя утки         " << "   |   " << attribute.name_duck<< '\n';
                        if(attribute.weight != -1)
                                cout << "|Вес утки         " << "   |   " << attribute.weight<< '\n';
                        if(attribute.sex != -1)
                                cout << "|Пол утки         " << "   |   " << attribute.sex<< '\n'; 
                        if(attribute.endurance != -1)
                                cout << "|Выносливость утки" << "   |   " << attribute.endurance<< '\n';               
                        if(attribute.form_beak != -1)
                                cout << "|Форма клюва утки " << "   |   " << attribute.form_beak<< '\n';                
                        if(attribute.beak_size != -1)
                                cout << "|Размер клюва утки" << "   |   " << attribute.beak_size<< '\n';                
                        if(attribute.dexterity != -1)
                                cout << "|Ловкость утки    " << "   |   " << attribute.dexterity<< '\n';
                        if(attribute.size_tail != -1)
                                cout << "|Размер хвоста    " << "   |   " << attribute.size_tail<< '\n';
                        if(attribute.plumage_color != -1)
                                cout << "|Цвет клюва утки  " << "   |   " << attribute.plumage_color<< '\n';
                        if(attribute.color != -1)
                                cout << "|Цвет утки        " << "   |   " << attribute.color<< '\n';
                        if(attribute.age != -1)
                                cout << "|Возраст утки     " << "   |   " << attribute.age<< '\n';
                        if(attribute.strength != -1)
                                cout << "|Сила утки        " << "   |   " << attribute.strength<< '\n';
                        if(attribute.hobby != -1)
                                cout << "|Хобби утки       " << "   |   " << attribute.hobby<< '\n';
                        if(attribute.can_escape != -1)
                                cout << "|Может еще сбежать" << "   |   " << attribute.can_escape<< '\n';        
                        if(attribute.cnt_catches != -1)
                                cout << "|Была поймана     " << "   |   " << attribute.cnt_catches<< '\n';
                   cout << "+------------------------------------+\n";
                   cout << "|Умения                               \n";
                        if(can.can_fly != -1)
                                cout << "|Умеет летать     " << "   |   " << can.can_fly<< '\n';
                        if(can.know_were_live != -1)
                                cout << "|Знает где живет  " << "   |   " << can.know_were_live<< '\n';
                        if(can.can_krya != -1)
                                cout << "|Крякать          " << "   |   " << can.can_krya<< '\n';
                        if(can.can_swimm != -1)
                                cout << "|Плавать          " << "   |   " << can.can_swimm<< '\n';
                        if(can.can_fish != -1)
                                cout << "|Рыбачить         " << "   |   " << can.can_fish<< '\n';
                        if(can.can_do_nothong != -1)
                                cout << "|Стредать херней  " << "   |   " << can.can_do_nothong<< '\n';
                        if(can.byte != -1)
                                cout << "|Кусаться         " << "   |   " << can.byte<< '\n';    
                   cout << "+------------------------------------+"<< '\n';


                }
                void say_count(){

                } 

};






int get_random(int min, int max){
       return  rand() % max +min;
}
class lake_model{


    public:
        string name = "";
        std::list<Ducks_model> ducks;
        attribute_model cnt_attr;
        lake_model(string name_b, std::list<Ducks_model> duck_b){
                        cout << "Инициализация озер: \033[31m" << name_b << "\033[0m\n";
                        ducks = duck_b;
                        name = name_b;

        }
        void tell_ducks(){
                
                        cout << "На озере: " << name << '\n';
                        int i = 0;
                        for (Ducks_model duck_b : ducks){
                                i++;
                                cout <<"\n\033[34m"<< name << "\033[0m\n"; 
                                duck_b.say_characteristics();
                        }
                        if(i == 0)
                                cout << "Нет уток\n";
                        
                        cout << "\n";
        }
        int сount_ducks(){
                        int cnt = 0;
                        for (Ducks_model duck_b : ducks)
                                cnt++;
                        return cnt;
        }
};
class hunter_model{
        private:
                std::list<Ducks_model> ducks;

        public:

                //lake_model *farm;
                string name_farm;
                lake_model farm = lake_model(farm_name_def, ducks);

                hunter_model(std::list<Ducks_model> duck_b){
                        name_farm = farm_name_def;
                        cout << farm.name << " инициализировано\n";
                }
                void process_farm(std::list<lake_model> *lakes){
                                for (std::list<Ducks_model>::iterator it=farm.ducks.begin(); it != farm.ducks.end() && farm.сount_ducks(); it++)
                                {
                                        if(!(*it).can.know_were_live){
                                                if(get_random(0, 3) == 2){
                                                        if((*it).attribute.can_escape > 0){
                                                                continue;
                                                        }
                                                
                                                        else{
                                                        cout << "Утка сбежала...\n";
                                                        int lake_where_it_go = get_random(0, lakes->size());
                                                        int i = 0;
                                                        for(lake_model &lake : *lakes){
                                                                  if(i == lake_where_it_go){
                                                                                auto duck_to_del = it;
                                                                                
                                                                                lake.ducks.push_back(*it);
                                                                                it++;
                                                                                farm.ducks.erase(duck_to_del);    
                                                                                break;
                                                                  }              

                                                                i++;
                                                                }
                                                        }
                                                }
                                                }else      
                                                        if(get_random(0, 3) == 2){
                                                                        if((*it).attribute.can_escape == 0){
                                                                                continue;
                                                                        
                                                                        }else{  
                                                                                for(lake_model &lake : *lakes){
                                                                                        if(lake.name == (*it).attribute.mother_lake_name){
                                                                                                        auto duck_to_del = it;                                                                                
                                                                                                        lake.ducks.push_back(*it);
                                                                                                        it++;
                                                                                                        farm.ducks.erase(duck_to_del);    
                                                                                                        break;
                                                                                        } 
                                                                                }             
                                                                        }         
                                                

                                        
                                                          }

                        
                        }
        }
                void hunt(std::list<lake_model> *lakes){
                        cout << "тсссс идет охота\n";
                        std::cout << R"(
|(
| \
|  )
##-(------>        
|  )
| /
|(
)" << '\n';
sleep(1);
string s =  R"(
|  ()";
                for (int i = 0; i<100; i++){
                        system("clear");
                        cout << "тсссс идет охота\n";

 
std::cout << R"(
|(
| \
|  ))"<<s<<
R"(##-------->)" <<
R"(    
|  )
| /
|(
)" << '\n';
     s = s + " ";
        usleep(10000);
}

        int lake_to_hunt  = get_random(0, 4);
        int checker = 0;

        for (lake_model &lake : *lakes){

                if(lake_to_hunt == checker){
                        if(lake.сount_ducks() > 0){
                                int how_many_to_delete = get_random(1, 6);
                                for(int iter = 0; iter < how_many_to_delete && lake.сount_ducks(); iter++)
                                        if(how_many_to_delete > 0){
                                                  for (std::list<Ducks_model>::iterator it=lake.ducks.begin(); it != lake.ducks.end() && lake.сount_ducks() && how_many_to_delete; it++){
                                                  //  for (Ducks_model &it: lake.ducks){
                                                                if((*it).can.byte == 1){
                                                                        if(get_random(0, 2)){
                                                                                if((*it).attribute.cnt_catches > 0)
                                                                                           (*it).attribute.can_escape = 0;
                                                                                else
                                                                                           (*it).attribute.cnt_catches++;
                                                                                auto duck_to_del = it;
                                                                                
                                                                                farm.ducks.push_back(*it);
                                                                                it++;
                                                                                lake.ducks.erase(duck_to_del);    
                                                                                how_many_to_delete--;
                                                                                continue;
                                                                        }
                                                                        else {
                                                                                continue;
                                                                        }
                                                                }
                                                                else {
                                                                                if((*it).attribute.cnt_catches > 1)
                                                                                           (*it).attribute.can_escape = 0;
                                                                                else
                                                                                           (*it).attribute.cnt_catches++;
                                                                                auto duck_to_del = it;
                                                                                
                                                                                farm.ducks.push_back(*it);
                                                                                it++;
                                                                                lake.ducks.erase(duck_to_del);    
                                                                                how_many_to_delete--;
                                                                                continue;
                                                                        continue;

                                                                }


                                        }
                                        
                                        }else 
                                                break;
                                        
                                        
                                
                        }else{

                                cout << "\033[33m2На озере на которое пришел охотник ушел\033[0m\n";
                                break;
                        }
                        
                }
                checker++;

        }
}     


};
class game{
public:
        std::list<lake_model> lakes;
        int game_started = 0;
        std::list<Ducks_model> ducks_empt;
        int now_day = 0;
        hunter_model hunter = hunter_model(ducks_empt);

        game(std::list<lake_model> lakes_b){
                lakes = lakes_b;
        }
        ~game(){


        }
        int menu_processor(int code){
                switch (code) {
                case 1:{
                        send_caracteristics();
                        break;
                }
                case 2:{
                        send_counts();
                        return 2;

                }
                case 3:{
                        now_day++;
                        cout << "Текущий день : " << now_day << '\n';
                        if(now_day >= 7){
                                cout <<"Сезон охоты закончен\n";
                                break;
                        }
                        game_started = 1;
                        hunter.hunt(&lakes);
                        hunter.process_farm(&lakes);
                        break;

                }
                case 4:{
                                int cnt = hunter.farm.сount_ducks();
                                if(cnt){
                                        cout << "Колличество уток на ферме: \033[32m" << cnt << "\033[0m\n";
                                        break;
                                }
                                else{
                                        cout<< "Нет уток на ферме\n";
                                        break;
                                }
                                break;
                }
                case 5:{
                                hunter.farm.tell_ducks();
                                break;
                }
                default:
                        cout << "Некорректный ввод. Повторите.";
                        break;
                }
                return -1;
        }
        void run(){
                system("clear");
                while(1){
                        cout << '\n';
			cout << "\033[32m1: Вывод уток по озерам\033[0m"<< "\n";
			cout << "\033[33m2: Вывод колличества уток на озерах\033[0m"<< "\n";

                        if(game_started)

                                cout << "\033[34m3: Следующий день\033[0m"<< "\n";
                        
                        else
                                cout << "\033[34m3: Начать игру.\033[0m"<< "\n";
                                
                        
                        cout << "\033[35m4: Вывод колличества уток на ферме\033[0m"<< "\n";
			cout << "\033[36m5: Вывод уток на ферме\033[0m"<< "\n";

			cout << "\033[31m-1: выход;\033[0m"<< "\n";
			cout << "Введите код: >> " ;
                        cout << "\033[31m";
                        int changer;
                        cin >> changer;
                        if(changer == -1){
                                return;
                        }
                        cout << "\033[0m\n";  
                        menu_processor(changer);       
                        //system("clear");

                }

        }
        void send_caracteristics(){
                system("clear");
                while(1){
                        int a = 0;
                        cout << "\n\033[31mСписок озер\033[0m\n";
                        for (lake_model lake : lakes){
                                        
                                        cout<< a << ") \033[32m" + lake.name << "\033[0m\n";
                                        a++;
                                }

                        cout << "Уток с какого озера вывести? \033[32m-1 - выход \033[0m>> ";
                        cout << "\033[31m";
                        int changer;
                        cin >> changer;
                        if(changer == -1){
                                system("clear");
                                return;
                        }
                        cout << "\033[0m\n";     
                        int i = 0;
                        
                        for (lake_model lake : lakes){
                                        if(i != changer) {i++; continue;}
                                        else {  
                                                if(lake.сount_ducks() > 0)
                                                        lake.tell_ducks();
                                                else 
                                                        cout << "\033[31m На этом озере нет уток \033[0m\n";
                                                break;
                                        }
                                }
        

                }



        }

        void send_counts(){
                system("clear");
                while(1){
                        int a = 0;
                        cout << "\n\033[31mСписок озер\033[0m\n";
                        for (lake_model lake : lakes){
                                        
                                        cout<< a << ")\033[32m " + lake.name << "\033[0m\n";
                                        a++;
                                }

                        cout << "Колличество уток с какого озера вывести? -1 - выход>> ";
                        cout << "\033[31m";
                        int changer;
                        cin >> changer;
                        if(changer == -1){
                                system("clear");
                                return;
                        }
                        cout << "\033[0m\n";     
                        int i = 0;
                        for (lake_model lake : lakes){
                                        if(i != changer) {i++; continue;}
                                        else {  
                                                cout << "\nНа озере: \033[32m" << lake.name << "\033[0m \033[31m" << lake.сount_ducks() << "\033[0m уток.";
                                                break;
                                        }
                                }
        

                }

        }

};