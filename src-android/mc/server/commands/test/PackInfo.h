#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/sem_ver/SemVersion.h"

struct PackInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 24, std::string> uuid;
    ::ll::UntypedStorage<1, 1>             type;
    ::ll::UntypedStorage<8, 24>            version;
    // NOLINTEND

public:
    // prevent constructor by default
    PackInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackInfo(::PackInfo const&);

    MCNAPI ~PackInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
