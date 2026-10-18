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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>    mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>    mName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Attribute();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Attribute(::HashedString const&, ::RedefinitionMode, bool);

    MCNAPI uint const getIDValue() const;

    MCNAPI ::HashedString const& getName() const;

    MCNAPI ::RedefinitionMode getRedefinitionMode() const;

    MCNAPI ~Attribute();
#else // @header-generator platform
    MCAPI Attribute(::HashedString const& name, ::RedefinitionMode redefMode, bool isSyncable);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute& getByName(::HashedString const&);
#else // @header-generator platform
    MCAPI static ::Attribute& getByName(::HashedString const& attribute);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::HashedString const&, ::RedefinitionMode, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::HashedString const& name, ::RedefinitionMode redefMode, bool isSyncable);
#endif // @header-generator platform
    // NOLINTEND
};
