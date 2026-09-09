#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/DrawsByTexture.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
namespace mce { class Mesh; }
namespace mce { class Shader; }
namespace mce { struct ClientTexture; }
// clang-format on

class DrawsByMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh*>                 mMesh;
    ::ll::TypedStorage<8, 24, std::vector<DrawsByTexture>> mDrawsByTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawsByMesh& operator=(DrawsByMesh const&);
    DrawsByMesh(DrawsByMesh const&);
};
