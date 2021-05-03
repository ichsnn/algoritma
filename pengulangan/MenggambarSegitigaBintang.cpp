#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int i;
    int j;    
    int N;    

    //ALGORITMA;
    cin>>N;
    cout<<endl;
    cout<<"SEGITIGA 1"<<endl;
    for(i=1;i<=N;i++) {
        for(j=1;j<=i;j++) {            
            if(j<=i) {
                cout<<"*";                
            }
            cout<<" ";
        }
        cout<<endl;
    }    
    cout<<endl;

    cout<<"SEGITIGA 2"<<endl;
    for(i=1;i<=N;i++) {
        for(j=N;j>=i;j--) {
            if(j>=i) {
                cout<<"*";
            } cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"SEGITIGA 3"<<endl;
    for(i=1;i<=N;i++) {
        for(j=1;j<=N;j++) {
            if(j>=i) cout<<"*";
            else cout<<" ";
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"SEGITIGA 4"<<endl;
    for(i=1;i<=N;i++) {
        for(j=N;j>=1;j--) {
            if(j<=i) cout<<"*";
            else cout<<" ";
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    

    int p;
    bool r;

    cout<<"SEGITIGA 5"<<endl;
    for(i=1;i<=N;i++) {
        for(j=1; j<=i; j++) {
            if(j<=i) {
                cout<<"*";
            } cout<<" ";
        }
        if(i==N) {
            r = true;
        }
        cout<<endl;        
        while(r) {
            for(p=1; p<=N-1; p++) {
                for(j=N-1; j>=p; j--) {
                    if(j<=i) {
                        cout<<"*";
                    } cout<<" ";
                }
                cout<<endl;
            }          
            if(j=p) {
                r = false;
            }
        }        
    }   
    cout<<endl; 

    cout<<"SEGITIGA 6"<<endl;
    for(i=1;i<=N;i++) {
        for(j=N; j>=1; j--) {
            if(j>=i) {
                cout<<" ";
            } else cout<<"*";
            cout<<" ";
        }
        if(i==N) {
            r = true;
        }
        cout<<endl;        
        while(r) {
            for(p=N; p>=1; p--) {
                for(j=N; j>=1; j--) {
                    if(j<=p) {
                        cout<<"*";
                    } else cout<<" ";
                    cout<<" ";
                }
                cout<<endl;
            }          
            if(j==p) {
                r = false;
            }
        }        
    } 
    cout<<endl;

    cout<<"SEGITIGA 7"<<endl;
    for(i=N;i>=1;i--) {
        for(j=1;j<=N;j++) {
            if(j>=i) {
                cout<<"*";
            } cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"SEGITIGA 8"<<endl;
    for(i=1;i<=N;i++) {
        for(j=1;j<=N;j++) {
            if(j>=i) {
                cout<<"*";
            } cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;

}