# 🚧 Traffic Flow Simulator

A real-time simulation of traffic management, demonstrating the use of queue data structures and real-world traffic control mechanisms. Features a variety of vehicles, signalized intersections, and priority-based queue handling.

![Traffic Simulation Demo](working_demo.gif)

## ✨ Features

-🚗 Real-time simulation of a 4-way intersection
-🚓🚑🚒 Support for different vehicle types with priority handling
-🚦 Automated traffic light system
-🔄 Vehicles can turn left, right, or continue straight
-🎯 Queue-based traffic management system

## ⚙️ Prerequisites

You'll need:

-🖥️ GCC/G++ compiler
-🎮 SDL2 library
-🏗️ MinGW (for Windows users)

### 🛠 Installing SDL2

#### Windows Users:
1.🔗 Download SDL2
2.📂 Extract the contents into your project folder
3.🏗 Create necessary folders if they're not already there:
-include/ (for header files)
-lib/ (for library files)
-bin/ (for executable files)

## 📂 Project Structure

```
DSA-Queue-Simulator/
├── include/          # Header files
├── lib/              # Library files
├── src/              # Source files
├── bin/              # Executables
└── README.md
```

## 🏗️ Building the Project

1. Clone the repo:
```bash
git clone https://github.com/zen4FR/dsa-queue-simulator.git
cd DSA-Queue-Simulator
```

2. Compile:
```bash
g++ -Iinclude -Llib -o bin/main.exe src/main.c src/traffic_simulation.c -lmingw32 -lSDL2main -lSDL2
```

```bash
g++ -o bin/generator src/generator.c src/traffic_simulation.c -lSDL2 -Iinclude -Llib -lmingw32 -lSDL2main -lSDL2
```

## ▶️ Running the Simulation

1. Start the vehicle generator:
```bash
./bin/generator
```
2. In another terminal, start the main simulation:
```bash
./bin/main
```
3. 🚗 Observe vehicles navigating the intersection!
4. ❌ Close the window by clicking the close button (X).

## 🚙 Vehicle Types
-🔵 Standard vehicles
-🔴 Ambulances
-🔷 Police vehicles
-🟠 Fire trucks

## 🏁 Traffic Management

-🚦 Queue System: Each lane has its own dedicated queue.
-🚨 Priority Handling: Emergency vehicles are given priority.
-Traffic Light Cycles: Red/green light transitions occur automatically.
-🔁 Turn Management: Vehicles can choose to turn left, right, or go straight.

## 📜 Code Highlights

### Queue Data Structure
```c
typedef struct Node {
    Vehicle vehicle;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
    int size;
} Queue;
```

### Vehicle States
```c
typedef enum {
    STATE_MOVING,
    STATE_STOPPING,
    STATE_STOPPED,
    STATE_TURNING
} VehicleState;
```

## 🤝 Contributing

1.🍴 Fork the repo
2.🌿 Create a new branch (git checkout -b feature/YourFeature)
3.💾 Commit your changes (git commit -m 'Add YourFeature')
4.🚀 Push your branch (git push origin feature/YourFeature)
5.🔥 Open a pull request

## 📚 References
-📖 SDL2 Documentation
-📘 CLRS: Data Structures for Queues
-🚗 Highway Capacity Manual (Theory of Traffic Flow)

## 🙌 Acknowledgments
-❤️ SDL2 Development Team
-🔬 Traffic Simulation Research Community
-🎯 Project Contributors & Testers


