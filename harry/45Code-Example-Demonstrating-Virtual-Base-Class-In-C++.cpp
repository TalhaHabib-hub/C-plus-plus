/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;
/*
student --> Test
student --> sports
test --> result
sport --> result

*/
class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){ // this will set the rollnumber
            roll_no = a;
        }
        void print_number(void){ // this will print rollnumber
            cout<<"your roll no is :"<<roll_no<<endl;
        }
};

class Test : virtual public student{// student --> Test
    protected:
        float maths, physics;// roll_no <-- also *
    public:
    // "void set_number(int a)" <-- also *
    // "void print_number(void)" <-- also *
        void set_marks(float m1, float m2){ // this will take marks of math and physics and also have the ability to perform the tasks of the student class
            maths = m1;
            physics = m2;
        }

        void print_marks(void){// this will print math and physics marks
            cout<<"Your result is here: "<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
        }
};

class sports: virtual public student{// student --> sports ,// this will take marks of pt and also have the ability to perform the tasks of the student class
    protected:
        float score;// roll_no <-- also *
    public:
    // "void set_number(int a)" <-- also *
    // "void print_number(void)" <-- also *
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }

};
// the class which has the power to do the works of the derived class of the student (test and sport and obviously of the student class)
class Result : public Test, public sports{//'test --> result & sport --> result' (result <--" result & sport")
 // the one which are marked as staric'*' are the one which were in both of the base class of this one still not inherited twice because we had inherited the parents of this class as virtual
    private:
        float total;// math, physics,score* <-- also
    public:
    // void set_number(int a) <-- also *
    // void print_number(void) <-- also *
    // void set_marks(float m1, float m2) <-- also 
    // void print_marks(void) <-- also 
    // void set_score(float sc) <-- also 
    // void print_score(void)  <-- also 
       void display(void){
            total = maths + physics + score;
            print_marks();
            print_number();
            print_score();
            cout<<"your total score is: "<<total<<endl;
        }
};
int main(){
    Result Talha;
    Talha.set_number(4245);
    Talha.set_marks(87.3,99.9);
    Talha.set_score(19);
    Talha.display();
    return 0;
}