#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace dragon::materials { class CompiledMaterialManager; }
// clang-format on

namespace dragon {

struct DragonMaterialResourceServiceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mCompiledMaterials;
    ::ll::UntypedStorage<8, 48> mLoadTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonMaterialResourceServiceContext& operator=(DragonMaterialResourceServiceContext const&);
    DragonMaterialResourceServiceContext();
};

} // namespace dragon
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
