.PHONY: clean All

All:
	@echo "----------Building project:[ 7_printf_foo - Debug ]----------"
	@cd "7_printf_foo" && "$(MAKE)" -f  "7_printf_foo.mk"
clean:
	@echo "----------Cleaning project:[ 7_printf_foo - Debug ]----------"
	@cd "7_printf_foo" && "$(MAKE)" -f  "7_printf_foo.mk" clean
