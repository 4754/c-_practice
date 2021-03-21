 //c++ TEMPLATE
#include<bits/stdc++.h>
using namespace std;


// normal search function

template<class T> //templete for generic programming
                  // instead of class we can also write typename
int Search(T arr[],int size,T key){
    for(int i = 0 ; i<size;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;,
}

// templete + iterator search function;
template<class forward , class T>
forward search(forward start , forward end , T key){  // how iterator function is written in stl
    while(start != end){
        if(*start == key){
            return start;
        }
        start++;
    }
    return end;
}


search function with template + iterator + compare function
template<class forward , class T , class Compare >
forward search(forward start , forward end , T key , Compare cmp){  // how iterator function is written in stl
    while(start != end){
        if(cmp(*start ,key)){
            return start;
        }
        start++;
    }
    return end;
}


class Book{
    public:
    string name;
    int price;
    Book(string N,int p): name(N),price(p){
    }
    Book(){

    }
};


class Bookcmp{
    public:
    bool operator () (Book a, Book b){
        if(a.name == b.name){
            return true;
        }
        else {
            return false;
        }
    }
};





int main(){
    // int arr[] = {1,2,3,4};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int key = 3;
    // cout<<Search(arr,size,key)<<"\n";

    // char a[] = {'a','b','c'};
    // cout<<Search(a,3,'a')<<"\n";

    vector<char> l;
    l.push_back('a');
    l.push_back('b');
    l.push_back('c');
    l.push_back('d');
    auto it = search(l.begin(),l.end(),'c');// here it is of format std:: list<chat> :: iterator ;
    if( it == l.end()){
        cout<<"not found\n";
    } else{
        cout<<*it<<"\n";
    }
    Book b1("c++",100);
    Book b2("python",120);
    Book b3("java",130);
    Book b4(b1);
    list<Book> b;
    b.push_back(b1);
    b.push_back(b2);
    b.push_back(b3);
    b.push_back(b4);
   // b.push_back(b1);
   Book key("c++",100);

   Bookcmp cmp;
  auto it1 = search(b.begin(),b.end(),key,cmp);

   if( it1 != b.end()){
      cout<<"book found\n";
  }
  else{
      cout<<"not found\n";
  }
 
}


// // passing function to a function
// #include<bits/stdc++.h>
// using namespace std;

// bool cmp(int a,int b){
//     return a==b;
// }

// void s(auto start,auto end,int key, bool(&cmp)(int a,int b)){  // imp
//                                                                // passing function to a function;
//     for(start;start<end;start++){
//         if(cmp(*start,key)){
//             cout<<"found\n";
//             break;
//         }
//         start++;
//     }
// }

// int main(){

//     vector<int> v = {4,2,6,7,1};
//     s(v.begin(),v.end(),6,cmp);
// }
