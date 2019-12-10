#ifndef NBODY_H
#define NBODY_H

#include "CelestialBody.h"
#include "SolarSystem.h"

class Nbody{
    public:
        arma::mat x_coords;
        arma::mat y_coords;
        arma::mat z_coords;
        arma::mat center_of_mass;

        arma::mat vx_coords;
        arma::mat vy_coords;
        arma::mat vz_coords;

        arma::mat V_coords;
        arma::mat K_coords;
        arma::mat l_coords;

        arma::vec ai_prev = arma::zeros(3);
        std::vector<CelestialBody> bodies;
        int N_bodies;
        int N;
        double dt;
        int datapoints;
        SolarSystem system;

        Nbody();
        Nbody(double years, int NperYr, int writenr, string filename, bool einstein, double beta);
        Nbody(double years, int NperYr, int writenr, string filename, bool einstein) {Nbody(years, NperYr, writenr, filename, einstein, 2);}

        Nbody(double years, int NperYr, int writenr, string filename){Nbody(years, NperYr, writenr, filename, false, 2);}


        void forward_euler();

        void velocity_verlet();
        
        void write_pos(string filename, bool binary);
        void write_pos(string filename){write_pos(filename, false);}

        void write_vel(string filename, bool binary);
        void write_vel(string filename){write_vel(filename, false);}

        void write_energis_angmom(string filename, bool binary);
        void write_energis_angmom(string filename){write_energis_angmom(filename, false);}
};

#endif
