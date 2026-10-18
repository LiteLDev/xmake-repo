#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/checked_resource_service/SimpleDeferredResourceTracker.h"
#include "mc/deps/renderer/hal/interface/Buffer.h"
#include "mc/deps/renderer/hal/interface/Texture.h"
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mcr {

#if defined(LL_PLAT_A) // @header-generator platform
struct DeferredResourceTransactions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mDeferredTextureTransactions;
    ::ll::UntypedStorage<8, 24> mDeferredBufferTransactions;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredResourceTransactions& operator=(DeferredResourceTransactions const&);
    DeferredResourceTransactions(DeferredResourceTransactions const&);
    DeferredResourceTransactions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DeferredResourceTransactions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DeferredResourceTransactions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb4bdc8;
    ::ll::UntypedStorage<8, 24> mUnk898171;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredResourceTransactions& operator=(DeferredResourceTransactions const&);
    DeferredResourceTransactions(DeferredResourceTransactions const&);
    DeferredResourceTransactions();
};
#else // @header-generator platform
struct DeferredResourceTransactions {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mcr
