#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/checked_resource_service/SimpleDeferredResourceTracker.h"
#include "mc/deps/renderer/hal/interface/Buffer.h"
#include "mc/deps/renderer/hal/interface/Texture.h"
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"

namespace mcr {

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

} // namespace mcr
