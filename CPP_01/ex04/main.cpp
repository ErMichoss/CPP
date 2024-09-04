/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

/**
 * Check if the line contains str1, if it does it replaces str1 in the line for str2.
 * @param[in] line The line that is gettin checked.
 * @param[in] str1 The string that we are looking for.
 * @param[in] str2 The string we want to replace str1 for.
 * @return the line.
 */
std::string	check_line(std::string line, std::string str1, std::string str2){
	size_t found;

	while ((found = line.find(str1)) != std::string::npos){ // Check if str1 is in str2.
		line.replace(found, str1.length(), str2); // Replace str1 whith str2.
	}
	return line;
}

int	main(int argc, char *argv[]){
	if (argc != 4)
		std::cout << "This promgram needs a filename and 2 strings" << std::endl;
	else{
		std::string line;

		std::ofstream new_file("newFile.txt"); // The new file with that will contain the changed strings.
		if (!new_file){
			std::cerr << "Error: can not creat the file" << std::endl;
			return 1;
		}
		std::ifstream file(argv[1]); // The file that the program reads from.
		if (!file.is_open()){
			std::cerr << "Error: can not open the fle" << std::endl;
			return 1;
		}

		while (std::getline(file, line)){
			line = check_line(line, argv[2], argv[3]); // Check the line has the string.
			new_file << line << std::endl; // Putting the string in the new file.
		}
	}
	return 0;
}