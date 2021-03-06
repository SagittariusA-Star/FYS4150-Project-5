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

        arma::mat t;

        arma::vec ai_prev = arma::zeros(3);

        int N_bodies;
        int N;
        double dt;
        int datapoints;
        SolarSystem system;

        Nbody();
        Nbody(double years, int NperYr, int writenr, string filename, bool einstein=false, double beta=2);
        Nbody(double years, int NperYr, string filename, bool einstein = false);

        void forward_euler();

        void velocity_verlet();
        void velocity_verlet_mercury();

        void write_pos(string filename, string directory = "", bool binary = false, bool time = false);

        void write_vel(string filename, string directory = "", bool binary = false);

        void write_energis_angmom(string filename, string directory = "", bool binary = false);

    private:
        int NperYr_;
        int years_;
};

#endif
