#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace dragon::mesh { struct VertexFormat; }
// clang-format on

namespace mce::framebuilder {

struct RenderUIImGuiDescription {
public:
    // RenderUIImGuiDescription inner types declare
    // clang-format off
    struct DrawItem;
    // clang-format on

    // RenderUIImGuiDescription inner types define
    struct DrawItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0> const> mScissor;
        ::ll::TypedStorage<4, 4, uint const>                                     mIndexBase;
        ::ll::TypedStorage<4, 4, uint const>                                     mIndexCount;
        ::ll::UntypedStorage<8, 24>                                              mTexture;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::mesh::VertexFormat const&>                                             mVbFormat;
    ::ll::TypedStorage<8, 16, ::gsl::span<const uchar> const>                                                 mVbData;
    ::ll::TypedStorage<8, 16, ::gsl::span<const ushort> const>                                                mIbData;
    ::ll::TypedStorage<8, 16, ::gsl::span<const mce::framebuilder::RenderUIImGuiDescription::DrawItem> const> mItems;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0> const>                               mProj;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderUIImGuiDescription& operator=(RenderUIImGuiDescription const&);
    RenderUIImGuiDescription(RenderUIImGuiDescription const&);
    RenderUIImGuiDescription();
};

} // namespace mce::framebuilder
