#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy::Spawn { struct PermuteType; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_21_60::Spawn {

struct PermuteType {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mWeight;
    ::ll::TypedStorage<4, 4, int> mMinGuaranteed;
    ::ll::UntypedStorage<8, 24>   mEntityType;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                          mWeight;
    ::ll::TypedStorage<4, 4, int>                          mMinGuaranteed;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<1>> mEntityType;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_21_60::Spawn::PermuteType from(::SharedTypes::Legacy::Spawn::PermuteType const& val);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
