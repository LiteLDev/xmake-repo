#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Slime.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class IConstBlockSource;
struct ActorDefinitionIdentifier;
// clang-format on

class LavaSlime : public ::Slime {
public:
    // prevent constructor by default
    LavaSlime();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LavaSlime();

    virtual float getBrightness(float, ::IConstBlockSource const&) const;

    virtual bool isOnFire() const;

    virtual bool checkSpawnRules(bool);

    virtual int getArmorValue() const;

    virtual bool isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LavaSlime(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI float $getBrightness(float, ::IConstBlockSource const&) const;

    MCNAPI bool $isOnFire() const;

    MCNAPI bool $checkSpawnRules(bool);

    MCNAPI int $getArmorValue() const;

    MCNAPI bool $isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
