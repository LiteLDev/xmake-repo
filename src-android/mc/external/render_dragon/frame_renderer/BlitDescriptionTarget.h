#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/BindMaterialTexture.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class RenderContext; }
// clang-format on

namespace dragon::framerenderer::drawutils {

struct BlitDescriptionTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                        mTexture;
    ::ll::TypedStorage<1, 1, uchar>                                    mMip;
    ::ll::TypedStorage<2, 4, ::glm::vec<2, ushort, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<1, 1, uchar>                                    mDepth;
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawutils
