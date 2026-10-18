#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ExpressionNode;
#endif // @header-generator platform
// clang-format on

class ExperienceRewardComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>> mOnBred;
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>> mOnDeath;
    ::ll::TypedStorage<1, 1, bool>                         mIsExperienceDropEnabled;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mOnBred;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mOnDeath;
    ::ll::TypedStorage<1, 1, bool>                             mIsExperienceDropEnabled;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ExperienceRewardComponent& operator=(ExperienceRewardComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI int getOnDeathExperience(::Actor& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIsExperienceDropEnabled() const;
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getOnBredExperience(::Actor&) const;

    MCNAPI int getOnDeathExperience(::Actor&) const;

    MCNAPI ::ExperienceRewardComponent& operator=(::ExperienceRewardComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setIsExperienceDropEnabled(bool const);
#else // @header-generator platform
    MCAPI ~ExperienceRewardComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& mIsExperienceDropEnabledTag();
#else // @header-generator platform
    MCAPI static ::std::string const& mIsExperienceDropEnabledTag();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
