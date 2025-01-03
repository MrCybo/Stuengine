#pragma once
#include <string>
#include <vector>
using namespace std;

namespace lve {
    class LvePipeline {
        public:
         LvePipeline(const string& vertFilepath, const string& fragFilepath);

        private:
         static vector<char> readFile(const string& filepath);

         void createGraphicsPipeline(const string& vertFilepath, const string& fragFilepath);

    };
}