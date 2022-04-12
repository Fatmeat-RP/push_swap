
NAME			=	$(BUILDDIR)push_swap

OBJSDIR			=	objs/

BUILDDIR		=	build/

SRCSDIR			=	srcs/

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

HEADERDIR		=	include/

HEADER			=	stack.h

SRCS			= 	$(SRCSDIR)push_swap_main.c		\
					$(SRCSDIR)sa_to_si.c			\
					$(SRCSDIR)sort.c				\

OBJS			=	$(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)

HEADERS			=	$(HEADERDIR)$(HEADER)

LIB			=	llst/build/llst.a

HFLAGS		=	-Iinclude -Illst/include

all				:	$(NAME)

$(NAME)			:	$(OBJS)
			@$(CC) $(OBJS) -o $(NAME) $(LIB)

$(OBJS)		:	$(OBJSDIR)%.o		:	$(SRCSDIR)%.c directory $(LIB)
			@$(CC) $(CFLAGS) ${HFLAGS} -c $< -o $@

directory		:
			@mkdir -p $(BUILDDIR)
			@mkdir -p $(OBJSDIR)


${LIB}			:
			@make -C llst
			@make clean -C llst

clean			:
			@rm -rf $(OBJSDIR)

fclean			:	clean
			@make fclean -C llst
			@rm -rf $(BUILDDIR)

re				:	fclean all

.PHONY : re fclean clean all directory $(NAME) $(OBJSDIR)