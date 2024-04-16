.PHONY: clean All

All:
	@echo "----------Building project:[ 1_OutputUserInput - Debug ]----------"
	@cd "1_OutputUserInput" && "$(MAKE)" -f  "1_OutputUserInput.mk"
clean:
	@echo "----------Cleaning project:[ 1_OutputUserInput - Debug ]----------"
	@cd "1_OutputUserInput" && "$(MAKE)" -f  "1_OutputUserInput.mk" clean
