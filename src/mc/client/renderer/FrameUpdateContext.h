#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/FrameUpdateContextBase.h"

// auto generated forward declare list
// clang-format off
class MinecraftGameplayGraphicsResources;
class Tessellator;
namespace mce { class RenderContext; }
namespace mce { class TextureGroup; }
// clang-format on

class FrameUpdateContext : public ::FrameUpdateContextBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::RenderContext&>                 mRenderContext;
    ::ll::TypedStorage<8, 8, ::MinecraftGameplayGraphicsResources&> mMinecraftGameplayGraphicsResources;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>>   mTextureGroup;
    ::ll::TypedStorage<8, 8, ::Tessellator&>                        mTessellator;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameUpdateContext& operator=(FrameUpdateContext const&);
    FrameUpdateContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameUpdateContext(
        ::mce::RenderContext&,
        ::MinecraftGameplayGraphicsResources&,
        std::shared_ptr<mce::TextureGroup>,
        ::Tessellator&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::RenderContext&,
        ::MinecraftGameplayGraphicsResources&,
        std::shared_ptr<mce::TextureGroup>,
        ::Tessellator&
    );
    // NOLINTEND
};
#else // @header-generator platform
class FrameUpdateContext {};
#endif // @header-generator platform
