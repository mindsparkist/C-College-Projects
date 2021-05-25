#include<iostream>
using namespace std;
// creating classes
class cars
{
private:
    // Data Members;
    string company_name;
    string model_name;
    string fuel_type;
    float  mileage; // 4 byte
    double car_price; // 8 byte
public:

    // Default Constructor
    cars()
    {
        cout << "Default Constructor Is Called" << endl;
    }
    // Parameterised Constructor
    cars(string cname, string mname, string ftype, float mlg, double cprice)
    {
        cout << "Running P Constructor" << endl;
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = mlg;
        car_price = cprice;
    }
    // Copy Constructor
    cars(cars &obj)
    {
        cout << "Running Copy Constructor" << endl;
        company_name = obj.company_name;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        car_price = obj.car_price;
    }
    // Setting Data Values
    void setData(string cname, string mname, string ftype, float mlg, double cprice)
    {
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = mlg;
        car_price = cprice;
    }


    // Displaying Values
    void showData()
    {
        cout << "Car Properties" << endl;
        cout << "Company name : " << company_name << endl;
        cout << "Company Model : " << model_name << endl;
        cout << "Fuel Type :" << fuel_type << endl;
        cout << "Mileage : " << mileage << endl;
        cout << "Car Price :" << car_price << endl;
    }
    // Desctructor Is Called
    ~cars(){
     cout << "Desctructor Is Called" << endl;
    }
};
int main()
{
    cars car1("Apple","icar","Electric",15.5,300000.254),car2,car3=car1;
    //car1.setData("Honda","I10","petrol",15.5,120056.362);
    car1.showData();
    cout << "2nd Object" << endl;
    car2.setData("Tesla","m","Electric",15.5,300000.254);
    car2.showData();
    cout << "3rd Object" << endl;
    //car3 = car1; // copy constructor
    car3.showData();
    return 0;
}
