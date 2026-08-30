#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefintionDescription.h"

struct IdentifierDescription : public ::DefintionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    // NOLINTEND

public:
    // prevent constructor by default
    IdentifierDescription(IdentifierDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IdentifierDescription();

    virtual char const* getJsonName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
