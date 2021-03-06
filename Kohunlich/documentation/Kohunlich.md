# Kohunlich

> I2C Library LCD [From IoT Sensors by Marco Antonio Salgado SourceCodeCat](https://theiotlearninginitiative.gitbooks.io/internetofthingssensors/content/)

## Hardware Requirements

- None

## Software Requirements

```sh
root@board:~# echo "pip install none"
root@board:~# echo "opkg install none"
```

## Setup

```sh
root@board:~# curl https://raw.githubusercontent.com/TheIoTLearningInitiative/CodeLabs/master/Chacmultun/setup.sh -o - | sh
```

## Code

```sh
root@edison:~/.../LKM# wget https://raw.githubusercontent.com/SourceCodeCat/IoTCodeExamples/master/I2C/JHD1313M2.c
```

```sh
root@edison:~/.../LKM# wget https://raw.githubusercontent.com/SourceCodeCat/IoTCodeExamples/master/I2C/JHD1313M2.h
```

```sh
root@edison:~/.../LKM# nano Makefile
```

```sh
obj-m += JHD1313M2.o

all:
        make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
        make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
```

## Execution

```sh
root@board:~/CodeLabs/Kohunlich# 
root@board:~/CodeLabs/Kohunlich# 
```