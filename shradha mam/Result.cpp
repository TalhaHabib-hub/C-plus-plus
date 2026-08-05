/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

int english=0,islamiat=0,urdu=0,biology=0,physics=0,pakstudy=0,mutaliaquran=0,chemistry=0,math=0;
void E9_11(int choice){
    int a,b;
    if (choice==1)
    {
        a = 75;
    }else{a = 100;}
    
    cout<<"English:-"<<a<<"\n";
    cin>>english;
    cout<<"Islamiat:-50\n";
    cin>>islamiat;
    cout<<"Biology:-"<<a<<"\n";
    cin>>biology;
    cout<<"Physics:-"<<a<<"\n";
    cin>>physics;
    cout<<"Chemistry:-"<<a<<"\n";
    cin>>chemistry;
    cout<<"Urdu:-"<<a<<"\n";
    cin>>urdu;
    cout<<"Mutaliaqran:-\n";
    cin>>mutaliaquran;
    if (choice == 1)
    {
        cout<<"Pakstudy:-"<<50<<"\n";
        cin>>pakstudy;
        cout<<"Mathematics:-"<<75<<"\n";
        cin>>math;
    }
}   
int result(){
   int total = english+islamiat+urdu+biology+physics+pakstudy+mutaliaquran+chemistry+math;
   return total;
}    
  

void E10_12(int choice){
    int a,b;
    if (choice==2)
    {
        a = 150;
    }else{a = 200;}
    cout<<"English:-"<<a<<"\n";
    cin>>english;
    cout<<"Urdu:-"<<a<<"\n";
    cin>>urdu;
    cout<<"Biology:-"<<a<<"\n";
    cin>>biology;
    cout<<"Physics:-"<<a<<"\n";
    cin>>physics;
    cout<<"Pakstudy:-"<<100<<"\n";
    cin>>pakstudy;
    cout<<"Chemistry:-"<<a<<"\n";
    cin>>chemistry;
    cout<<"Mutaliaqran:-"<<100<<"\n";
    cin>>mutaliaquran;
    if (choice==2)
    {
        cout<<"Mathematics:"<<150<<"\n";
        cin>>math;
        cout<<"Islamiat:"<<100<<"\n";
        cin>>islamiat;
    }
    
    
}
int main(){
    int choice;
    cout<<"         'Calculate 9th,10th,1st and 2nd years marks' "<<endl;
    cout<<"9th -> 1 : "<<endl;
    cout<<"10th -> 2 : "<<endl;
    cout<<"First year -> 3 : "<<endl;
    cout<<"Second year -> 4 : "<<endl;
    cin>>choice;
    if (choice == 1 || choice == 3)
    {
        E9_11(choice);
    }
    if (choice == 2 || choice == 4)
    {
        E10_12(choice);
    }
    if (choice == 1 || choice == 3)
    {
        cout<<"Total: "<<result()<<" /600"<<endl;
        cout<<"Percentage: "<<result()*100/600<<"%"<<endl;
    }
    if (choice == 2 || choice == 4)
    {
        cout<<"Total: "<<result()<<" /1200"<<endl;
        cout<<"Percentage: "<<result()*100/1200<<"%"<<endl;
    }

    
      
    return 0;
}