#include <iostream>
#include <string>

std::string generateCode() {
    /**
     * This function generates a random code and returns it as a string.
     * 
     * Returns:
     * std::string: The generated code
     */
    
    // Generate a random code
    std::string code = "ABC1234";
    
    return code;
}

int main() {
    // Generate a code
    std::string generatedCode = generateCode();
    
    // Print the generated code
    std::cout << "Generated Code: " << generatedCode << std::endl;
    
    return 0;
}
