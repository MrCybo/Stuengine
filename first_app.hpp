#pragma once

#include "lve_window.hpp" 

namespace lve {
    class FirstApp {
        public:
         static constexpr int WIDHT = 800;
         static constexpr int HEIGHT = 700;

         void run();

        private:
          LveWindow lveWindow{WIDHT, HEIGHT, "TOO HARD"};


    };
    
    




}