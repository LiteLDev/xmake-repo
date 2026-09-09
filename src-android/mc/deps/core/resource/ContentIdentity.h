#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

class ContentIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUUID;
    ::ll::TypedStorage<1, 1, bool>         mValid;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContentIdentity(::ContentIdentity const&);

    MCNAPI ContentIdentity(::ContentIdentity&&);

    MCNAPI std::string asString() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator!=(::ContentIdentity const&) const;

    MCNAPI ::ContentIdentity& operator=(::ContentIdentity const&);

    MCNAPI ::ContentIdentity& operator=(::ContentIdentity&&);

    MCNAPI bool operator==(::ContentIdentity const&) const;

    MCNAPI void setUUID(::mce::UUID const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ContentIdentity fromString(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ContentIdentity& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContentIdentity const&);

    MCNAPI void* $ctor(::ContentIdentity&&);
    // NOLINTEND
};
