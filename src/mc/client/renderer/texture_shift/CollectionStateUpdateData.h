#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace TextureShift { struct CollectionState; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace TextureShift {

#if defined(LL_PLAT_A) // @header-generator platform
struct CollectionStateUpdateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::string const&>                     collectionName;
    ::ll::TypedStorage<8, 8, ::TextureShift::CollectionState const&> collectionState;
    ::ll::TypedStorage<1, 1, bool>                                   newStep;
    // NOLINTEND

public:
    // prevent constructor by default
    CollectionStateUpdateData& operator=(CollectionStateUpdateData const&);
    CollectionStateUpdateData(CollectionStateUpdateData const&);
    CollectionStateUpdateData();
};
#else // @header-generator platform
struct CollectionStateUpdateData {};
#endif // @header-generator platform

} // namespace TextureShift
