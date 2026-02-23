###############################################################
# bigint Fall 2025
#
# CS 23001 Kent State University
# Makefile for project 1 (updated for Milestone 3)
#
###############################################################

###############################################################
# Variables
CPP  = clang++
OPTS = -g -Werror -W -Wunused -Wuninitialized -Wshadow -std=c++17

# Milestone 2 & 3 Tests
TESTS  = test_default_ctor test_int_ctor test_equal test_c_str_ctor \
         test_add test_subscript test_times_10 test_times_digit test_multiply

###############################################################
# The first rule is run if only make is typed
msg:
	@echo 'Targets are:'
	@echo '  bigint:'
	@echo '  tests:'
	@echo '  add:'
	@echo '  multiply:'
	@echo '  factorial:'
	@echo '  clean:'

###############################################################
# Build and run all tests
tests: $(TESTS)
	./test_default_ctor
	./test_int_ctor
	./test_equal
	./test_c_str_ctor
	./test_add
	./test_subscript
	./test_times_10
	./test_times_digit
	./test_multiply

###############################################################
# Build and run Milestone 2
add: milestone2
	./add

###############################################################
# Build and run Milestone 3
multiply: milestone3
	./multiply

###############################################################
# Build and run factorial
factorial: extra
	./factorial

###############################################################
# Compile bigint
bigint: bigint.hpp bigint.cpp
	$(CPP) $(OPTS) -c bigint.cpp

bigint.o: bigint.hpp bigint.cpp
	$(CPP) $(OPTS) -c bigint.cpp

###############################################################
# Compile and run all tests - uses a wild card
test_%: bigint.o test_%.o
	$(CPP) $(OPTS) -o test_$* bigint.o test_$*.o

test_%.o: bigint.hpp test_%.cpp
	$(CPP) $(OPTS) -c test_$*.cpp

###############################################################
# For Milestone 2
milestone2: add.o bigint.o
	$(CPP) $(OPTS) -o add add.o bigint.o

add.o: bigint.hpp add.cpp
	$(CPP) $(OPTS) -c add.cpp

###############################################################
# For Milestone 3
milestone3: multiply.o bigint.o
	$(CPP) $(OPTS) -o multiply multiply.o bigint.o

multiply.o: bigint.hpp multiply.cpp
	$(CPP) $(OPTS) -c multiply.cpp

###############################################################
# Factorial
extra: factorial.o bigint.o
	$(CPP) $(OPTS) -o factorial factorial.o bigint.o

factorial.o: bigint.hpp factorial.cpp
	$(CPP) $(OPTS) -c factorial.cpp

###############################################################
# Instructor ONLY commands
P1TESTS   = testP1_add testP1_subscript testP1_times_10 testP1_times_digit
CHECKPATH = ../../instructors/project1/

check2: testP1_add testP1_subscript
	./testP1_add
	./testP1_subscript

check3: $(P1TESTS)
	./testP1_add
	./testP1_subscript
	./testP1_times_10
	./testP1_times_digit

testP1_%: bigint.o testP1_%.o
	$(CPP) $(OPTS) -o testP1_$* bigint.o testP1_$*.o

testP1_%.o: bigint.hpp ${CHECKPATH}testP1_%.cpp
	cp ${CHECKPATH}testP1_$*.cpp .
	$(CPP) $(OPTS) -c testP1_$*.cpp

###############################################################
# Name check (optional)
namecheck:
	export SCANL_HOST=131.123.42.46; export SCANL_PORT=8080; srcml . --position --archive | /usr/local/bin/nameCollector --csv | /usr/local/bin/nameChecker

###############################################################
# Clean
clean:
	rm -f *.o
	rm -f $(TESTS)
	rm -f $(P1TESTS)
	rm -f testP1_*
	rm -f multiply add factorial
