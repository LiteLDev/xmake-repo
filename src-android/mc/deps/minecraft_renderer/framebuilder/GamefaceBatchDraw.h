#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceBatchDrawMesh.h"

namespace mce::framebuilder {

struct GamefaceBatchDraw {
public:
    // GamefaceBatchDraw inner types define
    using GamefaceMesh = ::mce::framebuilder::GamefaceBatchDrawMesh;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::GamefaceBatchDrawMesh>> meshes;
    // NOLINTEND

public:
    // prevent constructor by default
    GamefaceBatchDraw& operator=(GamefaceBatchDraw const&);
    GamefaceBatchDraw(GamefaceBatchDraw const&);
    GamefaceBatchDraw();
};

} // namespace mce::framebuilder
