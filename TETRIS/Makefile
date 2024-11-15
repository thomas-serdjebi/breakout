.PHONY: all clean

# Project configuration
PROJECT_NAME = TETRIS
SRC_DIR = src
OBJ_DIR = obj

# Raylib configuration
override RAYLIB_PATH = C:/raylib/w64devkit/x86_64-w64-mingw32
INCLUDE_PATHS = -I$(RAYLIB_PATH)/include
LDFLAGS = -L$(RAYLIB_PATH)/lib
LDLIBS = -lraylib -lopengl32 -lgdi32 -lwinmm

# Compiler configuration
CC = g++
CFLAGS = -Wall -std=c++14 -D_DEFAULT_SOURCE
SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Default rule
all: $(PROJECT_NAME)
@echo "RAYLIB_PATH is set to: $(RAYLIB_PATH)"

# Linking the final executable
$(PROJECT_NAME): $(OBJS)
	$(CC) -o $@.exe $(OBJS) $(CFLAGS) $(INCLUDE_PATHS) $(LDFLAGS) $(LDLIBS)

# Compiling each .cpp file to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CC) -c $< -o $@ $(CFLAGS) $(INCLUDE_PATHS)

# Cleaning up
clean:
	@if exist $(OBJ_DIR) rmdir /Q /S $(OBJ_DIR)
	@if exist $(PROJECT_NAME).exe del /Q $(PROJECT_NAME).exe
	@echo Cleaning done
