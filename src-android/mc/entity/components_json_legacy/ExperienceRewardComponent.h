#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class ExperienceRewardComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>> mOnBred;
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>> mOnDeath;
    ::ll::TypedStorage<1, 1, bool>                         mIsExperienceDropEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceRewardComponent& operator=(ExperienceRewardComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool getIsExperienceDropEnabled() const;

    MCNAPI int getOnBredExperience(::Actor&) const;

    MCNAPI int getOnDeathExperience(::Actor&) const;

    MCNAPI ::ExperienceRewardComponent& operator=(::ExperienceRewardComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setIsExperienceDropEnabled(bool const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& mIsExperienceDropEnabledTag();
    // NOLINTEND
};
