CXX = g++
FLAGS = -std=c++17 -pthread

all: initialization auto lambdas variadic_templates smart_pointers

initialization: initialization.cpp
	$(CXX) $(FLAGS) $^ -o $@

auto: auto.cpp
	$(CXX) $(FLAGS) $^ -o $@

lambdas: lambdas.cpp
	$(CXX) $(FLAGS) $^ -o $@

static_assert: static_assert.cpp
	$(CXX) $(FLAGS) $^ -o $@

variadic_templates: variadic_templates.cpp
	$(CXX) $(FLAGS) $^ -o $@

smart_pointers: smart_pointers.cpp
	$(CXX) $(FLAGS) $^ -o $@

clean:
	rm initialization
	rm auto
	rm lambdas
	rm static_assert
	rm variadic_templates
	rm smart_pointers