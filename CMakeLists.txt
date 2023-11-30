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
        DataStructure/LinkList/LinkListOperation.cpp
        DataStructure/LinkList/ReverseLinkList.cpp
        DataStructure/LinkList/SwapNodes.cpp
        DataStructure/LinkList/LCCI.cpp
        bitedancing/simlarNote.cpp
        DataStructure/Hash/ValidAnagram.cpp
        DataStructure/Hash/main.cpp
        DataStructure/Hash/funcAndStruct.h
        Sort/HeapSort.cpp
        Disk/fileIO.cpp
        Disk/fileIO.h
)
