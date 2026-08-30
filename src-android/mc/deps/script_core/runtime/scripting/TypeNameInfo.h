#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct TypeNameInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mBindingName;
    ::ll::TypedStorage<8, 24, std::string> mTypeName;
    ::ll::TypedStorage<1, 1, bool>         mIsBound;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeNameInfo& operator=(TypeNameInfo const&);
    TypeNameInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TypeNameInfo(std::string, std::string, bool);

    MCNAPI ~TypeNameInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, std::string, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
