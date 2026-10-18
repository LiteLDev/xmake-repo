#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/mesh/VertexFormat.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct BufferDescription; }
namespace dragon { struct DragonBufferResourceServiceContext; }
namespace dragon { struct ResolvedVertexBufferResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreateVertexBufferTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>>            mBufferData;
    ::ll::TypedStorage<4, 4, uint>                           mBufferStride;
    ::ll::TypedStorage<4, 4, uint>                           mCount;
    ::ll::TypedStorage<8, 24, std::string>                   mDebugName;
    ::ll::TypedStorage<8, 136, ::dragon::mesh::VertexFormat> mVertexFormat;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateVertexBufferTransaction& operator=(CreateVertexBufferTransaction const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreateVertexBufferTransaction();

    MCNAPI std::optional<dragon::BufferDescription> apply(
        ::mce::ResourcePointer<dragon::ResolvedVertexBufferResource> const&,
        ::dragon::DragonBufferResourceServiceContext&
    );

    MCNAPI void set(uint const, std::vector<uchar>&&, uint const, ::dragon::mesh::VertexFormat const&, std::string&&);

    MCNAPI ~CreateVertexBufferTransaction();
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
struct CreateVertexBufferTransaction {};
#endif // @header-generator platform

} // namespace dragon
