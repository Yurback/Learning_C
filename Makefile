.PHONY: clean All

All:
	@echo "----------Building project:[ 4_Challange_prime_numbers - Debug ]----------"
	@cd "4_Challange_prime_numbers" && "$(MAKE)" -f  "4_Challange_prime_numbers.mk"
clean:
	@echo "----------Cleaning project:[ 4_Challange_prime_numbers - Debug ]----------"
	@cd "4_Challange_prime_numbers" && "$(MAKE)" -f  "4_Challange_prime_numbers.mk" clean
