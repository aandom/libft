# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aandom <aandom@student.abudhabi42.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 22:34:32 by aandom            #+#    #+#              #
#    Updated: 2022/12/23 22:34:32 by aandom           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=   libft.a
SOURCES		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
				ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
				ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_striteri.c
SOURCES_B	=   ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
				ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJECTS		= $(SOURCES:.c=.o)
OBJECTS_B	= $(SOURCES_B:.c=.o)
RM			= rm -f
LIBCREATE		= ar -rcs
FLAGS		= -Wall -Wextra -Werror
CC			= gcc
INCS		= .

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJECTS}
	${LIBCREATE} $(NAME) $(OBJECTS)

all: $(NAME)

bonus: $(NAME) $(OBJECTS_B)
	${LIBCREATE} $(NAME) $(OBJECTS_B)
    
fclean: clean
	$(RM) $(NAME) $(bonus)

clean:
	$(RM) -f $(OBJECTS) $(OBJECTS_B)
    
re: fclean all

.PHONY: all bonus clean fclean re .c.o