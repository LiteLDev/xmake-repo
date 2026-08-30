#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/SimpleContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
// clang-format on

class SimplePlayerContainer : public ::SimpleContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    SimplePlayerContainer& operator=(SimplePlayerContainer const&);
    SimplePlayerContainer(SimplePlayerContainer const&);
    SimplePlayerContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimplePlayerContainer();

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SimplePlayerContainer(::Player&, std::string const&, bool, int, ::SharedTypes::Legacy::ContainerType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, std::string const&, bool, int, ::SharedTypes::Legacy::ContainerType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
