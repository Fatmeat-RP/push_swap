
NAME			=	$(BUILDDIR)push_swap

OBJSDIR			=	objs/

BUILDDIR		=	build/

SRCSDIR			=	srcs/

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

LIBS			=	-l./libft/build

HEADERDIR		=	include/

HEADER			=	${HEADERDIR}fractol.h

OBJS			=	$(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)

SRCS			= 	$(wildcard $(SRCSDIR)*.c)

##############################################################
####################### MAKE RULES ###########################
##############################################################

$(NAME)		:	$(OBJS)
			mkdir -p $(BUILDDIR)
			make -C libft
			make clean -C libft
			$(CC1)

$(OBJS)		:	$(OBJSDIR)%.o		:	$(SRCSDIR)%.c $(HEADER)
			mkdir -p $(OBJSDIR)
			$(CC2)

all		:	mandatory

mandatory	:	$(NAME)

clean		:
			rm -rf $(OBJSDIR)

fclean		:	clean
			make fclean -C libft
			rm -rf $(BUILDDIR)

re		:	fclean all
