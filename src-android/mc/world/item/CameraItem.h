#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class CameraItem : public ::Item {
public:
    // prevent constructor by default
    CameraItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraItem();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraItem(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
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
