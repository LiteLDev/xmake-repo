#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureDescription.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace dragon::framerenderer {

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

} // namespace dragon::framerenderer
