#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"

struct PackInstanceId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>            mPackId;
    ::ll::TypedStorage<8, 24, std::string> mSubpackName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackInstanceId(::PackIdVersion const&, std::string const&);

    MCNAPI ::PackInstanceId& operator=(::PackInstanceId const&);

    MCNAPI bool operator==(::PackInstanceId const&) const;

    MCNAPI ~PackInstanceId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackIdVersion const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
