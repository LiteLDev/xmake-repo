#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class Mob;
class MoveControl;
#if defined(LL_PLAT_A) // @header-generator platform
struct MoveControlDescription;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MoveControlComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                          mHasWanted;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mWantedPosition;
    ::ll::TypedStorage<1, 1, bool>                          mShouldBreach;
    ::ll::TypedStorage<4, 4, float>                         mMaxTurn;
    ::ll::TypedStorage<4, 4, float>                         mSpeedModifier;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MoveControl>> mMoveControl;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                              mHasWanted;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mWantedPosition;
    ::ll::TypedStorage<1, 1, bool>                              mShouldBreach;
    ::ll::TypedStorage<4, 4, float>                             mMaxTurn;
    ::ll::TypedStorage<4, 4, float>                             mSpeedModifier;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MoveControl>> mMoveControl;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MoveControlComponent& operator=(MoveControlComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MoveControlComponent();
#else // @header-generator platform
    MCAPI void initMultiTypeMovementComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void setInternalType(::std::unique_ptr<::MoveControl> type);
#endif // @header-generator platform
    // NOLINTEND
};
