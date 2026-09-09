#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class Mob;
class MoveControl;
struct MoveControlDescription;
// clang-format on

class MoveControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                          mHasWanted;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mWantedPosition;
    ::ll::TypedStorage<1, 1, bool>                          mShouldBreach;
    ::ll::TypedStorage<4, 4, float>                         mMaxTurn;
    ::ll::TypedStorage<4, 4, float>                         mSpeedModifier;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MoveControl>> mMoveControl;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveControlComponent& operator=(MoveControlComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MoveControlComponent();

    MCNAPI void _setWantedPosition(::Vec3 const&);

    MCNAPI bool getHasWantedPosition() const;

    MCNAPI float getMaxTurn() const;

    MCNAPI bool getShouldBreach() const;

    MCNAPI float getSpeedModifier() const;

    MCNAPI ::Vec3 const& getWantedPosition() const;

    MCNAPI void initMultiTypeMovementComponent(::Mob&, ::ActorDefinitionDescriptor&);

    MCNAPI void initializeFromDefinition(::Mob&, ::MoveControlDescription const*);

    MCNAPI void setHasWantedPosition(bool);

    MCNAPI void setInternalType(std::unique_ptr<MoveControl>);

    MCNAPI void setMaxTurn(float);

    MCNAPI void setShouldBreach(bool);

    MCNAPI void setSpeedModifier(float);

    MCNAPI void setWantedPosition(::Mob&, ::Vec3 const&, float);

    MCNAPI void update(::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
