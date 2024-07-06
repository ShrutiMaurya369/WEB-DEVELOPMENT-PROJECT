
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    char sfname[40],dfname[40],ch;
    cout<<"Enter source file name";
    cin>>sfname;
    cout<<"Enter destination file name";
    cin>>dfname;
    ifstream ip;
    ip.open(sfname);
    ofstream of;
    of.open(dfname);
    
    while(!ip.eof()){
        ch=ip.get();
        of<<ch;
    }
    ip.close();
    of.close();
    cout<<"work completed";
    
    return 0;
}