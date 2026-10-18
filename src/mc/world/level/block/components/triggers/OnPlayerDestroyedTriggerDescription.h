#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/triggers/BlockTriggerDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/components/triggers/OnPlayerDestroyedTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
class OnPlayerDestroyedTriggerDescription : public ::BlockTriggerDescription<OnPlayerDestroyedTrigger> {
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class OnPlayerDestroyedTrigger;
// clang-format on

class OnPlayerDestroyedTriggerDescription : public ::BlockTriggerDescription<::OnPlayerDestroyedTrigger> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OnPlayerDestroyedTriggerDescription();

    virtual std::string const& getName() const;
#else // @header-generator platform
    virtual ::std::string const& getName() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string const& NameID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getName() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getName() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
