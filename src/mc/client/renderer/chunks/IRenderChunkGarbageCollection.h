#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class IRenderChunkGarbageCollection {};
#endif // @header-generator platform
