# NYU Processor Design: Onboarding Lab 1

## Lab 1 Questions
1. The paths used by target_sources and target_include_directories are relative, not absolute. What file or folder are they relative to?

The paths used by target_sources and target_include_directories are relative to the directory that contains the CMakeLists.txt file. For example, when we write src/hello.cpp or include, those paths are resolved starting from the folder where the CML lives, not from the build directory or any absolute location on the filesystem.

2. What are some differences between cmake and ninja?

cmake is a meta-build system, meaning it reads the CMakeLists.txt file and generates build system files, whereas ninja is an actual build system that takes those generated files and produces the final program executable. Another key difference is that cmake is designed to be used directly by humans, while ninja is intended only as a target for tools like cmake and is never meant to be written or invoked manually. Additionally, cmake is flexible and supports generating multiple types of build systems, while ninja is optimized purely for speed in building.

3. Why is it important to run cmake in its own directory?

It is important to run cmake in its own directory, since it generates a large number of intermediate files during the configuration process. If you run cmake in the same directory as your source code, all of those generated files will pollute your source code folder, making it cluttered and harder to manage.