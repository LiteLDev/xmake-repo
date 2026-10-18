#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class JigsawJsonType : uchar {
    Processor    = 0,
    Structure    = 1,
    StructureSet = 2,
    TemplatePool = 3,
};

}
#endif // @header-generator platform
