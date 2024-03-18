.PHONY: clean All

All:
	@echo "----------Building project:[ 13_Challenge_Structures - Debug ]----------"
	@cd "13_Challenge_Structures" && "$(MAKE)" -f  "13_Challenge_Structures.mk"
clean:
	@echo "----------Cleaning project:[ 13_Challenge_Structures - Debug ]----------"
	@cd "13_Challenge_Structures" && "$(MAKE)" -f  "13_Challenge_Structures.mk" clean
