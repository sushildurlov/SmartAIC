
#include "smart_device.c"
#include <uecho/device.h>
#include <uecho/object.h>
#include <uecho/node.h>
#include <signal.h>
#include <unistd.h>

/*
int main(int argc, char const *argv[])
{
    cout << "Hello ";
    SmartDevice *lowVoltageDevice = new SmartDevice();
    int count = 0;
    while (count < 70000 )
    {
        lowVoltageDevice->get_ct_value(0);
        sleep(1); // wait 10ms
        ++count;
    }
    delete lowVoltageDevice;
    return 0;
}
*/
int main(int argc, char const *argv[])
{
    // printf("after obj");

    // argc -= optind;
    // argv += optind;

    uEchoNode *node;
    uEchoObject *obj;
    // node = uecho_node_new();
    // uecho_node_start(node);
    // printf("when node");

    while (true)
    {
        obj = uecho_low_volage();
        // printf("after objhjj");
        // if (!node)
        //     printf("if not node");
        // return EXIT_FAILURE;
        
        //printf("after obj");

        //sleep(0.1);
    };
    // if (!obj)
    // {
    //     uecho_node_delete(node);
    //     return EXIT_FAILURE;
    // }
    // printf("hello");
}
