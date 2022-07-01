    #include "Other/start.cpp"

    #include <GL/glew.h>
    #include <GLFW/glfw3.h>

    /* Initialize the library */
    static bool Initialize(void) {
        if (!glfwInit()) {
            std::cerr << "GLFW Not Initialized!\n";
            exit(-1);
        }
        return true;
    }

    int main(int argc, char *argv[]) {  
        /* Initialize the library */
        if (!glfwInit()) {
            std::cerr << "GLFW Not Initialized!\n";
            return -1;
        }

        Win Start(argc, argv);

        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);  // OpenGL 3.3
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);

        /* Create a windowed mode window and its OpenGL context */
        GLFWwindow* window = glfwCreateWindow(Start.GetWidth(), Start.GetHight(), Start.GetScreenName().c_str(), nullptr, nullptr);                 // Pointer to the GLFW window Object
        if (!window) {
            std::cerr << "Window wasn't created\n";
            glfwTerminate();
            return -1;
        }

        /* Make the window's context current */
        glfwMakeContextCurrent(window);

        /* Loop until the user closes the window */
        while (!glfwWindowShouldClose(window)) {
            /* Poll for and process events */
            glfwPollEvents();
            /* Swap front and back buffers */
            glfwSwapBuffers(window);
        }

        glfwDestroyWindow(window);
        glfwTerminate();
        return 0;
    }
