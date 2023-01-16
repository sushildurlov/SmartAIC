# SmartAI Echonet in C

## Installing uecho libary
1) git clone https://github.com/cybergarage/uecho.git
2) cd uecho
3) ./bootstrap && ./configure && make && sudo make install
    * if error occur during make then :
      a) sudo apt-get update && apt-get upgrade
      b) sudo apt install automake
4) then again repeat process 3
5) install required header file will be in /usr/local/include/uecho folder (can check after completion)
6) then remove uecho source code : sudo rm -rf /uecho

## Configuration of Code
1) There are smart_device and smart_controller folder,copy the related code to related raspberry pi (for testing)
2) smart_device mean measuring unir and smart_device mean controller
3) run complied file by sudo ./main in measuring unit 
4)then run controller code in another device by sudo ./smart 192.168.1.25 028801 62 E70101 (./smart "destination_ip" "device_obj" "EsV"    "PdC")


