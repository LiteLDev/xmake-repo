#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace TextureSetHelpers {

struct NamePair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType> layerType;
    ::ll::TypedStorage<8, 24, std::string const>        jsonLayerPropertyNames;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk92c4f0;
    ::ll::UntypedStorage<8, 32> mUnkcce0f1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NamePair& operator=(NamePair const&);
    NamePair(NamePair const&);
    NamePair();
#endif // @header-generator platform
};

} // namespace TextureSetHelpers
