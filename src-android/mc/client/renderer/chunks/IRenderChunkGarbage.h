#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct EntityGarbage;
struct MeshGarbage;
struct VertexDataGarbage;
// clang-format on

class IRenderChunkGarbage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRenderChunkGarbage() = default;

    virtual void submit(::EntityGarbage&&) = 0;

    virtual void submit(::VertexDataGarbage&&) = 0;

    virtual void submit(::MeshGarbage&&) = 0;

    virtual void collect() = 0;
    // NOLINTEND
};
