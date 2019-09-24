// #include <iostream>
// #include <fstream>
// #include <vector>

// extern "C" {
// #include <time.h>
// #include <stdlib.h>

// #include <stdio.h>
// #include <unistd.h>
// #include <fcntl.h>
// }

// using namespace std;

// int combo1 (int S[], int size) {
// 	srand((unsigned int)time(NULL)); //seeding the PRNG
// 	// srand(getpid());
// 	int random = 0;
// 	int iterations = 0;

// 	while(1) { //forever loop
// 		int numLess = 0;
// 		int numGreater = 0;

// 		random = (rand())%size; //returns a random integer from 0 to RAND_MAX

// 		iterations++;

// 		for (int i = 0; i < size; i++) {
// 			if (S[i] < S[random]) { //count # of items less than proposed median
// 				numLess++;
// 			}

// 			if (S[i] > S[random]) { //count # of items greater than proposed median
// 				numGreater++;
// 			}

// 			if (numLess == numGreater) { //if # of numbers greater = # of items smaller, you're halfway
// 				return iterations; //confirm that this is the median!
// 			}
// 		}
// 	}
// }

// int combo2 (int S[], int size) {
// 	int numLess = 0;
// 	int numGreater = 0;
// 	int random = 0;

// 	int iterations = 0;
// 	srand((unsigned int)time(NULL));

// 	vector<int> Done; //all the medians we've checked that aren't actually medians
// 	bool leave = 0;


// 	while(1) { //forever loop
// 	random = (rand())%size; //returns a random integer from 0 to RAND_MAX

// 		for (int i = 0; i < size; i++) { //check to see that the median we're looking at isn't in done
// 			if (Done.at(i) == S[random]) {
// 				leave = 1; //so we won't test it
// 			}
// 		}

// 		if (!leave) { //if the value isn't in Done, enter!
// 			iterations++;

// 			numLess = 0; //redeclare these to be equal to 0
// 			numGreater = 0;

// 			for (int i = 0; i < size; i++) {
// 				if (S[i] < S[random]) { //count # of items less than proposed median
// 					numLess++;
// 				}

// 				if (S[i] > S[random]) { //count # of items greater than proposed median
// 					numGreater++;
// 				}

// 				if (numLess == numGreater){ //if # of numbers greater = # of items smaller, you're halfway
// 					return iterations; //confirm that you found a median
// 				}
// 			}

// 			if (numLess != numGreater) {
// 				Done.push_back(S[random]); 
// 			}
// 		}
// 	}

// }

// int combo3 (int S[], int size) {
// 	unsigned int value;
// 	int iterations = 0;

// 	while(1) { //forever loop
// 		int numLess = 0;
// 		int numGreater = 0;

// 		int fd = open("/dev/urandom", O_RDWR); //get ur random number 
// 	    for (int j = 0; j < 10; j++) {
// 	        read(fd, &value, sizeof(value));
// 	    }
// 	    close(fd);

// 	    int random = value%size;

// 	    iterations++;

// 		for (int i = 0; i < size; i++) {
// 			if (S[i] < S[random]) { //count # of items less than proposed median
// 				numLess++;
// 			}

// 			if (S[i] > S[random]) { //count # of items greater than proposed median
// 				numGreater++;
// 			}

// 			if (numLess == numGreater){ //if # of numbers greater = # of items smaller, you're halfway

// 				return iterations; //confirm that this is the median!
// 			}
// 		}
// 	}

// }

// int combo4 (int S[], int size) {
// 	int numLess = 0;
// 	int numGreater = 0;
// 	int random = 0;
// 	int iterations = 0;
// 	unsigned int value;

// 	vector<int> Done; //all the medians we've checked that aren't actually medians
// 	bool leave = 0;

// 	while(1) { //forever loop
// 		int fd = open("/dev/urandom", O_RDWR); //get ur random number 
// 	    for (int j = 0; j < 10; j++) {
// 	        read(fd, &value, sizeof(value));
// 	    }
// 	    close(fd);

// 	    int random = value%size;

// 		for (int i = 0; i < size; i++) { //check to see that the median we're looking at isn't in done
// 			if (Done.at(i) == S[random]) {
// 				leave = 1; //so we won't test it
// 			}
// 		}

// 		if (!leave) { //if the value isn't in Done, enter!
// 			numLess = 0; //redeclare these to be equal to 0
// 			numGreater = 0;

// 			iterations++;
// 			for (int i = 0; i < size; i++) {
// 				if (S[i] < S[random]) { //count # of items less than proposed median
// 					numLess++;
// 				}

// 				if (S[i] > S[random]) { //count # of items greater than proposed median
// 					numGreater++;
// 				}

// 				if (numLess == numGreater){ //if # of numbers greater = # of items smaller, you're halfway

// 					return iterations; //confirm that this is the median!
// 				}
// 			}

// 			if (numLess != numGreater) {
// 				Done.push_back(S[random]); 
// 			}
// 		}
// 	}

// }

int main (const int argc, const char* const argv[]) {
	// int size = 0;
	// cin >> size; //take in the size of the array

	// int S[size] = {0}; //create an int array called S

	// int i = 0;
	// int tmp = 0;

	// while (cin >> tmp) { //while the file is able to read, read it
	// 	S[i] = tmp;//take in input to users array
	// 	i++; //increment i and move thru array
	// }

	// float one = 0; //all your averages
	// float two = 0;
	// float three = 0;
	// float four = 0;

	// int j = 0;
	// while (j < 500) {
	// 	one += combo1(S, size); //sum all the num of iterations
	// 	two += combo2(S, size);
	// 	three += combo3(S, size);
	// 	four += combo4(S, size);

	// 	j++; //increment j
	// }

	// cout << one/500 << endl;
	// cout << two/500 << endl;
	// cout << three/500 << endl;
	// cout << four/500 << endl;

    return 0;
	
}

