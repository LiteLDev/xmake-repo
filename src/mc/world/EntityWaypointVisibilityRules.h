#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class EntityWaypointVisibilityRules {
public:
    // EntityWaypointVisibilityRules inner types define
    enum class Flag : uchar {
        Sneaking  = 1,
        Invisible = 2,
        Dead      = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar> mFlags;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkdc4ee9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EntityWaypointVisibilityRules& operator=(EntityWaypointVisibilityRules const&);
    EntityWaypointVisibilityRules(EntityWaypointVisibilityRules const&);
    EntityWaypointVisibilityRules();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator()(::Actor const&) const;

    MCNAPI void set(::EntityWaypointVisibilityRules::Flag, bool);

    MCNAPI bool test(::EntityWaypointVisibilityRules::Flag) const;
#else // @header-generator platform
    MCNAPI bool operator()(::Actor const& actor) const;
#endif // @header-generator platform
    // NOLINTEND
};
