#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace FlatteningUtils {

struct BlockNameRefAuxVariant {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const HashedString>> newBlockName;
    ::ll::TypedStorage<4, 4, int>                                        aux;
    ::ll::TypedStorage<4, 4, int>                                        variant;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::HashedString const>> newBlockName;
    ::ll::TypedStorage<4, 4, int>                                            aux;
    ::ll::TypedStorage<4, 4, int>                                            variant;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace FlatteningUtils
