#include "CelestialBody.h"
#include "SolarSystem.h"
#include "Nbody.h"

int main(int argc, char* argv[]){
    string output_filename = "simulation_";
    string input_filename = "data_";
    for (int i = 1; i < argc; i++) {
        output_filename += argv[i];
        input_filename += argv[i];
        if (i < argc - 1) {
            output_filename += "_";
            input_filename += "_";
        }
        else {
            input_filename += ".txt";
        }
    }
    int Nyr = 100;
    int NperYr = 1e7;

    Nbody MercuryEinstein = Nbody(Nyr, NperYr, "datafiles/" + input_filename, true);
    MercuryEinstein.velocity_verlet_mercury();
    MercuryEinstein.write_pos("MercuryEinsteinLarge", "datafiles/filestaskg/", false, true);

    Nbody MercuryNewton = Nbody(Nyr, NperYr, "datafiles/" + input_filename);
    MercuryNewton.velocity_verlet_mercury();
    MercuryNewton.write_pos("MercuryNewtonLarge", "datafiles/filestaskg/", false, true);
    return 0;
}
