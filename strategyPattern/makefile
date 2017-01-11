OBJS = $(patsubst %.cpp,%.o,$(shell ls *.cpp))
TARGET = strategy

all:$(TARGET)
$(TARGET):$(OBJS)
	$(CXX) -o $(TARGET) ./objs/*.o
$(OBJS):%.o:%.cpp
	$(CXX) -c $< -o ./objs/$@
clean:
	rm -f $(TARGET) ./objs/*.o