#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class CountTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<void*>> mCountReference;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CountTracker();

    MCNAPI std::shared_ptr<void*> acquire();

    MCNAPI void clear();

    MCNAPI uint get() const;

    MCNAPI ~CountTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading
