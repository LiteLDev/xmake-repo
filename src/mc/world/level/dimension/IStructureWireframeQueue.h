#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class IStructureWireframeQueue {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStructureWireframeQueue() = default;

    virtual void queue(::BlockPos const&, ::BlockPos const&, ::BlockPos const&) = 0;

    virtual void dequeue(::BlockPos const&) = 0;

    virtual bool isQueued(::BlockPos const&) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IStructureWireframeQueue {};
#endif // @header-generator platform
