.PHONY: clean All

All:
	@echo "----------Building project:[ 6_Functions_sqrt_cgd_abs - Debug ]----------"
	@cd "6_Functions_sqrt_cgd_abs" && "$(MAKE)" -f  "6_Functions_sqrt_cgd_abs.mk"
clean:
	@echo "----------Cleaning project:[ 6_Functions_sqrt_cgd_abs - Debug ]----------"
	@cd "6_Functions_sqrt_cgd_abs" && "$(MAKE)" -f  "6_Functions_sqrt_cgd_abs.mk" clean
