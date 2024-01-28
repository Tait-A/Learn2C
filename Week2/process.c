#include <string.h>
#include <stdio.h>

struct process {
	char name[256];
	int cputime;
	int sched_class;
};

int main(int argc, char **argv) 
{
	struct process processes[16];

	struct process *p = &processes[9];

	p->cputime = 20;
	p->sched_class = 1;
	
	char name[] = "os-process";
	
	if (strlen(name) > 256) {
		fprintf(stderr, "Source is too large for dest\n");
		return 1;	
	}
	
	strncpy(p->name, name, strlen(name));
	
	printf("name = %s, cputime = %d, sched_class = %d\n",
			p->name, p->cputime, p->sched_class);

	return 0;
}
