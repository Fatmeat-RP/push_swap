NAME			=	$(BUILDDIR)llst.a

OBJSDIR			=	objs/

BUILDDIR		=	build/

SRCSDIR			=	srcs/

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

HEADERDIR		=	include/

HEADER			=	stack.h

SRCS			= 	$(wildcard $(SRCSDIR)*.c)

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
