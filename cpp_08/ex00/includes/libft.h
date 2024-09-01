/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/25 12:18:16 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <iostream>		// For input and output stream
# include <string>			// For string class and functions
# include <cstring>			// For C-style string functions
# include <cmath>			// For common mathematical functions
# include <vector>			// For the vector container
# include <algorithm>		// For standard algorithms (sort, find, etc.)
# include <map>				// For the map container
# include <unordered_map>	// For the unordered_map container
# include <set>				// For the set container
# include <unordered_set>	// For the unordered_set container
# include <queue>			// For the queue container
# include <stack>			// For the stack container
# include <list>			// For the list container
# include <deque>			// For the deque container
# include <iterator>		// For iterators
# include <functional>		// For function objects and predefined function objects
# include <utility>			// For pair and utility functions
# include <sstream>			// For string stream classes
# include <fstream>			// For file stream classes
# include <iomanip>			// For input/output manipulation
# include <chrono>			// For time utilities
# include <thread>			// For threading support
# include <mutex>			// For mutual exclusion primitives
# include <atomic>			// For atomic operations
# include <memory>			// For smart pointers (unique_ptr, shared_ptr, etc.)
# include <exception>		// For standard exception classes
# include <stdexcept>		// For standard exception classes (runtime_error, etc.)
# include <limits>			// For numeric limits
# include <typeinfo>		// For type information
# include <random>			// For random number generation
# include <bitset>			// For bitset operations

# define RED	"\x1b[31;1m"
# define GREEN	"\x1b[32;1m"
# define BLUE	"\x1b[34;1m"
# define CYAN	"\x1b[36;1m"
# define YELLOW	"\033[33;1m"
# define RESET	"\x1b[0m"

void errorMessage(std::string message);

#endif
