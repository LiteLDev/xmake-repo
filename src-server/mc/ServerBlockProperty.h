#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3fed91;
    ::ll::UntypedStorage<8, 24> mUnk1ccf9f;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerBlockProperty();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerBlockProperty(::ServerBlockProperty const& other);

    MCNAPI ::ServerBlockProperty& operator=(::ServerBlockProperty const& other);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerBlockProperty const& other);
    // NOLINTEND
};
