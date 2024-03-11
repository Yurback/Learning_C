.PHONY: clean All

All:
	@echo "----------Building project:[ 5_Challenge_rainfalls - Debug ]----------"
	@cd "5_Challenge_rainfalls" && "$(MAKE)" -f  "5_Challenge_rainfalls.mk"
clean:
	@echo "----------Cleaning project:[ 5_Challenge_rainfalls - Debug ]----------"
	@cd "5_Challenge_rainfalls" && "$(MAKE)" -f  "5_Challenge_rainfalls.mk" clean
