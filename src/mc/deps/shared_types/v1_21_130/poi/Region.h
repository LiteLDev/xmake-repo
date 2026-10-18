#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/poi/Record.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::Poi { struct Record; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_21_130::Poi {

struct Region {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, SharedTypes::v1_21_130::Poi::Record>> mRecords;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::SharedTypes::v1_21_130::Poi::Record>> mRecords;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Poi
