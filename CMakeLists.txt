cmake_minimum_required(VERSION 3.16)
project(Project)

set(CMAKE_CXX_STANDARD 17)

add_executable(Project main.cpp Game/Game.cpp Game/Game.h GameMap/Grid/Grid.cpp GameMap/Grid/Grid.h Player/Player.h Player/Player.cpp Player/IPlayer.h Player/Inventory/Inventory.cpp Player/Inventory/Inventory.h WorldObjects/WorldObject.cpp WorldObjects/WorldObject.h WorldObjects/IWorldObject.h WorldObjects/Assembler/Assembler.cpp WorldObjects/Assembler/Assembler.h WorldObjects/Resource/Resource.h WorldObjects/Resource/Resource.cpp WorldObjects/Component/Component.h WorldObjects/Component/Component.cpp WorldObjects/Boulder/Boulder.h WorldObjects/Boulder/Boulder.cpp WorldObjects/Boulder/Boulder.h WorldObjects/Rocket/Rocket.h WorldObjects/Rocket/Rocket.cpp WorldObjects/Resource/Resource.h WorldObjects/Resource/Resource.cpp)