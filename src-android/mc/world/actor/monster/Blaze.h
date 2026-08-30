#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class IConstBlockSource;
struct ActorDefinitionIdentifier;
// clang-format on

class Blaze : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAllowedHeightOffset;
    ::ll::TypedStorage<4, 4, int>   mNextHeightOffsetChangeTick;
    // NOLINTEND

public:
    // prevent constructor by default
    Blaze();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Blaze();

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void normalTick();

    virtual float getBrightness(float, ::IConstBlockSource const&) const;

    virtual bool isOnFire() const;

    virtual void aiStep();

    virtual bool isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Blaze(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void preTravel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCNAPI void $normalTick();

    MCNAPI float $getBrightness(float, ::IConstBlockSource const&) const;

    MCNAPI bool $isOnFire() const;

    MCNAPI void $aiStep();

    MCNAPI bool $isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
