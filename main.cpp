#include<iostream>
using namespace std;
class Job{
    private:
        int salary;

    public:
        void setSalary(int s){
            salary=s;
        }

        int getSalary(){
            return salary;
        }
};
int main(){
    Job job;
    job.setSalary(100000);
    cout<<"Salary : "<<job.getSalary()<<endl;
};

