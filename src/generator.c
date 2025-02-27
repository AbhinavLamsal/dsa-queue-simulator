#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "traffic_simulation.h"

void writeVehicleToFile(FILE *file, Vehicle *vehicle) {
    fprintf(file, "%f %f %d %d %d %d %d\n", 
            vehicle->x, vehicle->y, 
            vehicle->direction, 
            vehicle->type, 
            vehicle->turnDirection, 
            vehicle->state, 
            vehicle->speed);
}

int SDL_main(int argc, char *argv[]) {
    srand(time(NULL));// Initialize random seed using the current time.
    FILE *file = fopen("bin/vehicles.txt", "w");
    if (!file) {
        perror("Failed to open vehicles.txt");
        return 1;
    }

    printf("Vehicle generation started...\n");  // Debug statement indicating the start of vehicle generation.
    while (1) {
        // Generation of a new vehicle
        Direction spawnDirection = (Direction)(rand() % 4);
        Vehicle *newVehicle = createVehicle(spawnDirection);

        printf("Generated vehicle at direction: %d\n", spawnDirection); // Debug message showing the direction of the newly generated vehicle.

        // Write the vehicle data to the file
        writeVehicleToFile(file, newVehicle);
        fflush(file); // Immediately write the data to the file.


        // Free the vehicle memory
        free(newVehicle);

           // Introduce a small delay before creating the next vehicle
        SDL_Delay(500); // 0.5 seconds delay
    }

    //vehicle gen delay added
    printf("Vehicle generation loop ended.\n"); // Debug print (3rd extra line)
    
    fclose(file);// Close the file after finishing the data logging.
    printf("File closed successfully.\n"); // Debug print (4th extra line)
    
    return 0;
}
