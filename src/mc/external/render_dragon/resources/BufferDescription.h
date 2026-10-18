#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/BufferDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct BufferDescription {};
#endif // @header-generator platform

} // namespace dragon
