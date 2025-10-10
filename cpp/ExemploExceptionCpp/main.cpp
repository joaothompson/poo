#include <exception>
#include <iostream>

class ZeroDivision : public std::exception {
    public:
        // Constructor that takes a message
        int numerador;
        ZeroDivision(const int numerador, const std::string& message) : errorMessage(message), numerador(numerador) {}

        // Override the what() method to return the custom message
        const char* what() const noexcept override {
            return errorMessage.c_str();
        }

    private:
        std::string errorMessage;
};



double dividir(double numerador, double denominador)
{
    if(denominador==0) throw ZeroDivision(5, "Divisao por zero.");
    return numerador/denominador;
}

int main()
{
    try
    {
        dividir(5, 0);
    }
    catch(const ZeroDivision& e)
    {
        std::cerr << "Numerador: " << e.numerador << "; " << e.what() << '\n';
    }
    return 0;
}




