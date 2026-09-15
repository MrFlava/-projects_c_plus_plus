# include <iostream>

class Stove{
    private:
        int temperature = 0;

    public:
        int getTemperature() {
            return temperature;
        }
        Stove(int temperature) {
            setTemperature(temperature);
        }
        void setTemperature(int temp) {
            if (temp >= 0 && temp <= 300) {
                temperature = temp;
            } else {
                std::cout << "Temperature must be between 0 and 300 degrees." << std::endl;
            }
        }
};

int main(){
    Stove stove(2000);
    std::cout << "Stove temperature: " << stove.getTemperature() << std::endl;
    return 0;
}