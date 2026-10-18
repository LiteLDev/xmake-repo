#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon { struct TextureDescription; }
namespace mce::framebuilder { struct GamefaceMeshTexture; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon { struct TextureDescription; }
namespace mce::framebuilder { struct GamefaceMeshTexture; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
struct VisitedTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::TextureDescription const&>             mDescription;
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceMeshTexture const&> mTexture;
    ::ll::TypedStorage<4, 4, int>                                             mTextureIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    VisitedTexture& operator=(VisitedTexture const&);
    VisitedTexture(VisitedTexture const&);
    VisitedTexture();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct VisitedTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::TextureDescription const&>             mDescription;
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceMeshTexture const&> mTexture;
    ::ll::TypedStorage<4, 4, int>                                             mTextureIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    VisitedTexture& operator=(VisitedTexture const&);
    VisitedTexture(VisitedTexture const&);
    VisitedTexture();
};
#else // @header-generator platform
struct VisitedTexture {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface
