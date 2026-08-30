#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum ResourcesCommandsStage : uint {
    RCS_PreExecuteRendering          = 0,
    RCS_PostExecuteRendering         = 1,
    RCS_DestroyAllRenderingResources = 2,
    RCS_CreateGlyphResources         = 3,
    RCS_DestroyGlyphAtlases          = 4,
};

}
