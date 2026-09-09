#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/BufferUsage.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct BufferDescription; }
namespace dragon { struct DragonBufferResourceServiceContext; }
namespace dragon { struct ResolvedShaderBufferResource; }
// clang-format on

namespace dragon {

struct CreateShaderBufferTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>>   mBufferData;
    ::ll::TypedStorage<8, 24, std::string>          mDebugName;
    ::ll::TypedStorage<8, 8, ::dragon::BufferUsage> mUsage;
    ::ll::TypedStorage<4, 4, uint>                  mBufferStride;
    ::ll::TypedStorage<4, 4, uint>                  mCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreateShaderBufferTransaction();

    MCNAPI std::optional<dragon::BufferDescription> apply(
        ::mce::ResourcePointer<dragon::ResolvedShaderBufferResource> const&,
        ::dragon::DragonBufferResourceServiceContext&
    );

    MCNAPI void set(uint const, uint const, std::vector<uchar>&&, std::string&&, ::dragon::BufferUsage);

    MCNAPI ~CreateShaderBufferTransaction();
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
