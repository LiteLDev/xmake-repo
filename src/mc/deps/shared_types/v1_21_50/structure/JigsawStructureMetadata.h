#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_50/structure/JigsawBlockMetadata.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace SharedTypes::v1_21_50 { class JigsawBlockMetadata; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_21_50 {

struct JigsawStructureMetadata {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                                              mSize;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_50::JigsawBlockMetadata>> mJigsawBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                     mUseLegacyRotation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JigsawStructureMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                  mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::JigsawBlockMetadata>> mJigsawBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                         mUseLegacyRotation;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
