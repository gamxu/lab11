#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int count;
    double sum,mean,sumofsqr,sdfront,SD;
    string num;
    ifstream source("score.txt");

    while(getline(source,num)){
        sumofsqr += pow(stod(num),2);
        sum += stod(num);
        count++;
    }
    
    sdfront = sumofsqr/count;
    mean = sum/count;
    SD = sqrt(sdfront-pow(mean,2));
    
    cout << "Number of data = " << count <<"\n";
    cout << setprecision(3);
    cout << "Mean = " << mean <<"\n";
    cout << "Standard deviation = " << SD <<"\n";
}
