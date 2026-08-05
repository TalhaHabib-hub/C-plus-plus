// map is use to store key value pairs

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an assoiciative array
int main(){
    map<string, int> marksMap;
    marksMap["Talha"] = 98;
    marksMap["Mirka"] = 56;
    marksMap["xaks"] = 9;   

    marksMap.insert({{"Habib", 54}, {"Jamsheed", 45}});
    map<string, int> :: iterator iter;
    for (iter = marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl; // first for first item and second for second item
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is : "<<marksMap.empty()<<endl;
    


    return 0;
}