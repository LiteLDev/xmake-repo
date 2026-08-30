#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components/ItemCooldown.h"

struct ActorItemCooldownsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ItemCooldown>> mItemCooldowns;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>> mVanillaItemCooldowns;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorItemCooldownsComponent& operator=(ActorItemCooldownsComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorItemCooldownsComponent(::ActorItemCooldownsComponent&&);

    MCNAPI int getItemCooldownLeft(::HashedString const&) const;

    MCNAPI int getItemCooldownLeft(ulong const) const;

    MCNAPI float getItemCooldownProgress(::HashedString const&) const;

    MCNAPI int getMaxItemCooldownLeft() const;

    MCNAPI bool isItemOnCooldown(::HashedString const&) const;

    MCNAPI std::string startItemCooldown(::HashedString const&, int);

    MCNAPI void tickCooldowns();

    MCNAPI ~ActorItemCooldownsComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorItemCooldownsComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
