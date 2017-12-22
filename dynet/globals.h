#ifndef DYNET_GLOBALS_H
#define DYNET_GLOBALS_H

#include <random>

#ifdef HAVE_CUDA
struct curandGenerator_t;
#endif

namespace dynet {

class Device;
class NamedTimer;

extern std::mt19937* rndeng;
extern Device* default_device;
extern NamedTimer timer; // debug timing in executors.

#ifdef HAVE_CUDA
extern curandGenerator_t* rndeng;
#endif

} // namespace dynet

#endif
