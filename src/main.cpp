#include <array>
#include <iostream>

#include <GLFW/glfw3.h>

int main(int argc, char** argv)
{
    GLFWwindow* window{nullptr};

    if (!glfwInit())
    {
        return EXIT_FAILURE;
    }

    window = glfwCreateWindow(640, 480, "OIS Test", NULL, NULL);

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        glfwSetKeyCallback(window, [](GLFWwindow* window, int key, int scancode, int action, int mods)
        {
            if (action == GLFW_PRESS)
            {
                std::cout << key << std::endl;

                //TODO: Detect keyboard layout
                //TODO: hide the window
                char c = static_cast<char>(key);
                std::cout << c << std::endl;
            }
        });
    }

    glfwTerminate();

    return 0;
}
