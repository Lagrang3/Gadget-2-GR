#pragma once
// --------------------------------------- Basic operation mode of code
#define PERIODIC 
// #define UNEQUALSOFTENINGS


// --------------------------------------- Things that are always recommended
#define PEANOHILBERT
#define WALLCLOCK   


// --------------------------------------- TreePM Options
#define PMGRID 128
// #define PLACEHIGHRESREGION 3
// #define ENLARGEREGION 1.2
// #define ASMTH 1.25
// #define RCUT 4.5


// --------------------------------------- Single/Double Precision
// #define DOUBLEPRECISION      
// #define DOUBLEPRECISION_FFTW      


// --------------------------------------- Time integration options
#define SYNCHRONIZATION
// #define FLEXSTEPS
// #define PSEUDOSYMMETRIC
// #define NOSTOP_WHEN_BELOW_MINTIMESTEP
// #define NOPMSTEPADJUSTMENT


// --------------------------------------- Output 
// #define HAVE_HDF5  
// #define OUTPUTPOTENTIAL
// #define OUTPUTACCELERATION
// #define OUTPUTCHANGEOFENTROPY
// #define OUTPUTTIMESTEP


// --------------------------------------- Things for special behaviour
// #define NOGRAVITY     
// #define NOTREERND 
#define NOTYPEPREFIX_FFTW        
// #define LONG_X 60
// #define LONG_Y 5
// #define LONG_Z 0.2
// #define TWODIMS
// #define SPH_BND_PARTICLES
// #define NOVISCOSITYLIMITER
// #define COMPUTE_POTENTIAL_ENERGY
#define LONGIDS
// #define ISOTHERM_EQS
// #define ADAPTIVE_GRAVSOFT_FORGAS
// #define SELECTIVE_NO_GRAVITY 2+4+8+16

// --------------------------------------- Testing and Debugging options
// #define FORCETEST 0.1


// --------------------------------------- Glass making
// #define MAKEGLASS 262144
