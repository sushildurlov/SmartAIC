
#include <signal.h>
#include <unistd.h>
#include <uecho/device.h>
#include <uecho/node.h>
#include "smart_device_header.h"

#define low_voltage_object_code 0x028801
#define low_volatge_intentaneous_energy 0xE7
#define low_volatage_Kw 0x01

bool uecho_low_voltage_propertyrequesthandler(uEchoObject *obj, uEchoProperty *prop, uEchoEsv esv, size_t pdc, byte *edt)
{

    printf("hello \n");

    byte status;

    printf("ESV = %02X : %02X (%ld), ", esv, uecho_property_getcode(prop), pdc);

    if ((pdc != 1) || !edt)
    {
        printf("Bad Request\n");
        return false;
    }

    status = edt[0];
    printf("%02X", status);
    // TODO : Set the status to hardware

    switch (status)
    {
    case low_volatage_Kw:
        printf("vayo vane huncha\n");

        /*
        #if defined(UECHO_PLATFORM_RASPBIAN)
                system("echo \"1\" > /sys/class/gpio/gpio" RASPBERRY_PI_LIGHT_GPIO_NO "/value");
        #endif
                break;
            case LIGHT_PROPERTY_POWER_OFF:
                printf("POWER = OFF\n");
        #if defined(UECHO_PLATFORM_RASPBIAN)
                system("echo \"0\" > /sys/class/gpio/gpio" RASPBERRY_PI_LIGHT_GPIO_NO "/value");
        #endif
                break;
        */
        break;
    default:
        printf("POWER = %02X\n", status);
        break;
    }

    return true;
}

uEchoObject *uecho_low_volage()
{

    uEchoObject *obj;
    byte prop[32];

    obj = uecho_device_new();
    uEchoNode *node = uecho_node_new();
    uecho_node_start(node);
    if (!node)
    {
        printf("if not node");
        // return EXIT_FAILURE;
    }
    if (!obj)
    {
        uecho_node_delete(node);
        printf("inside obj");
        // return EXIT_FAILURE;
    }

    uecho_object_setmanufacturercode(obj, 0xFFFFF0);

    uecho_object_setcode(obj, low_voltage_object_code);

    uecho_object_setproperty(obj, low_volatge_intentaneous_energy, uEchoPropertyAttrReadWrite);

    prop[0] = low_volatage_Kw;

    uecho_object_setpropertydata(obj, low_volatge_intentaneous_energy, prop, 1);

    uecho_node_addobject(node, obj);

    uecho_object_setpropertyreadhandler(obj, low_volatge_intentaneous_energy, uecho_low_voltage_propertyrequesthandler);
    // printf("inside obj");
    return obj;
}
/*
float SmartDevice::get_ct_value(const int ct_port)
{
    uecho_low_volage();

    return 0.0;
};
*/