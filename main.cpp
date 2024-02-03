#include <iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<stack>
#include<queue>

using namespace std;

class ClasaMea{
private:
    double x;
    double y;

public:
    double getX() const{
        return x;
    }
    double getY() const{
        return x;
    }

    void setX(double noulX){
        this->x=noulX;
    }
    void setY(double noulY){
        this->y=noulY;
    }
};

struct StructulMeu{
    double x;
    int n;
    string sir;
};

struct Om{
    string nume;
    double salariu;
    int varsta;
};

struct Angajat{
    string nume;
    double salariu;
    int varsta;
};

int main() {
int n;
double x;
string s;

char cerinta;//a,b,c,d,e
string cerint;//"xyz","abc"
    cin>>cerinta;

    if(cerinta=='a')
    {
        //cod pt cerinta a
    }else if(cerinta=='b'){
        //cod pt cerinta b
    }

   ///VECTORI
    vector <int> vectorul_meu;

    while(cin>>n)
        vectorul_meu.push_back(n);

    for(int i=0;i<vectorul_meu.size();i++)
        cout<<vectorul_meu[i]<<endl;

    for(int i : vectorul_meu)
        cout<<i<<endl;

    ///SETURI
    set <int> setul_meu;

    while(cin>>n)
        setul_meu.insert(n);

    for(set<int>::iterator i=setul_meu.begin();i!=setul_meu.end();i++)
        cout<<*i<<endl;

    for(auto i=setul_meu.begin();i!=setul_meu.end();i++)
        cout<<*i<<endl;

    for(int i:setul_meu)
        cout<<i<<endl;

    ///MAPURI
    map<int,string> mapul_meu;// nu unordered_map
    map<string,vector<int>> map_nebun;
    //<cheie,valoare>
    //map e deja ordinat in fct de cheie

    while(cin>>n>>s)
        mapul_meu[n]=s;

    for(auto i:mapul_meu)
        cout<<"Cheia: "<<i.first<<", Valoarea:"<<i.second<<endl;

    ///GETLINE
    char c = ',';
    string str=",";
    getline(cin,s);//citeste tot randul si consuma new line
    getline(cin,s,',');//citeste tot pana la caracterul c si il consuma

    getchar();//consuma un caracter
    cin.ignore();
    //23,34,49 - cin>>n; getchar();

    ///stack - push,top,pop - stiva - LIFO
    // Example using stack to reverse elements
    stack<int> myStack;
    cout << "Using stack to reverse elements:\n";

    // Push elements onto the stack
    for (int i = 1; i <= 5; ++i) {
        myStack.push(i);
    }

    // Pop and print elements in reverse order
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << "\n\n";

    ///queue - push, front, pop - coada FIFO
    // Example using queue for first-in, first-out (FIFO) processing
    queue<string> myQueue;
    cout << "Using queue for FIFO processing:\n";

    // Enqueue elements into the queue
    myQueue.push("Apple");
    myQueue.push("Banana");
    myQueue.push("Orange");

    // Dequeue and print elements in the order they were enqueued
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << "\n";


    ///CITIRE
    //cand nu stim cate elemente citim
    while(cin>>n){
        //cat timp poate citi n-uri le si citeste, n este int
    }

    //cand stim cate elemente citim
    for(int i=0;i<n;i++){//parcurs de la 0 la n-1, adica n elemente
        cin>>x;
    }

    ///exemplu
    // Nume Prenume, varsta, salariu \n
    string nume, prenume;
    vector<StructulMeu> Oameni;
    struct StructulMeu XX[100];
    int varsta,salariu;

    while(cin>>nume){
        getline(cin,prenume,',');//citeste pana la vircula si consuma virgula
        cin>>varsta;
        getchar();//consuma virgula
        cin>>salariu;
        getchar();//consuma '\n' de la finalul randului

        struct StructulMeu om;
        om.sir=nume;
        Oameni.push_back(om);
        Oameni[1].sir="";//goleste string-ul sir al [1]

        XX[1].sir=nume;//in loc de 1 se foloseste un i care trece prin toate valorile vectorului
        //cat timp poate citi n-uri le si citeste, n este int
    }

    ///sortare dupa mai multe criterii
    vector<Om> Oameni2;

    for(int i=0;i<Oameni2.size();i++)//.size() returneaza dimensiunea vectorului 0,1,2,....,7 - dimensiunea e 8
        for(int j=i+1;j<Oameni2.size();j++)//i e mereu mai mic decat j
        {
            if (Oameni2[i].nume >
                Oameni2[j].nume) {//ordonam crescator dupa nume (cand gasim 2 ordonati gresit dam swap)
                    swap(Oameni2[i], Oameni2[j]);//schimbam intre ele structurile de oameni
            } else if (Oameni2[i].nume == Oameni2[j].nume &&
                       Oameni2[i].salariu > Oameni2[j].salariu) {//ordonam dupa salariu
                swap(Oameni2[i], Oameni2[j]);
            }else if (Oameni2[i].salariu == Oameni2[j].salariu &&
                      Oameni2[i].varsta > Oameni2[j].varsta){
                swap(Oameni2[i], Oameni2[j]);
            }
        }

    ///exemplu de citire vector de struct
    // la intrare: nume varsta salariu
    vector<Angajat> toti_angajatii;

    while(cin>>nume){
        cin>>varsta>>salariu;

        struct Angajat un_angajat;
        un_angajat.nume=nume;
        un_angajat.salariu=salariu;
        un_angajat.varsta=varsta;

        toti_angajatii.push_back(un_angajat);
    }

    return 0;
}
