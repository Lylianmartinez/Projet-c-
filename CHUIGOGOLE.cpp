#include <iostream>
#include <string>

class Vehicule {
public:
 
    virtual void demarrer() = 0;

    void arreter() {
        std::cout << "Le véhicule est arrêté." << std::endl;
    }
};

class Voiture : public Vehicule {
private:
    std::string marque;
    std::string modele;

public:
   
    Voiture(std::string m, std::string mod) : marque(m), modele(mod) {}

   
    void demarrer() override {
        std::cout << "La voiture de marque " << marque << " et de modèle " << modele << " démarre." << std::endl;
    }
};

int main() {
    
    Voiture maVoiture("Toyota", "Yaris");
    maVoiture.demarrer(); 
    maVoiture.arreter();  

    return 0;
}
