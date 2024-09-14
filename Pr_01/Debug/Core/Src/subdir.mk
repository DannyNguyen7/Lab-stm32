################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Ex_03_Traffic_Light.c \
../Core/Src/Ex_04_Led7seg.c \
../Core/Src/Ex_05_7SEG_LED_to_the_4_way_traffic_light.c \
../Core/Src/Ex_06_analog_clock.c \
../Core/Src/main.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c 

OBJS += \
./Core/Src/Ex_03_Traffic_Light.o \
./Core/Src/Ex_04_Led7seg.o \
./Core/Src/Ex_05_7SEG_LED_to_the_4_way_traffic_light.o \
./Core/Src/Ex_06_analog_clock.o \
./Core/Src/main.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o 

C_DEPS += \
./Core/Src/Ex_03_Traffic_Light.d \
./Core/Src/Ex_04_Led7seg.d \
./Core/Src/Ex_05_7SEG_LED_to_the_4_way_traffic_light.d \
./Core/Src/Ex_06_analog_clock.d \
./Core/Src/main.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/Ex_03_Traffic_Light.cyclo ./Core/Src/Ex_03_Traffic_Light.d ./Core/Src/Ex_03_Traffic_Light.o ./Core/Src/Ex_03_Traffic_Light.su ./Core/Src/Ex_04_Led7seg.cyclo ./Core/Src/Ex_04_Led7seg.d ./Core/Src/Ex_04_Led7seg.o ./Core/Src/Ex_04_Led7seg.su ./Core/Src/Ex_05_7SEG_LED_to_the_4_way_traffic_light.cyclo ./Core/Src/Ex_05_7SEG_LED_to_the_4_way_traffic_light.d ./Core/Src/Ex_05_7SEG_LED_to_the_4_way_traffic_light.o ./Core/Src/Ex_05_7SEG_LED_to_the_4_way_traffic_light.su ./Core/Src/Ex_06_analog_clock.cyclo ./Core/Src/Ex_06_analog_clock.d ./Core/Src/Ex_06_analog_clock.o ./Core/Src/Ex_06_analog_clock.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/stm32f1xx_hal_msp.cyclo ./Core/Src/stm32f1xx_hal_msp.d ./Core/Src/stm32f1xx_hal_msp.o ./Core/Src/stm32f1xx_hal_msp.su ./Core/Src/stm32f1xx_it.cyclo ./Core/Src/stm32f1xx_it.d ./Core/Src/stm32f1xx_it.o ./Core/Src/stm32f1xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f1xx.cyclo ./Core/Src/system_stm32f1xx.d ./Core/Src/system_stm32f1xx.o ./Core/Src/system_stm32f1xx.su

.PHONY: clean-Core-2f-Src

