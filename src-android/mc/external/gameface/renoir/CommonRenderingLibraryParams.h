#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

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

} // namespace renoir
