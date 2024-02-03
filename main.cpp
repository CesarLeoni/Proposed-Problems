#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include<set>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Angajat{
private:
    string nume;
    string prenume;
    int salariu;

public:
    Angajat(const string &nume, const string &prenume, int salariu) : nume(nume), prenume(prenume), salariu(salariu) {}

    const string &getNume() const {
        return nume;
    }

    const string &getPrenume() const {
        return prenume;
    }

    int getSalariu() const {
        return salariu;
    }

    bool operator<(const Angajat &rhs) const {
        return salariu > rhs.salariu;
    }

};

int main()
{char cerinta;
    cin>>cerinta;

    if(cerinta=='a') {
        int n, Min = INT_MAX, Max = INT_MIN,x;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> x;
            if(x<Min)
                Min=x;

            if(x>Max)
                Max=x;
        }

        double Rad_max=sqrt((double)Max);
        double Pow_min=pow(Min,2);

        cout<<fixed<<setprecision(2)<<max(Rad_max,Pow_min);

    }else if(cerinta=='b'){
        set<string> nume;
        string un_nume;

        while(cin>>un_nume){
            nume.insert(un_nume);
        }

        for(auto it=nume.rbegin();it!=nume.rend();it++)
        {
            cout<<*it<<' ';
        }

    }else if(cerinta=='c'){
        int n;
        double x,suma=0,media;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>x;
            suma+=x;
        }

        media=suma/n;

        vector<double> mai_mari_decat_media;
        int cate=0;
        while(cin>>x){
            if(x<media)
                cate++;
            else if(x>media)
                mai_mari_decat_media.push_back(x);
        }

        cout<<fixed<<setprecision(2)<<cate<<endl;

        for(double i:mai_mari_decat_media)
            cout<<i<<' ';

    }else if(cerinta=='d'){

        string afisare[]={"NU","DA"};
        vector<Angajat> angajati;
        string nume,prenume;
        int salariu,salariu1,salariu2;

        while(cin>>nume>>prenume>>salariu){
            getchar();
            angajati.emplace_back(nume,prenume,salariu);
        }

        salariu1=angajati[0].getSalariu();
        sort(angajati.begin(),angajati.end());
        salariu2=angajati[0].getSalariu();

        for(const struct Angajat& A:angajati){
            cout<<A.getNume()<<" "<<A.getSalariu()<<endl;
        }

        cout<<afisare[salariu1==salariu2];

    }else if(cerinta=='e'){
        getchar();
        string numele_tau;
        string numele_sefului;

        getline(cin,numele_tau);
        getline(cin,numele_sefului);

        string s;
        getline(cin,s);

        auto i=s.find(numele_tau);

        s.replace(i,numele_tau.size(),numele_sefului);

        cout<<s;
    }
    return 0;
}