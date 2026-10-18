#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class DrawsByTexture;
namespace mce { class Mesh; }
// clang-format on

class DrawsByMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh*>                     mMesh;
    ::ll::TypedStorage<8, 24, ::std::vector<::DrawsByTexture>> mDrawsByTexture;
    // NOLINTEND
};
#else // @header-generator platform
class DrawsByMesh {};
#endif // @header-generator platform
#endif // @header-generator platform
