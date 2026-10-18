#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_50/structure/PoolElementStructureSection.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_50 { struct PoolElementStructureSection; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace StructureMetadata {

struct StructureInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                      mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                      mMinBounds;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                      mMaxBounds;
    ::ll::TypedStorage<8, 24, std::string>                                                     mStructure;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_50::PoolElementStructureSection>> mSections;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                          mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                          mMinBounds;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                          mMaxBounds;
    ::ll::TypedStorage<8, 32, ::std::string>                                                       mStructure;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::PoolElementStructureSection>> mSections;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace StructureMetadata
