CC      = $(CROSS_COMPILE)gcc
LD      = $(CROSS_COMPILE)ld
AR      = $(CROSS_COMPILE)ar
NM      = $(CROSS_COMPILE)nm
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump
READELF = $(CROSS_COMPILE)readelf
O      ?= $(CURDIR)/out
OUT_DIR = $(O)

.PHONY: all
all: libyaml benchmark

.PHONY: clean
################################################################################
# libYAML
################################################################################
LIBYAML_FLAGS ?= CROSS_COMPILE=$(CROSS_COMPILE)
LIBYAML_SRC_DIR = $(CURDIR)/libyaml
LIBYAML_OUT_DIR = $(OUT_DIR)/libyaml/out

.PHONY: libyaml
libyaml:
	$(AT)test -d $(LIBYAML_OUT_DIR) || mkdir -p $(LIBYAML_OUT_DIR)
	cd $(LIBYAML_SRC_DIR) && ./bootstrap && \
	./configure --host=$(MULTIARCH) \
	--prefix=$(LIBYAML_OUT_DIR) CC=$(CC) && \
	$(MAKE) && $(MAKE) install

.PHONY: libyaml-clean
libyaml-clean:
	cd $(LIBYAML_SRC_DIR) && \
	$(MAKE) clean

################################################################################
# benchmark_app
################################################################################
SRCS := main.c benchmark_aux.c
OBJS := $(patsubst %.c,$(OUT_DIR)/%.o, $(SRCS))

CFLAGS += -Wall -Wextra -Werror -I$(TEEC_EXPORT)/include \
		  -I$(TEEC_INTERNAL_INCLUDES)/include -I$(LIBYAML_OUT_DIR)/include
#Add/link other required libraries here
LDADD += -lm -lteec -lyaml -lpthread \
		 -L$(TEEC_EXPORT)/lib -L$(LIBYAML_OUT_DIR)/lib
$(OBJS) : libyaml

benchmark: $(OUT_DIR)/benchmark

$(OUT_DIR)/%.o: %.c
	$(AT)test -d $(OUT_DIR) || mkdir -p $(OUT_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OUT_DIR)/benchmark: $(OBJS)
	$(CC) $(LDADD) -o $@ $^

clean: libyaml-clean
	rm -rf $(OUT_DIR)