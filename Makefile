
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
					$(SRCSDIR)move_seta.c			\
					$(SRCSDIR)move_setab.c			\
					$(SRCSDIR)move_setb.c			\
					$(SRCSDIR)utils.c				\
					$(SRCSDIR)utils2.c				\

OBJS			=	$(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)

HEADERS			=	$(HEADERDIR)$(HEADER)

HFLAGS			=	-Iinclude -Illst/include

LIB				=	llst/build/llst.a

directory		:
			@mkdir -p $(BUILDDIR)
			@mkdir -p $(OBJSDIR)

${LIB}			:
			make -C llst
			@make clean -C llst

$(NAME)			:	$(OBJS) $(LIB)
			$(CC) $(OBJS) -o $(NAME) ${LIB}

$(OBJS)		:	$(OBJSDIR)%.o		:	$(SRCSDIR)%.c directory
			$(CC) $(CFLAGS) ${HFLAGS} -c $< -o $@

all				:	${LIB} directory $(NAME)

clean			:
			@rm -rf $(OBJSDIR)

fclean			:	clean
			@make fclean -C llst
			@rm -rf $(BUILDDIR)

re				:	fclean all
