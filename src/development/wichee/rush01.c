/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:07:28 by wichee            #+#    #+#             */
/*   Updated: 2024/03/09 21:29:07 by wilsonpri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int is_valid(int input[4][4]);
void ft_putstr(char *str);
int *init_array(int argc, char *argv[]);
int ft_backtrack(int input[4][4], int row, int col);

// Function to check if the input configuration is valid
int is_valid(int input[4][4])
{
    // Check rows for values 1-4
    // ...

    // Check columns for values 1-4
    // ...

    // Additional validation rules
    // ...

    return 1; // Valid configuration
}

// Function to print a string
void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}

// Function to initialize the array based on command-line arguments
int *init_array(int argc, char *argv[])
{
    int input[4][4];
    // Parse command-line arguments and fill the array
    // ...
    return input;
}

// Backtracking function to solve the skyscraper puzzle
int ft_backtrack(int input[4][4], int row, int col)
{
    // Base case: Check if the entire grid is filled
    if (row == 4)
    {
        // Check if the current configuration is valid
        if (is_valid(input))
        {
            // Print the solution or perform other actions
            // ...
            return 1; // Found a valid solution
        }
        return 0; // Not a valid solution
    }

    // Recursive case: Try placing values in the current cell
    for (int value = 1; value <= 4; value++)
    {
        // Place the value in the current cell
        input[row][col] = value;

        // Move to the next cell (update row and col)
        // ...

        // Recursively call ft_backtrack for the next cell
        if (ft_backtrack(input, row, col))
        {
            return 1; // Found a valid solution, propagate the success
        }

        // Backtrack: Undo the placement of the value
        input[row][col] = 0;
    }

    return 0; // No valid solution found
}

// Main function
int main(int argc, char *argv[])
{
    int input[4][4];
    int i, j;
    int output[4][4];

    // Take in cols and rows from args passed in at runtime.
    input = init_array(argc, argv);

    // Check if input is valid. Return "Error" and "\n" if not valid
    if (!is_valid(input))
    {
        ft_putstr("Error");
        write(1, "\n", 1);
        return 0;
    }

    // Start the backtracking algorithm to solve the puzzle
    ft_backtrack(input, 0, 0);

    // Output the solution or perform other actions
    // ...

    return 0;
}

/*################################################################################################################
/* only considers the base case of 4x4 grid. Will not attempt dynamic memory allocation for variable grid sizes */

/*
int	is_validset(int input[4][4])
{
	check rows for values 1-4
		return (1);
	check rows for values 1-4
		return (1);
	else
		return (0);
}	
*/

/*
void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str, 1);
		str++;
}
*/

/*
int	*init_array(int argc, char *argv[])
{
	int	input[4][4];
	int	count;

	return (input);
}
*/

/*
int	ft_backtrack(int input[4][4])
{
	int output[4][4];
	
}
*/

/*
int	main(int argc, char *argv[])
{
	int	input[4][4];
	int	i;
	int	j;
	int	output[4][4];

	// take in cols and rows from args passed in at runtime.
	input = init_array(argc, argv)
	// check if input is valid. return "Error" and "\n" if !valid
	if (!is_valid(input))
		ft_putstr("Error");
		write(1, "\n", 1);
		return (0);
	i = 0;
	j = 0;
	while (i > 4 && j > 4)
		//implement backtracking algo with rules to produce output.
		i++;
		j++;
	return (output);
}
*/
############################################################################################################**/
