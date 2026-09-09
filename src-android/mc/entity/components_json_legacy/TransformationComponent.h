#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
struct ActorUniqueID;
struct TransformationDescription;
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
    MCNAPI TransformationComponent();

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
    // NOLINTEND
};
