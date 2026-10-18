#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"

// auto generated forward declare list
// clang-format off
class ListTag;
class SaveContext;
class SemVersion;
// clang-format on

class PlayerUIContainer : public ::SimpleContainer {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    PlayerUIContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerUIContainer();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerUIContainer(std::string const&, bool, int);
#else // @header-generator platform
    MCAPI void load(::ListTag const& inventoryList, ::SemVersion const& version);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void load(::ListTag const&, ::SemVersion const&);

    MCNAPI std::unique_ptr<ListTag> save(::SaveContext const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, bool, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ListTag> save(::SaveContext const& saveContext) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
