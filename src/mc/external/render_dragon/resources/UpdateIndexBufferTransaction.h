#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct BufferDescription; }
namespace dragon { struct DragonBufferResourceServiceContext; }
namespace dragon { struct ResolvedIndexBufferResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct UpdateIndexBufferTransaction {
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
    UpdateIndexBufferTransaction& operator=(UpdateIndexBufferTransaction const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateIndexBufferTransaction();

    MCNAPI std::optional<dragon::BufferDescription> apply(
        ::mce::ResourcePointer<dragon::ResolvedIndexBufferResource> const&,
        ::dragon::DragonBufferResourceServiceContext&
    );

    MCNAPI void set(uint const, std::vector<uchar>&&, uint const, std::string&&);

    MCNAPI ~UpdateIndexBufferTransaction();
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
struct UpdateIndexBufferTransaction {};
#endif // @header-generator platform

} // namespace dragon
