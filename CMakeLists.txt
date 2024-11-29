cmake_minimum_required(VERSION 3.10)
project(MyProject C CXX)

# Configuração dos arquivos de cabeçalho e código-fonte
set(SOURCES
    src/main.cpp
    src/peripheral_driver/gpio.cpp
    src/application/app_logic.cpp
    src/signalhandler/signal_handler.cpp
    src/sensors/sensor_manager.cpp
)

# Criar o executável principal
add_executable(MyProject ${SOURCES})

# Definir onde encontrar os cabeçalhos
target_include_directories(MyProject PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Configurações de compilação para o Raspberry Pi (ARM)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mcpu=cortex-a53 -mfpu=neon-vfpv4 -mfloat-abi=hard")

# Linkar bibliotecas externas
target_link_libraries(MyProject wiringPi)