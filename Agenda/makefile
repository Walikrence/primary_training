CC		:=	g++
FLAGS		:=	-std=c++11	-w
INC_DIR		:=	include
SRC_DIR		:=	src
BUILD_DIR	:=	build
BIN_DIR		:=	bin
INCLUDE		:=	-I./$(INC_DIR)

$(BUILD_DIR)/User.o:	$(SRC_DIR)/User.cpp
	@mkdir -p $(BUILD_DIR)
	$(CC) $(FLAGS) $(INCLUDE) -c -o $@ $<
	$(CC) $(FLAGS) $(INCLUDE) -c -o build/Meeting.o src/Meeting.cpp
	$(CC) $(FLAGS) $(INCLUDE) -c -o build/Date.o src/Date.cpp

clean:
	@rm -rf $(BUILD_DIR)
	@rm -rf $(BIN_DIR)
