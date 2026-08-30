#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"

struct PackIdVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mId;
    ::ll::UntypedStorage<8, 24>            mVersion;
    ::ll::TypedStorage<1, 1, ::PackType>   mPackType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackIdVersion(::PackIdVersion const&);

    MCNAPI PackIdVersion(std::string const&, std::string const&, ::PackType);

    MCNAPI std::string asString() const;

    MCNAPI bool operator!=(::PackIdVersion const&) const;

    MCNAPI bool operator<(::PackIdVersion const&) const;

    MCNAPI bool operator==(::PackIdVersion const&) const;

    MCNAPI bool satisfies(::PackIdVersion const&) const;

    MCNAPI ~PackIdVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackIdVersion fromString(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PackIdVersion& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackIdVersion const&);

    MCNAPI void* $ctor(std::string const&, std::string const&, ::PackType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
