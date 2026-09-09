#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class RemovedActorDamageByType : public ::ActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorType> mEntityType;
    // NOLINTEND

public:
    // prevent constructor by default
    RemovedActorDamageByType();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::ActorType getEntityType() const;

    virtual std::unique_ptr<ActorDamageSource> clone() const;

    virtual std::pair<std::string, std::vector<std::string>> _getDeathMessageInternal(std::string const&, ::Actor*) const;
    // clang-format on
    // NOLINTEND
};
