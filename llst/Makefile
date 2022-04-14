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

all				:	directory $(NAME)

$(NAME)			:	$(OBJS)
			@ar rcs $(NAME) $(OBJS)

$(OBJSDIR)%.o 	:	$(SRCSDIR)%.c ${HEADERS}
			@$(CC) $(CFLAGS) ${HFLAGS} -c $< -o $@

directory		:
			@mkdir -p $(BUILDDIR)
			@mkdir -p $(OBJSDIR)

clean			:
			@rm -rf $(OBJSDIR)

fclean			:	clean
			@rm -rf $(BUILDDIR)

re				:	fclean all
