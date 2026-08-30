#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace dragon::frameobject {

struct IntraFrameAllocatorContainer {
public:
    // IntraFrameAllocatorContainer inner types declare
    // clang-format off
    struct BufferHasher;
    struct BufferCompare;
    struct ThreadLocalData;
    // clang-format on

    // IntraFrameAllocatorContainer inner types define
    struct BufferHasher {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ulong operator()(::mce::ServerResourcePointer<dragon::ResolvedIndexBufferResource> const&) const;

        MCNAPI ulong operator()(::mce::ServerResourcePointer<dragon::ResolvedVertexBufferResource> const&) const;

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
};

} // namespace dragon::frameobject
