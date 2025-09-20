 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include<numeric>
 #include<iterator>
 #include<string>

 using namespace std;

 struct Employee{
    int id;
    string name;
    double salary;
 };
 void displayEmployee(const Employee& emp){
    cout<<"Employee ID: "<<emp.id<<" ,"<<"Name:"<<emp.name<<","<<"Salary:$"<<emp.salary<<endl;//details
 }

 int main(){

vector<Employee>employees={
    
    {2023,"Harry",100000},
    {2024, "Carry",50000},
    {2025, "Raj", 100000},
    {2026, "Tom", 130000},
    {2027, "Jason", 12000,}
    //employee data 
};

sort(employees.begin(),employees.end( ),[](const Employee& e1,const Employee& e2){
    return e1.salary>e2.salary;
});//sorting using stl
cout<<"Employees sorted by salary->Highest to lowest\n";
for_each(employees.begin(),employees.end(),displayEmployee);//for each loop is used for displaying the result from highest to lowest 
    


vector<Employee>highEarners;
copy_if(employees.begin(),
employees.end(),
back_inserter(highEarners),
[](const Employee& e){
    return e.salary>50000;
}
);
cout<<"Employee with higher package:"<<endl;
for_each(employees.begin(),employees.end(),displayEmployee);
    
//total salary of all the employees
double totalSalary=accumulate(employees.begin(),employees.end(),0.0, 
[](double sum,const Employee& e ){
    return sum +e.salary;  
});
cout<<"total salary  is :"<<totalSalary<<endl;


//calculate Average salary 
double averageSalary=totalSalary/employees.size();
cout<<"Average salary of an employee"<<averageSalary<<endl;


//employee with highest salary count
auto highestPaid=max_element(employees.begin(),employees.end(),[](const Employee& e1,const Employee& e2){
return e1.salary<e2.salary;}

);
cout<<"Employee with higher package:"<<endl;
for_each(employees.begin(),employees.end(),displayEmployee);
    



//employee with lowest salary count
auto lowestPaid=min_element(employees.begin(),employees.end(),[](const Employee& e1,const Employee& e2){
    return e1.salary>e2.salary;
});
cout<<"Employee with higher package:"<<endl;
for_each(employees.begin(),employees.end(),displayEmployee);
    

return 0;
 }