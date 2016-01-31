NAME=		calc_cpp

SRCS=		./srcs/main.cpp \
			./srcs/Parser.cpp \
			./srcs/Calculator.cpp

OBJS=		$(SRCS:.cpp=.o)

INCS=		-I./inc

CXX=		g++

CXXFLAGS=	-Wall -W -Wextra -Werror $(INCS)

all: $(SRCS) $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run:
	./$(NAME)
