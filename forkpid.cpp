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
		cout << "child process:\n"
             << "pid  = " << getpid() << "\n"
             << "ppid = " << getppid() << endl;
	} else { // parent
        cout << "parent process:\n"
             << "pid  = " << getpid() << "\n"
             << "ppid = " << getppid() << "\n"
             << "\nforking\n" << endl;
	}

	return EXIT_SUCCESS;
}
