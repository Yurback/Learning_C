.PHONY: clean All

All:
	@echo "----------Building project:[ 17_Challenge_positioning - Debug ]----------"
	@cd "17_Challenge_positioning" && "$(MAKE)" -f  "17_Challenge_positioning.mk"
clean:
	@echo "----------Cleaning project:[ 17_Challenge_positioning - Debug ]----------"
	@cd "17_Challenge_positioning" && "$(MAKE)" -f  "17_Challenge_positioning.mk" clean
