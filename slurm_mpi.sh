#!/bin/bash -l
#
#SBATCH --job-name=a2-mpi-4
#SBATCH --nodes=1
#Number of MPI processes
#SBATCH --ntasks=4
#SBATCH --cpus-per-task=1
#SBATCH --mem-per-cpu=1G
#SBATCH --partition=cosc

#You could add these to your bashrc if you wanted
module load mpi/openmpi3_eth
module load gnu

mpiexec ./bh_mpi input/constants.txt &> output_mpi.txt
# mpiexec -n 4 ./test_mpi &> out_test_mpi.txt