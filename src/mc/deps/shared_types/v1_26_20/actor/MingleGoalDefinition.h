#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/MoveToPOIGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct MingleGoalDefinition : public ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>        mDuration;
    ::ll::TypedStorage<4, 4, float>        mCooldown;
    ::ll::TypedStorage<8, 24, std::string> mMinglePartnerType;
    ::ll::TypedStorage<4, 4, float>        mMingleDistance;
    ::ll::UntypedStorage<4, 4>             mPOIType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_26_20::MingleGoalDefinition const&) const;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                     mDuration;
    ::ll::TypedStorage<4, 4, float>                                                     mCooldown;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mMinglePartnerType;
    ::ll::TypedStorage<4, 4, float>                                                     mMingleDistance;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition::POIType> mPOIType;
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
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& COOLDOWN_DESCRIPTION();

    MCNAPI static std::string_view const& DESCRIPTION();

    MCNAPI static std::string_view const& DURATION_DESCRIPTION();

    MCNAPI static std::string_view const& MINGLE_DISTANCE_DESCRIPTION();

    MCNAPI static std::string_view const& MINGLE_PARTNER_TYPE_DESCRIPTION();

    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
