#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BaseGoal;
class EntityContext;
class Mob;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class BaseGoalDefinition {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPriority;
    ::ll::TypedStorage<4, 4, int> mControlFlags;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseGoalDefinition() = default;

    virtual bool validateMobType(::Mob&) const;

    virtual bool validate(::Mob&) const;
    // NOLINTEND

#else // @header-generator platform
#endif // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, int> const& mControlFlagMap();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, int> const& mControlFlagMap();
#endif // @header-generator platform
    // NOLINTEND
};
