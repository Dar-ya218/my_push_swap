NAME = push_swap

#-------------DIRECTORIES-----------#
INC_DIR = includes/
SRCS_DIR = srcs/
LIB_DIR = libraries/
OBJ_DIR = obj/

#---------------FILES---------------#
LIBS = $(LIB_DIR)libft/libft.a $(LIB_DIR)printf/libftprintf.a
LIB_HEADERS = -I$(LIB_DIR)libft -I$(LIB_DIR)printf

INC = -I$(INC_DIR) $(LIB_HEADERS)

SRCS = $(SRCS_DIR)actions/swap.c \
	   $(SRCS_DIR)actions/push.c \
	   $(SRCS_DIR)actions/rotate.c \
	   $(SRCS_DIR)actions/reverse_rotate.c \
	   $(SRCS_DIR)error_checks.c \
	   $(SRCS_DIR)init_stack.c \
	   $(SRCS_DIR)rotate_both.c \
	   $(SRCS_DIR)b_to_a.c \
	   $(SRCS_DIR)big_sort.c \
	   $(SRCS_DIR)free.c \
	   $(SRCS_DIR)main.c \
	   $(SRCS_DIR)sort3.c \
	   $(SRCS_DIR)stack_utils.c \
	   $(SRCS_DIR)utils.c