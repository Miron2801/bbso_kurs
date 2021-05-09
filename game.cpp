#include <iostream>
#include <string>
#include <sys/cdefs.h>
#include "defs.h"
using namespace std;

struct attribute_model {
                string name_duck  = "";
                int weight          = -1;
                string sex          = "";
                int endurance       = -1;
                int form_beak       = -1;
                int beak_size       = -1;
                int dexterity       = -1;
                int plumage_color   = -1;
                int color           = -1;
                int age             = -1;
                int strength        = -1;
                int hobby           = -1;
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
                        if(attribute.sex != "")
                                cout << "|Пол утки         " << "   |   " << attribute.sex<< '\n'; 
                        if(attribute.endurance != -1)
                                cout << "|Выносливость утки" << "   |   " << attribute.endurance<< '\n';               
                        if(attribute.form_beak != -1)
                                cout << "|Форма клюва утки " << "   |   " << attribute.form_beak<< '\n';                
                        if(attribute.beak_size != -1)
                                cout << "|Размер клюва утки" << "   |   " << attribute.beak_size<< '\n';                
                        if(attribute.dexterity != -1)
                                cout << "|Ловкость утки    " << "   |   " << attribute.dexterity<< '\n';
                        if(attribute.plumage_color != -1)
                                cout << "|Цвет клюва утки  " << "   |   " << attribute.plumage_color<< '\n';
                        if(attribute.color != -1)
                                cout << "|Цвет утки        " << "   |   " << attribute.name_duck<< '\n';
                        if(attribute.age != -1)
                                cout << "|Возраст утки     " << "   |   " << attribute.age<< '\n';
                        if(attribute.strength != -1)
                                cout << "|Сила утки        " << "   |   " << attribute.strength<< '\n';
                        if(attribute.hobby != -1)
                                cout << "|Хобби утки       " << "   |   " << attribute.hobby<< '\n';
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

class lake_model{
    public:
        lake_model(string name, Ducks_model ducks[]){
            cout << "Инициализация озер: " << endl;
            for (int i = 0; i < cnt_ducks; i++)
                    //ducks[i].say_name();
                    int qwe;
        
        }

};