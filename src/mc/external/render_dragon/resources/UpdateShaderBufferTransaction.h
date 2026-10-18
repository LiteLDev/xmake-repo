#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct BufferDescription; }
namespace dragon { struct DragonBufferResourceServiceContext; }
namespace dragon { struct ResolvedShaderBufferResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct UpdateShaderBufferTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                   mExistingBuffer;
    ::ll::TypedStorage<4, 4, uint>                mOffset;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mBufferData;
    ::ll::TypedStorage<8, 24, std::string>        mDebugName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateShaderBufferTransaction();

    MCNAPI std::optional<dragon::BufferDescription> apply(
        ::mce::ResourcePointer<dragon::ResolvedShaderBufferResource> const&,
        ::dragon::DragonBufferResourceServiceContext&
    );

    MCNAPI void
    set(::mce::ClientResourcePointer<dragon::ResolvedShaderBufferResource> const&,
        uint,
        std::vector<uchar>&&,
        std::string&&);

    MCNAPI ~UpdateShaderBufferTransaction();
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
#else // @header-generator platform
struct UpdateShaderBufferTransaction {};
#endif // @header-generator platform

} // namespace dragon
