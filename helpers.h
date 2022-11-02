#ifndef HELPERS_H_
#define HELPERS_H_

#include <string>
#include <vector>
#include <fstream>

typedef struct PhysicalVector2D {
	std::vector<double> x;
	std::vector<double> y;
} PhysicalVector2D;

typedef struct Constants {
	int num_particles;
	int box_size;
	int num_steps;
	int write_interval;
	double delta_t;
	double softening;
	double gravity;
	double particle_mass;
	PhysicalVector2D init_pos;
} Constants;

void parse_constants(std::string filename, Constants &constants);

void write_positions(std::ofstream &output_file, PhysicalVector2D &positions, Constants constants);

void gen_random_points(Constants &constants);


#endif