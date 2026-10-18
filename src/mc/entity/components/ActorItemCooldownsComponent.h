#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components/ItemCooldown.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ItemCooldown;
// clang-format on
#endif // @header-generator platform

struct ActorItemCooldownsComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ItemCooldown>> mItemCooldowns;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>> mVanillaItemCooldowns;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ItemCooldown>> mItemCooldowns;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mVanillaItemCooldowns;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorItemCooldownsComponent& operator=(ActorItemCooldownsComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorItemCooldownsComponent(::ActorItemCooldownsComponent&&);
#else // @header-generator platform
    MCAPI int getItemCooldownLeft(::HashedString const& category) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getItemCooldownLeft(::HashedString const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI float getItemCooldownProgress(::HashedString const& category) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::std::string startItemCooldown(::HashedString const& category, int tickDuration);
#endif // @header-generator platform
    // NOLINTEND
};
