#include <iostream>
using namespace std;
int main() {
    int area_1,area_2,area_3,area_4,area_5;

    int veg;
    cout << "------------------------------------------------\n";
   cout << "------------------------------------------------\n";
   cout << "Welcome to Ron Farm Area Complex\n";
   cout << "------------------------------------------------\n";
   cout << "------------------------------------------------\n";
   //farm Area in acres
   cout << "Enter farm area\n";
   cout << "Farm_Area1: \n";
   cin >> area_1;
    cout << "Farm_Area2: \n";
    cin >> area_2;
    cout << "Farm_Area3: \n";
    cin >> area_3;
    cout << "Farm_Area4: \n";
    cin >> area_4;
    cout << "Farm_Area5: \n";
    cin >> area_5;
    //total farm area
    int total_area = area_1+area_2+area_3+area_4+area_5;
    cout << total_area << endl;
    cout << "The total farm area is " << total_area <<" acres" << endl;
    //vegetable type either one or two
    cout << "Enter vegetable type (1 OR 2): \n";
    cin >> veg;
    if (veg==2){
      cout << "You have 60% portion of farmland \n";

    } else{
        cout << "You have 40% portion of farmland\n";

    }
    //total cost
    float seed_cost;
    cout << "Enter seed cost\n";
    cin >> seed_cost;
    cout << "Seed cost is $ " << seed_cost <<".00" << endl;
    float plantation_cost;
    cout << "Enter plantation cost\n";
    cin >> plantation_cost;
    cout << "plantation cost is $ " << plantation_cost <<".00" << endl;
    float fertilizing_cost;
    cout << "Enter fertilizing cost\n";
    cin >> fertilizing_cost;
    cout << "fertilizing cost is $ " << fertilizing_cost <<".00" << endl;
    float labour_cost;
    cout << "Enter labour cost\n";
    cin >> labour_cost;
    cout << "labour cost is $ " << labour_cost <<".00" << endl;
   float Total_cost = seed_cost+plantation_cost+fertilizing_cost+labour_cost;
   cout << Total_cost <<endl;
   cout << "Total cost is $ " << Total_cost << endl;
   //selling price per acre
    float selling_price;
    cout << "Enter selling price per acre\n";
    cin >> selling_price;
    cout << "selling price per acre is $ " << selling_price << endl;
    //Total revenue
    float Total_revenue = Total_cost  * selling_price;
    cout << Total_revenue << endl;
    cout << "Your total revenue is $ " << Total_revenue << endl;
 //profit and loss

float cost_price;

cout << "Enter cost price of vegetable\n";
cin >> cost_price;
cout <<"$" << cost_price << endl;
    float profit = selling_price - cost_price;
    float loss = cost_price - selling_price;
if (selling_price>=cost_price){
    cout << "profit\n";
    cout << "$" <<  profit << endl;
} else{
    cout << "loss\n";
    cout <<"$" << loss << endl;
}
    cout << "------------------------------------------------\n";
    cout << "------------------------------------------------\n";
    cout << "------------------------------------------------\n";
    cout << "------------------------------------------------\n";



    return 0;
}
