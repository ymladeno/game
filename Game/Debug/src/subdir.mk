################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Game.cpp \
../src/Inventory.cpp \
../src/Item.cpp \
../src/Monster.cpp \
../src/Player.cpp \
../src/PlayerManager.cpp \
../src/World.cpp 

OBJS += \
./src/Game.o \
./src/Inventory.o \
./src/Item.o \
./src/Monster.o \
./src/Player.o \
./src/PlayerManager.o \
./src/World.o 

CPP_DEPS += \
./src/Game.d \
./src/Inventory.d \
./src/Item.d \
./src/Monster.d \
./src/Player.d \
./src/PlayerManager.d \
./src/World.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I../ -I./demo -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


