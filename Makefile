include Make.common


all: $(RUN)

$(RUN): $(PROGRAM_NAME)$(OUT)
	./$(PROGRAM_NAME)$(OUT)

$(PROGRAM_NAME)$(O): $(PROGRAM_NAME)$(CPP)
	$(CXX) $(STD) $(CFLAG) $(PROGRAM_NAME)$(CPP)

$(PROGRAM_NAME)$(OUT): $(PROGRAM_NAME)$(O)
	$(CXX) $(STD) $(OFLAG) $(PROGRAM_NAME)$(OUT) $(PROGRAM_NAME)$(O)

$(CLEAN):
	rm -f *.o
