.PHONY: clean All

All:
	@echo "----------Building project:[ 7_Challenge_tic_tac_toe_game - Debug ]----------"
	@cd "7_Challenge_tic_tac_toe_game" && "$(MAKE)" -f  "7_Challenge_tic_tac_toe_game.mk"
clean:
	@echo "----------Cleaning project:[ 7_Challenge_tic_tac_toe_game - Debug ]----------"
	@cd "7_Challenge_tic_tac_toe_game" && "$(MAKE)" -f  "7_Challenge_tic_tac_toe_game.mk" clean
