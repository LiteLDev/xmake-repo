#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_60/spawn/Herd.h"
#include "mc/deps/shared_types/v1_21_60/spawn/PermuteType.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_60::Spawn { struct Herd; }
namespace SharedTypes::v1_21_60::Spawn { struct PermuteType; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_21_60::Spawn {

struct BiomeConditions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                     mWeight;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_60::Spawn::Herd>>        mHerds;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_60::Spawn::PermuteType>> mPermuteType;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData>              mBiomeFilter;
    ::ll::TypedStorage<8, 24, std::string>                                            mMobEvent;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                         mWeight;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::Spawn::Herd>>        mHerds;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::Spawn::PermuteType>> mPermuteType;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>                  mBiomeFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mMobEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeConditions& operator=(BiomeConditions const&);
    BiomeConditions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeConditions(::SharedTypes::v1_21_60::Spawn::BiomeConditions&&);

    MCAPI BiomeConditions(::SharedTypes::v1_21_60::Spawn::BiomeConditions const&);

    MCAPI bool operator==(::SharedTypes::v1_21_60::Spawn::BiomeConditions const&) const;

    MCAPI ~BiomeConditions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_60::Spawn::BiomeConditions&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_60::Spawn::BiomeConditions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
