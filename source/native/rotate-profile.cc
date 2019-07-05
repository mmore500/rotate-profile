//  This file is part of Rotate Profile
//  Copyright (C) Matthew Andres Moreno, 2019.
//  Released under MIT license; see LICENSE

#include <iostream>

#include "base/vector.h"
#include "config/command_line.h"

// This is the main function for the NATIVE version of Rotate Profile.

int main(int argc, char* argv[])
{
  emp::vector<std::string> args = emp::cl::args_to_strings(argc, argv);

  std::cout << "Hello, world!" << std::endl;
}
