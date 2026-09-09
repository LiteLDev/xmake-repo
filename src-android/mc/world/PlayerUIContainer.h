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
    // prevent constructor by default
    PlayerUIContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerUIContainer();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerUIContainer(std::string const&, bool, int);

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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
