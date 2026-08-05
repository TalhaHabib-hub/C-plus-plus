/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;
class student{
    protected:
        int roll_number;
    public:
        void get_roll_number(int i){
            roll_number = i;
        }
        void show_roll_number(void){
            cout<<"Roll No# : "<<roll_number<<endl;
        }
};
class Test: virtual public student{
    protected:
        int physics, math;
    public:
        void get_marks(int i, int j){
            physics = i;
            math = j;
        }
        void show_marks(void){
            cout<<"The marks in Physics: "<<physics<<endl
            <<"The marks in Math: "<<math<<endl;
            
        }

};
class sport : public virtual student{
    protected:
        int score;
    public:
        void get_score(int i){
            score = i;
        }
        void show_score(void){
            cout<<"The PT score is: "<<score<<endl;
        }
};

class Total_Result : public Test, public sport{
    private:
        float total;
    public:
        void display_of_all(void){
            total = math + physics + score;
            show_roll_number();
            show_marks();
            show_score();
            cout<<"Your total score is: "<<total<<endl;
        }
    
};
int main(){
    Total_Result Talha;
    Talha.get_roll_number(156330);
    Talha.get_marks(98,97);
    Talha.get_score(99);
    Talha.display_of_all();

    
    return 0;
}