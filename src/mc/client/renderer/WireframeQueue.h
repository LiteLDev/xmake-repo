#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/Wireframe.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/IStructureWireframeQueue.h"

class WireframeQueue : public ::IStructureWireframeQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, Wireframe>> mQueue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WireframeQueue();

    virtual void queue(::BlockPos const&, ::BlockPos const&, ::BlockPos const&);

    virtual void dequeue(::BlockPos const&);

    virtual bool isQueued(::BlockPos const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();

    MCNAPI std::unordered_map<BlockPos, Wireframe> const& getQueue() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $queue(::BlockPos const&, ::BlockPos const&, ::BlockPos const&);

    MCNAPI void $dequeue(::BlockPos const&);

    MCNAPI bool $isQueued(::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class WireframeQueue {};
#endif // @header-generator platform
