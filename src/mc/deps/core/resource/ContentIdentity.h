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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCFOLD ::std::string asString() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ContentIdentity& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContentIdentity const&);

    MCNAPI void* $ctor(::ContentIdentity&&);
#else // @header-generator platform
    MCAPI static ::ContentIdentity& EMPTY();
#endif // @header-generator platform
    // NOLINTEND
};
