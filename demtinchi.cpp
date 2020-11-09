#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int subnm;
    char opt;
    double dtl = 0;
    double ttl = 0;
    do
    {
    cout << "Number of courses taken: ";
    cin >> subnm;
    for(int i=0;i<subnm;i++){
        double pnt;
        int crd;
        cout << "Course " << i+1 << ": " << endl;
        cout << "Point: ";
        cin >> pnt;
        if(pnt > 0) {
        cout << "Credit number: ";
        cin >> crd;
        ttl += crd;
        dtl += (pnt*crd);
        }
        else
        {
            continue;
        }
        cout << endl;
    }
    double dtbtl = dtl/ttl;
    cout << "Cumulative grade point average: " << setprecision(2) << fixed << dtbtl << endl;
    cout << "Missing any subjects? (Y/N)" << " ";
    cin >> opt;
    }while (opt == 'y'||opt == 'Y');
    return 0;
}



