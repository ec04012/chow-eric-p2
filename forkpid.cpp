#include <iostream>
#include <unistd.h>

using namespace std;


/**
 * Prints the pid of this process and its parent.
 * Then forks a child and prints the pid of that process and
 * its parent.
 **/
int main() {
	pid_t pid;

	if ((pid = fork()) < 0) {
		perror("FORK ERROR");
	} else if (pid == 0) { // Child process
		cout 	<< "child process:" << endl;		
	} else { // parent
		cout 	<< "parent:" << endl;
	}

	cout 	<< "pid  = " << getpid() << "\n"
			<< "ppid = " << getppid() << endl;


	// Formatting
	if (pid != 0) { // parent
		cout << "\nforking\n" << endl ;
	}

	return EXIT_SUCCESS;
}