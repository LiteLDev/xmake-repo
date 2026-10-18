#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ThreadedFrameConstantsContainer;
namespace mce { class PerFrameConstants; }
namespace mce { class RenderChunkConstants; }
namespace mce { class ShaderConstants; }
namespace mce { class WorldConstants; }
// clang-format on

class CommandListTaskContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::PerFrameConstants&>    mThreadedPerFrameConstants;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstants&>      mThreadedShaderConstants;
    ::ll::TypedStorage<8, 8, ::mce::RenderChunkConstants&> mRenderChunkConstantBuffer;
    ::ll::TypedStorage<8, 8, ::mce::WorldConstants&>       mThreadedWorldConstantBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandListTaskContext& operator=(CommandListTaskContext const&);
    CommandListTaskContext(CommandListTaskContext const&);
};
#else // @header-generator platform
class CommandListTaskContext {};
#endif // @header-generator platform
