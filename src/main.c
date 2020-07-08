#include "adjlist.h"
#include "graphops.h"

int main()
{

    linkedlist_type* pippo = build_random_graph(10,0.6,1,100);

    print_graph(pippo, 10);

    return 0;
}
