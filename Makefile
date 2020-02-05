# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jesmith <jesmith@studentodam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/13 12:32:27 by jesmith        #+#    #+#                 #
#    Updated: 2020/02/05 16:34:06 by jesmith       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

CFLAGS := -Wall -Werror -Wextra

HEAD := ./libft.h ./graphics.h ./get_next_line.h

SRCS_DIR := ./

SRCS := lstmap lstdelone lstiter lstadd lstnew islower \
		lstdel strsplit wrdcount strndup strnstr \
		strstr itoa putnbr_fd putendl_fd isupper putstr_fd \
		putchar_fd strtrim strjoin strsub intlen strncmp \
		strnequ strequ strmapi strmap striteri striter \
		strclr strdel strnew memdel memalloc memset \
		bzero memcpy memccpy memmove memchr memcmp \
		strlen strdup strcpy strncpy strcmp strcat \
		strncat strlcat strchr strrchr isalpha isdigit \
		isalnum isascii isprint toupper tolower isspace \
		atoi putchar putstr putendl putnbr isupper \
		islower stralloc strrev lstaddback del strdel \
		strsubsize count_if free_strarray \
		foreach range sqrt recursive_factorial \
		div_mod swap is_negative print_alphabet \
		print_numbers strclen ull_length atoi_base \
		itoa_base exit isnumber_base has_prefix isdigit_base bit_print \

GRAGPHIC_SRCS := hsv_color rgb_color get_bit_value percentage

CFILES := $(SRCS:%=$(SRCS_DIR)ft_%.c) $(GRAGPHIC_SRCS:%=$(SRCS_DIR)%.c) \
			get_next_line.c

SRCO := $(CFILES:%.c=%.o)

NORM := norminette $(HEAD) $(CFILES) | grep -e "Warning" -e "Error" -B 1

all: $(NAME)

%.o: %.c
	@gcc -c $(FLAGS) $@ $<

$(NAME): $(OFILES)
	@gcc $(CFLAGS) -c $(CFILES)   
	@ar rc	$(NAME) $(SRCO) $(HEAD)
	@ranlib	$(NAME)

clean:
	@/bin/rm -f $(SRCO) *~

fclean:
	@/bin/rm -f $(SRCO) libft.a

re: fclean all

norm:
	@$(NORM)

add:
	@git add $(CFILES) $(HEAD) Makefile
	@git status

push:
ifdef MSG
	@git commit -m "$(MSG)"
	@git push
	@make norm
else
	@echo "WARNING NO MESSAGE"
endif

print:
	@echo "$(SRCO)"