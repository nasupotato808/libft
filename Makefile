NAME = libft.a
CC = gcc	# c programme
CFLAGS = -Wall -Wextra -Werror# extra flags to give to the C compiler, to find .h with -T
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_itoa.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_split.c\
		# ft_strmapi.c ft_striteri.c\

OBJECTS = $(CFILES:%.c=%.o)
DEPS = libft.h
#BONUS = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c 
BINARY = bin

.PHONY = all, clean, fclean, re
#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(CFILES)
#	gcc -nostartfiles -shared -o libft.so $(OBJ)

	
#all: $(BINARY)
	

# $(BINARY):$(OBJECTS)
# 	$(CC) $(CFLAGS) -c -o $@ $^ 


# double-suffix rule is defined by a pair of suffixes
#.c.o is equivalent to the pattern rule %.o:%.c"
# tells how to make the file .c.o from the prerequisite file libft.h,
# regular expression where % is a wildcard
# all object files depend on their respective .c file along with all of the DEPS.
%.o: %.c $(DEPS)	# all objects files depend on their respective .c file along with all of the DEPS
	$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)
$(NAME): $(OBJECTS)
	@ar -r $(NAME) $(OBJECTS)

# -r: recursive, removal of directories and their contents
# -f: force, ignores non-existent files and doesn't prompt for confirmation
# clean: remove .o files
clean:
	rm -f *.o

# fclean: remove .o files and binary
fclean: clean
	rm -f $(NAME)
# re: do fclean and re-make your binary
re: fclean all