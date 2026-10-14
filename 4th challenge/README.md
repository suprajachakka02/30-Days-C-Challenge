Algorithm
1. START the program.
2. Initialize all expense totals and counts to zero.
3. Read the expense amount from the user.
4. If the expense amount is 0, exit the loop and go to Step 8.
5. If the expense amount is negative, display "Invalid expense!" and return to Step 3 without updating any totals or counts.
6. If the expense amount is positive:
   - If the amount is less than 100, classify it as Small, increment the Small count, and add the amount to the Small total.
   - If the amount is 100 or more but less than 500, classify it as Medium, increment the Medium count, and add the amount to the Medium total.
   - Otherwise, classify it as Large, increment the Large count, and add the amount to the Large total.
   - Increment the valid expense count and add the amount to the grand total.
7. Repeat Steps 3–6 until the user enters 0.
8. Display the total number of valid expenses, grand total, and category-wise counts and totals.
9. If the valid expense count is greater than zero, calculate and display the average expense. Otherwise, display "No valid expenses entered."
10. STOP the program.
