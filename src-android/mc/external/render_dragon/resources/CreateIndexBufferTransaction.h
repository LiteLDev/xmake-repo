#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct BufferDescription; }
namespace dragon { struct DragonBufferResourceServiceContext; }
namespace dragon { struct ResolvedIndexBufferResource; }
// clang-format on

namespace dragon {

struct CreateIndexBufferTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mBufferData;
    ::ll::TypedStorage<4, 4, uint>                mBufferStride;
    ::ll::TypedStorage<4, 4, uint>                mCount;
    ::ll::TypedStorage<8, 24, std::string>        mDebugName;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateIndexBufferTransaction& operator=(CreateIndexBufferTransaction const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreateIndexBufferTransaction();

    MCNAPI std::optional<dragon::BufferDescription> apply(
        ::mce::ResourcePointer<dragon::ResolvedIndexBufferResource> const&,
        ::dragon::DragonBufferResourceServiceContext&
    );

    MCNAPI void set(uint const, std::vector<uchar>&&, uint const, std::string&&);

    MCNAPI ~CreateIndexBufferTransaction();
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

} // namespace dragon
