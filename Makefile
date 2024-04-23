.PHONY: clean All

All:
	@echo "----------Building project:[ Hello_world - Debug ]----------"
	@cd "Hello_world" && "$(MAKE)" -f  "Hello_world.mk"
clean:
	@echo "----------Cleaning project:[ Hello_world - Debug ]----------"
	@cd "Hello_world" && "$(MAKE)" -f  "Hello_world.mk" clean
