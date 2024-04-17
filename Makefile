.PHONY: clean All

All:
	@echo "----------Building project:[ 7_Searching_array - Debug ]----------"
	@cd "7_Searching_array" && "$(MAKE)" -f  "7_Searching_array.mk"
clean:
	@echo "----------Cleaning project:[ 7_Searching_array - Debug ]----------"
	@cd "7_Searching_array" && "$(MAKE)" -f  "7_Searching_array.mk" clean
