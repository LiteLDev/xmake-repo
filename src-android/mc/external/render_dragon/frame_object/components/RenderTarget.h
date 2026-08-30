#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace dragon::frameobject::components {

struct RenderTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                        mColorTargetTextureHandle;
    ::ll::UntypedStorage<8, 24>                                        mDepthTargetTextureHandle;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mViewport;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mScissor;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderTarget& operator=(RenderTarget const&);
    RenderTarget();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderTarget();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::frameobject::components
