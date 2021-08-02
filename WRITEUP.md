# PID Controller

## Compilation

### Your code should compile.

```bash
mkdir build && cd build
cmake ..
make
```

## Implementation

### The PID procedure follows what was taught in the lessons.

The PID class was completed based on the lessons provided

## Reflection

### Describe the effect each of the P, I, D components had in your implementation.

The P value attempts to steer the car towards the desired direction. If we only set this value (ie `steer_pid.Init(0.15, 0.0, 0.0)`) 
the car will gradually overcorrect and eventually be extremely sporadic. 

The I value is used to eliminate bias in the calculation. When i set the I value to .5 `steer_pid.Init(0.0, 0.5, 0.0);` the car goes in circles.

The D value tries to dampen any overcorrections made. If i set D to 2.0 `steer_pid.Init(0.0, 0.0, 2.0);` the car will not correct its course enough.

### Describe how the final hyperparameters were chosen.

The optimal P, I, and D values are .15, 0.0, and 2.0 `steer_pid.Init(0.15, 0.0, 2.0);`. I chose these through manually tuning / trial and error.

## Simulation

### The vehicle must successfully drive a lap around the track.

The vehicle can do one lap around the track