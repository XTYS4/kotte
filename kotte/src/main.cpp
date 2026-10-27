#include "kotte/application.hpp"

#include <cstdint>
#include <ctime>
#include <exception>

int main([[maybe_unused]] int argc, [[maybe_unused]]  char** argv){    
    try{
        const std::uint64_t seed = static_cast<std::uint64_t>(std::time(nullptr)); 
        kotte::Application app{1280, 720, "Kotte", seed};
        app.run();
    } catch(const std::exception& error){
        TraceLog(LOG_ERROR, "%s", error.what());
        return 1;
    }    
    return 0;
}
