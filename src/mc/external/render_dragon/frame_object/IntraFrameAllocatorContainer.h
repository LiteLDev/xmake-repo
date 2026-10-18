#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace dragon::frameobject {

struct IntraFrameAllocatorContainer {
public:
    // IntraFrameAllocatorContainer inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct BufferHasher;
#else // @header-generator platform
#endif // @header-generator platform
    struct BufferCompare;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct BufferHasher;
#endif // @header-generator platform
    struct ThreadLocalData;
    // clang-format on

    // IntraFrameAllocatorContainer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct BufferHasher {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ulong operator()(::mce::ServerResourcePointer<dragon::ResolvedIndexBufferResource> const&) const;
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct BufferCompare {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator()(
            ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource> const& lhs,
            ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource> const& rhs
        ) const;

        MCNAPI bool operator()(
            ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource> const& lhs,
            ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource> const& rhs
        ) const;
        // NOLINTEND
    };
#else // @header-generator platform
    struct BufferCompare {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ulong operator()(::mce::ServerResourcePointer<dragon::ResolvedVertexBufferResource> const&) const;
#else // @header-generator platform
    struct BufferHasher {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ulong operator()(::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&) const;
        // NOLINTEND
    };

    struct BufferCompare {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator()(
            ::mce::ServerResourcePointer<dragon::ResolvedIndexBufferResource> const&,
            ::mce::ServerResourcePointer<dragon::ResolvedIndexBufferResource> const&
        ) const;

        MCNAPI bool operator()(
            ::mce::ServerResourcePointer<dragon::ResolvedVertexBufferResource> const&,
            ::mce::ServerResourcePointer<dragon::ResolvedVertexBufferResource> const&
        ) const;

        MCNAPI bool operator()(
            ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
            ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&
        ) const;
        // NOLINTEND
    };

    struct ThreadLocalData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUniqueTexture;
        ::ll::UntypedStorage<8, 40> mUniqueIb;
        ::ll::UntypedStorage<8, 40> mUniqueVb;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ThreadLocalData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mAllocator;
    ::ll::UntypedStorage<8, 112> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    IntraFrameAllocatorContainer& operator=(IntraFrameAllocatorContainer const&);
    IntraFrameAllocatorContainer(IntraFrameAllocatorContainer const&);
    IntraFrameAllocatorContainer();
#else // @header-generator platform
    struct ThreadLocalData {};
#endif // @header-generator platform
};

} // namespace dragon::frameobject
