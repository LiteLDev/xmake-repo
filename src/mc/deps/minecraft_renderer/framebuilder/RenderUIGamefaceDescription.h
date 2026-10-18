#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/GamefacePipelineState.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct GamefaceBatchDraw; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderUIGamefaceDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144>                                            mPipelineState;
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceBatchDraw const&> mBatchDraw;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderUIGamefaceDescription& operator=(RenderUIGamefaceDescription const&);
    RenderUIGamefaceDescription(RenderUIGamefaceDescription const&);
    RenderUIGamefaceDescription();
};
#else // @header-generator platform
struct RenderUIGamefaceDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
