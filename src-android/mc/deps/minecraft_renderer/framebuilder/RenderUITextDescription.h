#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureDescription.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Color; }
namespace mce { class Mesh; }
namespace mce::Font { struct RenderingParameters; }
// clang-format on

namespace mce::framebuilder {

struct RenderUITextDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                          mMesh;
    ::ll::TypedStorage<8, 8, ::glm::mat<4, 4, float, (glm::qualifier)0> const&>           mWorldMatrix;
    ::ll::UntypedStorage<8, 24>                                                           mTexture;
    ::ll::TypedStorage<8, 8, ::mce::Color const&>                                         mColor;
    ::ll::TypedStorage<8, 8, std::optional<glm::vec<4, float, (glm::qualifier)0>> const&> mClipRegion;
    ::ll::TypedStorage<8, 8, std::optional<mce::Font::RenderingParameters> const&>        mParameters;
    ::ll::TypedStorage<2, 2, ushort const>                                                mViewId;
    ::ll::TypedStorage<1, 1, bool const>                                                  mNeedsDepth;
    ::ll::TypedStorage<8, 40, ::OffscreenCaptureDescription>                              mOffscreenCaptureDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderUITextDescription& operator=(RenderUITextDescription const&);
    RenderUITextDescription(RenderUITextDescription const&);
    RenderUITextDescription();
};

} // namespace mce::framebuilder
