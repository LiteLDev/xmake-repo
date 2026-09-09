#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorDamageSource.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
// clang-format on

class ActorDamageByBlockSource : public ::ActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDamageByBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorDamageByBlockSource();

    virtual bool isBlockSource() const;

    virtual std::unique_ptr<ActorDamageSource> clone() const;

    virtual std::pair<std::string, std::vector<std::string>> _getDeathMessageInternal(std::string const&, ::Actor*) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isBlockSource() const;

    MCNAPI std::unique_ptr<ActorDamageSource> $clone() const;

    MCNAPI std::pair<std::string, std::vector<std::string>>
           $_getDeathMessageInternal(std::string const&, ::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
