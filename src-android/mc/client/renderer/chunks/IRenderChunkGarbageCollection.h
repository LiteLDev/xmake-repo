#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRenderChunkGarbage;
// clang-format on

class IRenderChunkGarbageCollection {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRenderChunkGarbageCollection() = default;

    virtual void collect() = 0;

    virtual void registerGarbage(std::shared_ptr<IRenderChunkGarbage>) = 0;
    // NOLINTEND
};
