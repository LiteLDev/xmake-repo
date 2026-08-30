#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/attribute/RedefinitionMode.h"

class Attribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::RedefinitionMode> mRedefinitionMode;
    ::ll::TypedStorage<1, 1, bool>               mSyncable;
    ::ll::TypedStorage<4, 4, uint>               mIDValue;
    ::ll::TypedStorage<8, 40, ::HashedString>    mName;
    // NOLINTEND

public:
    // prevent constructor by default
    Attribute();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Attribute(::HashedString const&, ::RedefinitionMode, bool);

    MCNAPI uint const getIDValue() const;

    MCNAPI ::HashedString const& getName() const;

    MCNAPI ::RedefinitionMode getRedefinitionMode() const;

    MCNAPI ~Attribute();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Attribute& getByName(::HashedString const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const&, ::RedefinitionMode, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
