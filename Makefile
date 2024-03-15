.PHONY: clean All

All:
	@echo "----------Building project:[ 9_Challenge_reverseStr_bublesort - Debug ]----------"
	@cd "9_Challenge_reverseStr_bublesort" && "$(MAKE)" -f  "9_Challenge_reverseStr_bublesort.mk"
clean:
	@echo "----------Cleaning project:[ 9_Challenge_reverseStr_bublesort - Debug ]----------"
	@cd "9_Challenge_reverseStr_bublesort" && "$(MAKE)" -f  "9_Challenge_reverseStr_bublesort.mk" clean
