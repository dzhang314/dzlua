cmake_minimum_required(VERSION 3.12)
project(dzlua)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(dzlua
        src/lapi.cpp
        src/lapi.hpp
        src/lauxlib.cpp
        src/lauxlib.hpp
        src/lbaselib.cpp
        src/lcode.cpp
        src/lcode.hpp
        src/ldblib.cpp
        src/ldebug.cpp
        src/ldebug.hpp
        src/ldo.cpp
        src/ldo.hpp
        src/ldump.cpp
        src/lfunc.cpp
        src/lfunc.hpp
        src/lgc.cpp
        src/lgc.hpp
        src/linit.cpp
        src/liolib.cpp
        src/llex.cpp
        src/llex.hpp
        src/llimits.hpp
        src/lmathlib.cpp
        src/lmem.cpp
        src/lmem.hpp
        src/loadlib.cpp
        src/lobject.cpp
        src/lobject.hpp
        src/lopcodes.cpp
        src/lopcodes.hpp
        src/loslib.cpp
        src/lparser.cpp
        src/lparser.hpp
        src/lstate.cpp
        src/lstate.hpp
        src/lstring.cpp
        src/lstring.hpp
        src/lstrlib.cpp
        src/ltable.cpp
        src/ltable.hpp
        src/ltablib.cpp
        src/ltm.cpp
        src/ltm.hpp
        src/lua.cpp
        src/lua.hpp
        src/luaconf.hpp
        src/lualib.hpp
        src/lundump.cpp
        src/lundump.hpp
        src/lvm.cpp
        src/lvm.hpp
        src/lzio.cpp
        src/lzio.hpp)
