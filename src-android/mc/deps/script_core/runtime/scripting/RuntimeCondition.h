#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct RuntimeCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> id;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeCondition& operator=(RuntimeCondition const&);
    RuntimeCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RuntimeCondition(std::string const&);

    MCNAPI ~RuntimeCondition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
