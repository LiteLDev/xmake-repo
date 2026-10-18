#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceBatchDrawMesh.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct GamefaceBatchDraw {};
#endif // @header-generator platform

} // namespace mce::framebuilder
