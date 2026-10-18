#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/renderer/hal/interface/Buffer.h"
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct BufferResourceService; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct BufferResourceService; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class IndexBufferContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mIndexBuffer;
    ::ll::TypedStorage<4, 4, uint> mIndexCount;
    ::ll::TypedStorage<4, 4, uint> mIndexSize;
    ::ll::TypedStorage<4, 4, int>  mIteration;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexBufferContainer& operator=(IndexBufferContainer const&);
    IndexBufferContainer(IndexBufferContainer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint getIndexCount() const;

    MCNAPI int getIteration() const;

    MCNAPI void
    loadIndexBuffer(::mce::BufferResourceService&, uint const, uchar const* const, uint const, std::string_view const);

    MCNAPI void setIteration(int const);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IndexBufferContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4020f2;
    ::ll::UntypedStorage<4, 4>  mUnke8c3a1;
    ::ll::UntypedStorage<4, 4>  mUnkcdebe6;
    ::ll::UntypedStorage<4, 4>  mUnk22efce;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexBufferContainer& operator=(IndexBufferContainer const&);
    IndexBufferContainer(IndexBufferContainer const&);
    IndexBufferContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void loadIndexBuffer(
        ::mce::BufferResourceService& bufferResourceService,
        uint                          stride,
        uchar const* const            data,
        uint                          count,
        ::std::string_view            debugName
    );

    MCNAPI ~IndexBufferContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class IndexBufferContainer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
