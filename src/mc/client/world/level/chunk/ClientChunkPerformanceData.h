#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/chunk/ChunkPerformanceData.h"

class ClientChunkPerformanceData : public ::ChunkPerformanceData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientChunkPerformanceData();

    virtual void visit(::brstd::function_ref<void(ClientChunkPerformanceData&)>);

    virtual void resetAll();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $visit(::brstd::function_ref<void(ClientChunkPerformanceData&)>);

    MCNAPI void $resetAll();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClientChunkPerformanceData {};
#endif // @header-generator platform
