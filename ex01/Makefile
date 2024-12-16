CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
TARGET = megaphone

all: $(TARGET)

$(TARGET): megaphone.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) megaphone.cpp

clean:
	rm -f $(TARGET)

re: clean all