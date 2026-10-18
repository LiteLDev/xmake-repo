#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct MobDescriptor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mTargetFilter;
#else // @header-generator platform
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mTargetFilter;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                      mMaxDistance;
    ::ll::TypedStorage<4, 4, float>                                      mMaxHeight;
    ::ll::TypedStorage<4, 4, float>                                      mMaxFlee;
    ::ll::TypedStorage<4, 4, float>                                      mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                      mSprintSpeedModifier;
    ::ll::TypedStorage<1, 1, bool>                                       mCheckIfOutnumbered;
    ::ll::TypedStorage<1, 1, bool>                                       mReevaluateDescription;
    ::ll::TypedStorage<4, 4, int>                                        mPriority;
    ::ll::TypedStorage<4, 4, int>                                        mCooldownInSeconds;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>>                        mMustSee;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                      mMustSee;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                        mMustSeeForgetSeconds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_120::MobDescriptor const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_120::MobDescriptor const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~MobDescriptor();
#else // @header-generator platform
    MCAPI ~MobDescriptor();
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
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
