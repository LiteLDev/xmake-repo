#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/BufferDescription.h"

namespace dragon {

struct BufferDescription : public ::cg::BufferDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDebugName;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferDescription& operator=(BufferDescription const&);
    BufferDescription(BufferDescription const&);
    BufferDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BufferDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon
