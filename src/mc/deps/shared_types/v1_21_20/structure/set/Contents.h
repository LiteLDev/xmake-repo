#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/set/Description.h"
#include "mc/deps/shared_types/v1_21_20/structure/set/RandomSpreadPlacement.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_20/structure/set/Structure.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_21_20::JigsawStructureSet { struct Structure; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_21_20::JigsawStructureSet {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_20::JigsawStructureSet::Description>           mDescription;
    ::ll::TypedStorage<4, 16, ::SharedTypes::v1_21_20::JigsawStructureSet::RandomSpreadPlacement> mPlacement;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureSet::Structure>>  mStructures;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_20::JigsawStructureSet::Description>              mDescription;
    ::ll::TypedStorage<4, 16, ::SharedTypes::v1_21_20::JigsawStructureSet::RandomSpreadPlacement>    mPlacement;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureSet::Structure>> mStructures;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureSet
