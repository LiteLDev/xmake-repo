#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct CommonRenderingLibraryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  AllowMultipleRenderingThreads;
    ::ll::TypedStorage<1, 1, bool>  SetRenderingResourcesDebugNames;
    ::ll::TypedStorage<1, 1, bool>  AllowMultithreadedCommandProcessing;
    ::ll::TypedStorage<4, 4, float> PathTessellationThresholdRatio;
    ::ll::TypedStorage<4, 4, uint>  TextAtlasWidth;
    ::ll::TypedStorage<4, 4, uint>  TextAtlasHeight;
    ::ll::TypedStorage<1, 1, bool>  PreferSingleColorGlyphAtlas;
    ::ll::TypedStorage<1, 1, bool>  PreferGPUTessellator;
    ::ll::TypedStorage<4, 4, uint>  MinPathAtlasSize;
    ::ll::TypedStorage<4, 4, uint>  MaxPathAtlasSize;
    ::ll::TypedStorage<8, 8, void*> DeveloperOptions;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CommonRenderingLibraryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk6dfadf;
    ::ll::UntypedStorage<1, 1> mUnk6b96e5;
    ::ll::UntypedStorage<1, 1> mUnkffb31f;
    ::ll::UntypedStorage<4, 4> mUnkaedd6f;
    ::ll::UntypedStorage<4, 4> mUnkfa89e9;
    ::ll::UntypedStorage<4, 4> mUnkec3dc2;
    ::ll::UntypedStorage<1, 1> mUnk6f6d67;
    ::ll::UntypedStorage<1, 1> mUnka8a44d;
    ::ll::UntypedStorage<4, 4> mUnke9209d;
    ::ll::UntypedStorage<4, 4> mUnk695f0f;
    ::ll::UntypedStorage<8, 8> mUnkdee5ba;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonRenderingLibraryParams& operator=(CommonRenderingLibraryParams const&);
    CommonRenderingLibraryParams(CommonRenderingLibraryParams const&);
    CommonRenderingLibraryParams();
};
#else // @header-generator platform
struct CommonRenderingLibraryParams {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
