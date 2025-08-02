#include "example.h"

int main(int argc, char *argv[])
{
    UnitreeLidarReader *lreader = createUnitreeLidarReader();

    if (lreader->initializeSerial("/dev/ttyACM0", 4000000))
    {
        printf("Unilidar initialization failed! Exit here!\n");
        exit(-1);
    }
    else
    {
        printf("Unilidar initialization succeed!\n");
    }

    sleep(1);

    LidarIpAddressConfig config;
    config.lidar_ip[0] = 192;
    config.lidar_ip[1] = 168;
    config.lidar_ip[2] = 1;
    config.lidar_ip[3] = 4;

    config.user_ip[0] = 192;
    config.user_ip[1] = 168;
    config.user_ip[2] = 1;
    config.user_ip[3] = 3;

    config.lidar_port = 6101;
    config.user_port = 6201;

    config.gateway[0] = 0;
    config.gateway[1] = 0;
    config.gateway[2] = 0;
    config.gateway[3] = 0;

    config.subnet_mask[0] = 255;
    config.subnet_mask[1] = 255;
    config.subnet_mask[2] = 255;
    config.subnet_mask[3] = 0;

    lreader->setLidarIpAddressConfig(config);
    std::cout << "Lidar IP is reset! Please reboot lidar!\n";
    sleep(1);

    return 0;
}
