cmake_minimum_required(VERSION 3.26)
project(CplusLearning)

set(CMAKE_CXX_STANDARD 17)

add_executable(CplusLearning
        DataStructure/LinkList/RemoveElements.cpp
        DesignPattern/Proxy/ProxyLearning.cpp
        DataStructure/LinkList/LinkListCircle.cpp
        DataStructure/LinkList/RemoveNodeEndofList.cpp
        DataStructure/LinkList/main.cpp
        DataStructure/LinkList/func.h
        DataStructure/LinkList/DesignLinkList.cpp
        Disk/filStruct.h
)
