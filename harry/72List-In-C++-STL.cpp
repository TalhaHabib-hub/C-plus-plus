/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// it is a bidirection list which show deletion and insertion operations clearly
//  in the arrays the elements are stored in contigous memory location after one another the issue here was if there is an array which lets say has many elements if i remove the second array element it would be much work consuming that all the front element would be pushed bach to avoid this much work we use list. arrays are fast to be accessed and list are fast for deletion and insertion

#include<iostream>
#include<list>
using namespace std;

void dispaly(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++) //lst.end()-> gives the reference of the end of the list
    {
         cout<<*it<<" ";
    }
    cout<<endl;
    

}
int main(){
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(12);
    list1.sort();
    dispaly(list1);
    // Removing elements from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);  // it will remove each and every 9 if there are multiple 

    // sorting the list
    // list1.sort();
    // dispaly(list1);

    // Reversing the list
    list1.reverse();
    dispaly(list1);
    
    list<int> list2(3);  // Empty list of size 3, memory is assigned
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    list2.sort();
    dispaly(list2);
    list1.merge(list2);
    cout<<"List 1 after merging: ";
    dispaly(list1);

    return 0;
}