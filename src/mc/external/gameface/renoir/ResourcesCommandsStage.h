#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum ResourcesCommandsStage : uint {
    RCS_PreExecuteRendering          = 0,
    RCS_PostExecuteRendering         = 1,
    RCS_DestroyAllRenderingResources = 2,
    RCS_CreateGlyphResources         = 3,
    RCS_DestroyGlyphAtlases          = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ResourcesCommandsStage : int {
    PreExecuteRendering          = 0,
    PostExecuteRendering         = 1,
    DestroyAllRenderingResources = 2,
    CreateGlyphResources         = 3,
    DestroyGlyphAtlases          = 4,
};
#else // @header-generator platform
enum class ResourcesCommandsStage : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
