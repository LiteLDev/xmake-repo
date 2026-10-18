#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::processors::JigsawReplacementHelpers {

struct Prop {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view> id;
    ::ll::TypedStorage<8, 16, std::string_view> value;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::string_view> id;
    ::ll::TypedStorage<8, 16, ::std::string_view> value;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen::processors::JigsawReplacementHelpers
