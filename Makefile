CXXFLAGS+=-g -Wall

all : boost_pool_test

boost_pool_test : boost_pool_test.cc
	g++ -o $@ $^

clean:
	rm boost_pool_test
