#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/models/DrawsByRenderController.h"

// auto generated forward declare list
// clang-format off
class ClientPBRTextureData;
class DrawsByTexture;
class RenderController;
class ScreenContext;
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

class SortedMeshDrawList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DrawsByRenderController>> mDrawsByRenderController;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();

    MCNAPI ::DrawsByTexture*
    getDraw(::RenderController const*, ::mce::MaterialPtr const&, ::mce::Mesh*, ::ClientPBRTextureData const&);

    MCNAPI ~SortedMeshDrawList();
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
class ClientPBRTextureData;
class DrawsByRenderController;
class DrawsByTexture;
class RenderController;
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

class SortedMeshDrawList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DrawsByRenderController>> mDrawsByRenderController;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::DrawsByTexture* getDraw(
        ::RenderController const*     renderController,
        ::mce::MaterialPtr const&     materialPtr,
        ::mce::Mesh*                  mesh,
        ::ClientPBRTextureData const& textures
    );
    // NOLINTEND
};
#else // @header-generator platform
class SortedMeshDrawList {};
#endif // @header-generator platform
#endif // @header-generator platform
