#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"

// auto generated forward declare list
// clang-format off
class AABB;
class IClientInstance;
class ScreenContext;
class Tessellator;
class Vec3;
namespace mce { class Color; }
// clang-format on

class InsideCubeRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 616, ::mce::Mesh>       mCubeMesh;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mCubeMaterial;
    ::ll::TypedStorage<1, 4, bool[4]>             mViewInsideSolidBlockLastRender;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InsideCubeRenderer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
