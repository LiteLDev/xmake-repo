#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_50/structure/BoundingBox.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_50/structure/JigsawJunction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace SharedTypes::v1_21_50 { struct JigsawJunction; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct PoolElementStructureSection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                        mElementID;
    ::ll::TypedStorage<4, 4, int>                                                 mGroundOffset;
    ::ll::TypedStorage<4, 24, ::SharedTypes::v1_21_50::BoundingBox>               mBoundingBox;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                         mPosition;
    ::ll::TypedStorage<1, 1, ::Rotation>                                          mRotation;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_50::JigsawJunction>> mJunctions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                          mElementID;
    ::ll::TypedStorage<4, 4, int>                                                     mGroundOffset;
    ::ll::TypedStorage<4, 24, ::SharedTypes::v1_21_50::BoundingBox>                   mBoundingBox;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mPosition;
    ::ll::TypedStorage<1, 1, ::Rotation>                                              mRotation;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::JigsawJunction>> mJunctions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PoolElementStructureSection& operator=(PoolElementStructureSection const&);
    PoolElementStructureSection();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PoolElementStructureSection();
#else // @header-generator platform
    MCAPI PoolElementStructureSection(::SharedTypes::v1_21_50::PoolElementStructureSection const&);

    MCAPI ::SharedTypes::v1_21_50::PoolElementStructureSection&
    operator=(::SharedTypes::v1_21_50::PoolElementStructureSection&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_50::PoolElementStructureSection const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
