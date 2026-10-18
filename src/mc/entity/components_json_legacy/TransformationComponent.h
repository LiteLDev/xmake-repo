#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
struct ActorUniqueID;
struct TransformationDescription;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class TransformationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mDelayTicks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TransformationComponent();
#else // @header-generator platform
    MCAPI void reloadComponent(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getDelayTicks() const;

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI void reloadComponent(::Actor&);

    MCNAPI void setDelayTicks(int);

    MCNAPI void transformIfAble(::Actor&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void transformIfAble(::Actor& actor, bool shouldRemove);
#endif // @header-generator platform
    // NOLINTEND
};
