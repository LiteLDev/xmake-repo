#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/TextureDescription.h"

namespace mce {

struct ResourceServiceTextureDescription : public ::mce::TextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDebugName;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceServiceTextureDescription& operator=(ResourceServiceTextureDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ResourceServiceTextureDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
