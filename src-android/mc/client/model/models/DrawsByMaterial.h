#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/DrawsByMesh.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
namespace mce { class Mesh; }
// clang-format on

class DrawsByMaterial {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>       mMaterial;
    ::ll::TypedStorage<8, 24, std::vector<DrawsByMesh>> mDrawsByMesh;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawsByMaterial& operator=(DrawsByMaterial const&);
    DrawsByMaterial(DrawsByMaterial const&);
};
