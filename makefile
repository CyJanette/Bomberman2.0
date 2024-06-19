CXX = g++
CXXFLAGS = -Iinclude -std=c++11

SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)
EXEC = bomberman

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: clean