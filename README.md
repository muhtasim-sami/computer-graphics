# computer-graphics
This repository includes all of my tasks and projects in computer graphics course

# Setup

1. **Install the Libraries :**
   - For Ubuntu / Debian :
    ```sh
    sudo apt update
    sudo apt install build-essential libgl1-mesa-dev libglu1-mesa-dev freeglut3-dev mesa-utils
    ```
    > - build-essential: Installs the gcc and g++ compilers needed to compile your code.
    > - freeglut3-dev: This is the main GLUT library for window management and event handling.
    > - libgl1-mesa-dev & libglu1-mesa-dev: These provide the core OpenGL and GLU development files.
    > - mesa-utils: Includes diagnostics tools like glxinfo and glxgears to test your graphics setup.

3. **Verify the Installation :**
   To verify that OpenGL is working properly on your system, run the following command:
   ```sh
   glxgears
   ```
4. **Run .cpp file : **
   I have Build the `run` bash file to automate the process. To use it, Run :
   ```sh
   ./run <program_file_name>.cpp
   ```
   or just use
   ```sh
   ./run <program_file_name>
   ```
   
   
   
