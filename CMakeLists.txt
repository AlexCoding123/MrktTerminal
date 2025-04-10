cmake_minimum_required(VERSION 3.12)
project(MrktTerminal)

set(CMAKE_CXX_STANDARD 17)

# Add PugiXML like this since it has its own CMakeLists.txt
add_subdirectory(pugixml)

# Add Curl
find_package(CURL REQUIRED)

#My main executable
add_executable(MrktTerminal MarketNews.cpp)

#Link both pugixml and Curl
target_link_libraries(MrktTerminal
   pugixml
    CURL::libcurl
)

