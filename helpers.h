#ifndef HELPERS_H
#define HELPERS_H

#define PROBES 3
#define COLORS 20

#include <sys/time.h>
#include <stdbool.h>
#include <stdio.h>
#include <errno.h>

struct response {
	unsigned short id;
	short time;
};

// Calculate average time
int calc_avg_time(short times[PROBES]);

// Function for sending burst of packets
void burst_transmit(int sockfd, char* target, int id, int ttl);

// Function for measuring miliseconds
long long current_timestamp();

// Return color for given route
int get_color(int* colors, int ttl);

// Gruard function for main
bool guard(int sockfd, int argc, char* argv[]);

// Set bash color
void set_color(int color);

// Clear bash color
void clear_color(void);

#endif