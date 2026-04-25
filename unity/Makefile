# Makefile — C TDD environment (GCC + Unity, Windows)
# clang is used separately as a static analyser, not as the compiler

CC        = gcc
CFLAGS    = -Wall -Wextra -g -fsanitize=address -I./unity -I./src

# Static analysis — run manually with: make analyse
ANALYSER  = clang
AFLAGS    = --analyze -Xanalyzer -analyzer-output=text -I./unity -I./src

UNITY     = unity/unity.c

SRC_DIR   = src
TEST_DIR  = tests
BUILD_DIR = build

TEST_SRCS := $(wildcard $(TEST_DIR)/test_*.c)
TEST_BINS := $(patsubst $(TEST_DIR)/test_%.c, $(BUILD_DIR)/test_%, $(TEST_SRCS))

.PHONY: all clean analyse

all: $(BUILD_DIR) $(TEST_BINS)
	@echo.
	@echo === Running all tests ===
	@echo.
	@for %%t in ($(BUILD_DIR)\test_*.exe) do ( \
		echo --- %%t --- && %%t & echo. \
	)

$(BUILD_DIR)/test_%: $(TEST_DIR)/test_%.c $(SRC_DIR)/%.c $(UNITY)
	$(CC) $(CFLAGS) $^ -o $@.exe

# Analyse all src files with clang static analyser
analyse:
	@echo === Running Clang static analysis ===
	@for %%f in ($(SRC_DIR)\*.c) do ( \
		echo --- %%f --- && \
		$(ANALYSER) $(AFLAGS) %%f \
	)

$(BUILD_DIR):
	if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)

clean:
	if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)