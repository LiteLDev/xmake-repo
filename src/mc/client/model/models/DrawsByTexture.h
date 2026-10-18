#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/models/MeshRenderData.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
namespace mce { class Shader; }
namespace mce { struct ClientTexture; }
// clang-format on

class DrawsByTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ClientTexture const*>  mTexture;
    ::ll::TypedStorage<8, 24, std::vector<MeshRenderData>> mMeshes;
    ::ll::UntypedStorage<8, 24>                            mDrawsByTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawsByTexture& operator=(DrawsByTexture const&);
    DrawsByTexture(DrawsByTexture const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DrawsByTexture();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class MeshRenderData;
namespace mce { struct ClientTexture; }
// clang-format on

class DrawsByTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ClientTexture const*>      mTexture;
    ::ll::TypedStorage<8, 24, ::std::vector<::MeshRenderData>> mMeshes;
    ::ll::TypedStorage<8, 24, ::std::vector<::DrawsByTexture>> mDrawsByTexture;
    // NOLINTEND
};
#else // @header-generator platform
class DrawsByTexture {};
#endif // @header-generator platform
#endif // @header-generator platform
