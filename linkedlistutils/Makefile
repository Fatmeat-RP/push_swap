NAME			=	$(BUILDDIR)llst.a

OBJSDIR			=	objs/

BUILDDIR		=	build/

SRCSDIR			=	srcs/

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

HEADERDIR		=	include/

HEADER			=	stack.h

SRCS			= 	$(SRCSDIR)init.c			\
					$(SRCSDIR)llst_addback.c	\
					$(SRCSDIR)llst_addfront.c	\
					$(SRCSDIR)llst_clear.c		\
					$(SRCSDIR)llst_empty.c		\
					$(SRCSDIR)llst_size.c		\
					$(SRCSDIR)lst_foreach.c		\
					$(SRCSDIR)new_node.c		\
					$(SRCSDIR)stack_index.c		\

OBJS			=	$(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)

HEADERS			=	$(HEADERDIR)$(HEADER)

HFLAGS		=	-Iinclude


$(NAME)			:	$(OBJS) directory
			ar rcs $(NAME) $(OBJS)

$(OBJSDIR)%.o 	:	$(SRCSDIR)%.c ${HEADERS}
			mkdir -p $(OBJSDIR)
			$(CC) $(FLAGS) ${HFLAGS} -c $< -o $@

directory		:
			mkdir -p $(BUILDDIR)
			mkdir -p $(OBJSDIR)

all				:	 $(NAME)

clean			:
			rm -r $(OBJSDIR)

fclean			:	clean
			rm -r $(BUILDDIR)

re				:	fclean all
