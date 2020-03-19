# SIMPLE ===================================================================================
NAME = megaphone
# ==========================================================================================

# SRCS =====================================================================================
SRCS_DIR = ./
SRCS = megaphone.cpp
# ==========================================================================================

# FLAGS ====================================================================================
FLAGS = -Wall -Wextra -Werror
# ==========================================================================================

# OBJS =====================================================================================
OBJS_DIR 	= 	objs/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))
# ==========================================================================================

# COLORS ===================================================================================
_GREEN=$'\x1b[32m
_WHITE=$'\x1b[37m
# ==========================================================================================

# FROM SUBJECT =============================================================================
$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "$(_WHITE)Compiling: $(_GREEN)$<$(_WHITE)"
	@clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "$(_WHITE)Cleaning: $(_GREEN)$(OBJS_DIR)$(_WHITE)"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@echo "$(_WHITE)Cleaning: $(_GREEN)$(NAME)$(_WHITE)"
	@rm -f $(NAME)

re: fclean all
# ==========================================================================================

# SUP ======================================================================================
check: $(NAME)
	@/bin/echo
	@/bin/echo "Expected  : SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
	@/bin/echo -n "Megaphone : "
	@./$(NAME) "shhhhh... I think the students are asleep..."
	@/bin/echo
	@/bin/echo "Expected  : DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
	@/bin/echo -n "Megaphone : "
	@./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@/bin/echo
	@/bin/echo "Expected  : * LOUD AND UNBEARABLE FEEDBACK NOISE *"
	@/bin/echo -n "Megaphone : "
	@./$(NAME)
	@/bin/echo
# ==========================================================================================
