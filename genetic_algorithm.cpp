// Genetic Algorithm in C++


#include <cmath>
#include <iostream>
#include <bits-stdc++.h>
#include <cstdlib>
#include<math.h>
using namespace std;
double pi = 2*acos(0.0);
vector<vector<int>> limit(2,vector<int>(2,0));
int penalty;
class prnt
{
    

    int x;
    int y;

    public:
    prnt(int a, int b){
        x=a;
        y=b;
    }

    int getx(){
        return x;
    }

    int gety(){
        return y;
    }

};

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}


int rastrigin(prnt a){

    int fitness =0;
    
    float sum = 0;
    
    sum += pow(a.getx(), 2) - 10 * cos(2 * M_PI * a.getx());
    sum += pow(a.gety(), 2) - 10 * cos(2 * M_PI * a.gety());

    fitness = 10 * 2 + sum;

    if(limit[0][0]<= a.getx()<=limit[0][1] && limit[1][0]<= a.gety() <= limit[1][1]){
        return fitness;
    }else{
        fitness += penalty;
        return fitness; 
    }

}
int sphere(prnt a){
    int fitness = fitness = pow(a.getx(), 2) + pow(a.gety(), 2);
    if(limit[0][0]<= a.getx()<=limit[0][1] && limit[1][0]<= a.gety() <= limit[1][1]){
        return fitness;
    }else{
        fitness += penalty;
        return fitness; 
    }

}

int rosenbrock(prnt a){
    int fitness = 100 * pow(a.gety() - pow(a.getx(), 2), 2) + pow(1 - a.getx(), 2);
       if(limit[0][0]<= a.getx()<=limit[0][1] && limit[1][0]<= a.gety() <= limit[1][1]){
        return fitness;
    }else{
        fitness += penalty;
        return fitness; 
    }
}

int ackley(prnt a){
    int fitness = -20 * exp(-0.2 * sqrt(0.5 * (pow(a.getx(), 2) + pow(a.gety(), 2)))) - exp(0.5 * (cos(2 * M_PI * a.getx()) + cos(2 * M_PI * a.gety()))) + exp(1) + 20;
     if(limit[0][0]<= a.getx()<=limit[0][1] && limit[1][0]<= a.gety() <= limit[1][1]){
        return fitness;
    }else{
        fitness += penalty;
        return fitness; 
    }
}


int fitness(prnt a,int ft){
    if(ft==1){
        return rastrigin(a);
    }
    if(ft==2){
        return ackley(a);
    }
    if(ft==3){
        return sphere(a);
    }
   
     return rosenbrock(a);
   
}


int main(){
    
    int genration;
    cout<<"enter the number of genration:";
    cin>>genration;
  

    cout<<"Enter the lower limit of x:";
    cin>>limit[0][0];

    cout<<"Enter the upper limit of x:";
    cin>>limit[0][1];
    
    cout<<"Enter the lower limit of y:";
    cin>>limit[1][0];

    cout<<"Enter the upper limit of y:";
    cin>>limit[1][1];

    cout<<"enter the value of penalty:";
    cin>>penalty;

    cout<<"Enter fitness function to use \n\t1 -> Rastrigin\n\t2 -> Ackley\n\t3 -> Sphere\n\t4 -> Rosenbrock\n: ";
    int ft;
    cin>>ft;


    prnt best_prnt(0,0 );
    int best_prntl_fitness = 0;
    int avg_prntl_fitness = 0;
    int pop_size=4;
    int bit_size =8;

    vector<prnt> population;

    for (int i = 0; i < pop_size; i++)
    {   
        int x = rand()%255;
        int y = rand()%255;
        prnt a(x,y);
        population.push_back(a);

    }
    int g=0;
    while (g<genration)
    {
        g++;
        int fs=0;
            cout<<"  x   y   fitness"<<endl;
        for (int i = 0; i < pop_size; i++)
        {
            int ft=fitness(population[i],ft);
            if(ft>best_prntl_fitness){
                best_prnt = population[i];
                best_prntl_fitness=ft;
            }
            cout<<population[i].getx()<<" "<<population[i].gety()<<" "<<ft<<endl;
            fs+=ft;
         

        }
        avg_prntl_fitness=fs/pop_size;
        cout<<"Genration:"<<g<<" avg fitness:"<<avg_prntl_fitness<<" ,best fitness:"<<best_prntl_fitness<<", best prnt value: x="<<best_prnt.getx()<<" y="<<best_prnt.gety()<<endl<<endl;
        


        vector<vector<prnt>> tournament;

        for (int i = 0; i < pop_size; i++)
        {
            vector<prnt> a;
            a.push_back(population[rand()%4]);
            a.push_back(population[rand()%4]);
            tournament.push_back(a);
        }
        
        vector<prnt> mating_pool;

        for (int i = 0; i < tournament.size(); i++)
        {
            if(fitness(tournament[i][0],ft) >fitness(tournament[i][1],ft)){
                mating_pool.push_back(tournament[i][0]);
            }else{
                mating_pool.push_back(tournament[i][1]);
            }
        }

        vector<prnt> offspring;   
        prnt p1 = mating_pool[rand()%4];
        prnt p2 = mating_pool[rand()%4]; 
        prnt p3 = mating_pool[rand()%4]; 
        prnt p4 = mating_pool[rand()%4]; 

        // crossover

        string s1 = bitset<8> (p1.getx()).to_string() + bitset<8> (p1.getx()).to_string();
        string s2 = bitset<8> (p2.getx()).to_string() + bitset<8> (p2.getx()).to_string();

        int crosspoint = rand()%16;
        

        string offspring1 = s1.substr(crosspoint,s1.length()-crosspoint) + s2.substr(0,crosspoint);
        string offspring2 = s2.substr(crosspoint,s1.length()-crosspoint) + s1.substr(0,crosspoint);

        // mutation

        int mutation_point1 = rand()%8;
        int mutation_point2 = rand()%8;

        if(offspring1[mutation_point1]=='0')offspring1[mutation_point1]='1';
        else offspring1[mutation_point1]='0';

        if(offspring2[mutation_point2]=='0')offspring2[mutation_point2]='1';
        else offspring2[mutation_point2]='0';

        
        prnt o1(binaryToDecimal(offspring1.substr(0,8)),binaryToDecimal(offspring1.substr(8,8)));
        prnt o2(binaryToDecimal(offspring2.substr(0,8)),binaryToDecimal(offspring2.substr(8,8)));

        offspring.push_back(o1);
        offspring.push_back(o2);
        offspring.push_back(p3);
        offspring.push_back(p4);
        
        population = offspring;

    }
}
