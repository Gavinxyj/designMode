OBJS = $(patsubst %.cpp,%.o,$(shell ls *.cpp))
TARGET = factory
INCLUDE := -I./include	
all:$(TARGET)
$(TARGET):$(OBJS)
	$(CXX) -o $(TARGET) ./objs/*.o
$(OBJS):%.o:%.cpp
	$(CXX) -c $< $(INCLUDE) -o ./objs/$@
clean:
	rm -f factory ./objs/*.o