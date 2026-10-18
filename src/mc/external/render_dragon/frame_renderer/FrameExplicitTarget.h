#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureDescription.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
struct FrameExplicitTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                         mTexture;
    ::ll::TypedStorage<4, 24, ::cg::TextureDescription> mDesc;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameExplicitTarget& operator=(FrameExplicitTarget const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameExplicitTarget();

    MCNAPI ~FrameExplicitTarget();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct FrameExplicitTarget {};
#endif // @header-generator platform

} // namespace dragon::framerenderer
