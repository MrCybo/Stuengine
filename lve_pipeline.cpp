#include "lve_pipeline.hpp"
#include <fstream>
#include <stdexcept>
#include <vector>
#include <iostream>


using namespace std;

namespace lve {

    LvePipeline::LvePipeline(const string& vertFilepath, const string& fragFilepath) {
        createGraphicsPipeline(vertFilepath, fragFilepath);
    }


    vector<char> LvePipeline::readFile(const string& filepath) {
        //
    
        fstream file(filepath, ios::ate | ios::binary);
    
        if (!file.is_open()) {
            throw runtime_error("U get in troubles: " + filepath);
    

        }   
        size_t fileSize = static_cast<size_t>(file.tellg());
        vector<char> buffer(fileSize);

        file.seekg(0);
        file.read(buffer.data(), fileSize);
        file.close();

        return buffer;
    }
    void LvePipeline::createGraphicsPipeline(const string& vertFilepath, const string& fragFilepath) {
        auto vertCode = readFile(vertFilepath);
        auto fragCode = readFile(fragFilepath);

        cout << "Vertex Shader Code Size: " << vertCode.size() << '\n';
        cout << "Fragment Shader Code Size: " << fragCode.size() << '\n';

    }

}