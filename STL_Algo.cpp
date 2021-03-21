 #include<bits/stdc++.h>
using namespace std;

void Demo_permutate(){
     // Next Permutation
    vector<int> v = {1,2,3};
    cout<<"original vector : " <<  "\n";
        for(int e : v){
        cout<<e<<" ";
    }
    cout<<"\npermutated array : \n";

    next_permutation(v.begin(),v.end()); // gives different permutation of array by changing original array


    for(int e : v){
        cout<<e<<" ";
    }
     cout<<"\npermutated array : \n";

    next_permutation(v.begin(),v.end());


    for(int e : v){
        cout<<e<<" ";
    }
    cout<<"\n";
}

void Demo_rotate(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    cout<<"array org : ";
    for(int e : arr){
        cout<<e<<" ";
    }
    cout<<"\nrotated array : ";

    rotate(arr,arr+n-1,arr+n); // used to rotate containers;
    for(int e : arr){
        cout<<e<<" ";
    }
    cout<<"\n";
}

void Demo_swap(){
    int a = 10;
    int b = 20 ;
    cout<<"Before swapping : ";
    cout<<"a : "<<a<<"  b : "<<b<<"\n";
    swap(a,b);
    cout<<"after Swapping : a : "<<a<<"  b : "<<b<<"\n";
    cout<<"\n";
}

void Demo_reverse(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    cout<<"array org : ";
    for(int e : arr){
        cout<<e<<" ";
    }
    cout<<"\nreversed  array till  "<<n<<" : \n";
    reverse(arr,arr+n);
     cout<<"array reversed : ";
    for(int e : arr){
        cout<<e<<" ";
    }
    cout<<"\n";
}

char *my_strtok(char *str , char delim){
    //String and single character that act as delimiter
    static char* input = NULL; // static variable is intialised only once in function call only and in every subsiquent function call 
                               // state of variable will be same as subsequent function call
                               // To maintain how many token returned we need a ststic variable
    if(str != NULL){
        // we are making the first call
        input = str;
    }

    // check here base cases after the final token has been returned

    if(input == NULL){
        input = str;
    }
    
    //Now we will stsrt extracting token and strore them in a array this array should be used dynamically
    //beacuse even after functio call is over .

    char* output = new char[strlen(input)+1];

    int i = 0;
    for( ;input[i] != '\0';i++){
        if(input[i] != delim){
            output[i] = input[i];
        }
        else {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    //corner case
    output[i] = '\0';
    input = NULL;
    return output;
}

void Demo_string(){
    char s[100] = "Today is a rainy day";

    char *ptr = my_strtok(s,' ');
    cout<< ptr << "\n";
     ptr = my_strtok(NULL,' ');
        cout<<ptr<<"\n";

    while(ptr != NULL){
        ptr = my_strtok(NULL,' ');
        cout<<ptr<<"\n";
    }

}
 string extractStringAtKey(string str,int key){
     char *s = strtok((char *)str.c_str()," ");
     while(key>1){
         s = strtok(NULL," ");
         key--;
     }
     return (string)s;
 }
 int convertToInt(string s){
     int ans = 0;
     int p = 1;
     for(int i = s.length()-1;i>=0;i--){
         ans+=((s[i]-'0')*p);
         p = p*10;
     }
     return ans;
 }
 bool numericCompare(pair<string,string>s1 , pair<string,string>s2){
     string key1 ,key2;
     key1 = s1.second;
     key2 = s2.second;
     return convertToInt(key1)<convertToInt(key2);
 }

 bool lexioCompare(pair<string,string>s1 , pair<string,string>s2){
     string key1 ,key2;
     key1 = s1.second;
     key2 = s2.second;
     return key1<key2;
 }
 
void Demo_solve(){
    int n;
    cin>>n;
    cin.get();
    string v[n];
    for(int i = 0 ; i < n ; i++){
        getline(cin,v[i]);
    }
    int key;
    string reversal , ordering;
    cin>>key>>reversal>>ordering;

    pair<string,string> strpair[n];

    for(int i = 0 ; i<n ; i++){
        strpair[i].first = v[i];
        strpair[i].second = extractStringAtKey(v[i],key);
    }

    // next we need to sort

    if( ordering == "numeric"){
        sort(strpair,strpair + n ,numericCompare);
    }
    else{
         sort(strpair,strpair + n ,lexioCompare);
    }
    if(reversal == "true"){
        for(int i = 0 ; i < n ; i++){
            swap(strpair[i],strpair[n-i-1]);
        }
    }

    // print output

    for(int i=0;i<n;i++){
        cout << strpair[i].first <<" \n";
    }
}

bool cmp(pair<int,int>p1 , pair<int,int> p2){
    int d1 = (int) sqrt(p1.first * p1.first + p1.second * p1.second);
    int d2 = (int) sqrt(p2.first * p2.first + p2.second * p2.second);
    return d1 < d2;
}


void Demo_set(){
    set<int> s = {1,2,1};
    cout<<s.size()<<"\n";
}

int main(){
   Demo_set();
}