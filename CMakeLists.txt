cmake_minimum_required(VERSION 2.8)
project(put_chunk)

set(SOURCES ndncatchunks.hpp startCatChunks.cpp consumer.hpp consumer.cpp data-fetcher.cpp data-fetcher.hpp discover-version-fixed.cpp discover-version-fixed.hpp discover-version-iterative.hpp discover-version-iterative.cpp discover-version.cpp discover-version.hpp ndncatchunks.cpp options.cpp options.hpp pipeline-interests.cpp pipeline-interests.hpp common.hpp version.cpp version.hpp pipeline-interests-fixed-window.cpp pipeline-interests-fixed-window.cpp)

add_executable(pck ${SOURCES})

target_compile_options(pck PUBLIC -O2 -g -pedantic -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -std=c++11 -pthread -pthread -DNDEBUG -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_SYS_BITYPES_H=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_NDN_CXX=1)

target_link_libraries(pck -Wl,-Bstatic -Wl,-Bdynamic -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu -lndn-cxx  -lcryptopp -lssl -lcrypto -lsqlite3 -lrt -lpthread -lboost_system)
