#include <iostream> 

using namespace std;

int main() {
    int rep;
    cin>> rep;
    float N[rep] {};
    float sum;
    
    
    for(int i = 0; i < rep; i++){
        cin>>N[i];         
        sum+=N[i];  
    }

    int contNotas;

    for(int i = 0; i < rep; i++){
       if(N[i]>sum/rep){
            contNotas++;
        }   

    }

     cout<<contNotas<<endl;

    return 0;
}