#include <iostream>
#include <string>
using namespace std;

class Cricketer 
{
    protected:
        string name;
        int age;
        string team;
    
    public:
        void inputData() 
        {
            cout << "Enter player name: ";
            cin >> name;
            cout << "Enter player age: ";
            cin >> age;
            cout << "Enter player team: ";
            cin >> team;
        }
        
        void displayData() 
        {
            cout << "Player name: " << name << endl;
            cout << "Player age: " << age << endl;
            cout << "Player team: " << team << endl;
        }
};

class Batsman : public Cricketer 
{
    private:
        int totalRuns;
        double averageRuns;
        int bestPerformance;
    
    public:
        void inputData() 
        {
            Cricketer::inputData();
            cout << "Enter total runs: ";
            cin >> totalRuns;
            cout << "Enter best performance: ";
            cin >> bestPerformance;
        }
        
        void calculateAverageRuns() 
        {
            averageRuns = static_cast<double>(totalRuns) / 10;
        }
        
        void displayData()
        {
            Cricketer::displayData();
            cout << "Total runs: " << totalRuns << endl;
            cout << "Average runs: " << averageRuns << endl;
            cout << "Best performance: " << bestPerformance << endl;
        }
};

int main() 
{
    Batsman player1;
    player1.inputData();
    player1.calculateAverageRuns();
    player1.displayData();

    return 0;
}
