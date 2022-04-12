
NAME			=	$(BUILDDIR)push_swap

OBJSDIR			=	objs/

BUILDDIR		=	build/

SRCSDIR			=	srcs/

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

HEADERDIR		=	include/

HEADER			=	

OBJS			=	$(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)

SRCS			= 	$(wildcard $(SRCSDIR)*.c)

$(NAME)		:	$(OBJS)
			$(CC)

$(OBJS)		:	$(OBJSDIR)%.o		:	$(SRCSDIR)%.c $(HEADER)
			$(CC) 

directory	:
			mkdir -p $(BUILDDIR)
			mkdir -p $(OBJSDIR)

all			: mandatory

mandatory	:	$(NAME)	: 	directory

clean		:
			rm -r $(OBJSDIR)

fclean		:	clean
			rm -r $(BUILDDIR)

re		:	fclean all
