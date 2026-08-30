#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorageKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> key;
    ::ll::TypedStorage<1, 1, bool>         isEncoded;
    // NOLINTEND

public:
    // prevent constructor by default
    SecureStorageKey(SecureStorageKey const&);
};
