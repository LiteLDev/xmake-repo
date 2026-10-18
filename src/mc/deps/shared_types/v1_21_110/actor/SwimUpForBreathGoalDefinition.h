#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_110 {

struct SwimUpForBreathGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>        mSpeedMod;
    ::ll::TypedStorage<4, 4, int>          mSearchRadius;
    ::ll::TypedStorage<4, 4, int>          mSearchHeight;
    ::ll::TypedStorage<8, 24, std::string> mMaterialTypeName;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>          mSpeedMod;
    ::ll::TypedStorage<4, 4, int>            mSearchRadius;
    ::ll::TypedStorage<4, 4, int>            mSearchHeight;
    ::ll::TypedStorage<8, 32, ::std::string> mMaterialTypeName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& DEFAULT_MATERIAL_TYPE_NAME();

    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
