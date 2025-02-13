DEFAULT_FOLDER = primekb/prime_e/std
DEFERRED_EXEC_ENABLE = yes

ROOT_DIR := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))
include ${ROOT_DIR}../../../../../rules.mk
