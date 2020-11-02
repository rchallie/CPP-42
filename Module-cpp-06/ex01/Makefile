# SIMPLE ===================================================================================
NAME = serializer
# ==========================================================================================

# SRCS =====================================================================================
SRCS_DIR = srcs/

SRCS_LINUX =	main.cpp		\
				serializer_linux.cpp

SRCS_MAC = main.cpp \
		   serializer_mac.cpp

EXPLICIT_SRCS_LINUX =	main.cpp		\
						explicit_serializer_linux.cpp

EXPLICIT_SRCS_MAC = main.cpp \
					explicit_serializer_mac.cpp
# ==========================================================================================

# INCLUDES =================================================================================
INCS_DIR = incs/
# ==========================================================================================

# DEPEDENCIES ==============================================================================
DEPS = $(INCS_DIR)/
# ==========================================================================================

# FLAGS ====================================================================================
INCLUDE = -I$(INCS_DIR)
FLAGS = -Wall -Wextra -Werror -std=c++98 $(INCLUDE)
# ==========================================================================================

# OBJS =====================================================================================
OBJS_DIR 	= 	objs/

OBJ 		= 	$(SRCS_LINUX:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

OBJ_MAC		=	$(SRCS_MAC:.cpp=.o)
OBJS_MAC	=	$(addprefix $(OBJS_DIR), $(OBJ_MAC))

EXPLICIT_OBJ 		= 	$(EXPLICIT_SRCS_LINUX:.cpp=.o)
EXPLICIT_OBJS 		= 	$(addprefix $(OBJS_DIR), $(EXPLICIT_OBJ))

EXPLICIT_OBJ_MAC	=	$(EXPLICIT_SRCS_MAC:.cpp=.o)
EXPLICIT_OBJS_MAC	=	$(addprefix $(OBJS_DIR), $(EXPLICIT_OBJ_MAC))
# ==========================================================================================

# COLORS ===================================================================================
_GREEN=$'\x1b[32m
_WHITE=$'\x1b[37m
# ==========================================================================================

# FROM SUBJECT =============================================================================
$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp $(INCS_DIR)
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

mac: $(OBJS_MAC)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS_MAC)

explicit_linux:  $(EXPLICIT_OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(EXPLICIT_OBJS)

explicit_mac: $(EXPLICIT_OBJS_MAC)
	@clang++ $(FLAGS) -o $(NAME) $(EXPLICIT_OBJS_MAC)

run:
	./$(NAME)
# ==========================================================================================
