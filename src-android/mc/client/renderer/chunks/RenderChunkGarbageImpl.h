#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/EntityGarbage.h"
#include "mc/client/renderer/chunks/IRenderChunkGarbage.h"
#include "mc/client/renderer/chunks/MeshGarbage.h"
#include "mc/client/renderer/chunks/VertexDataGarbage.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class RenderChunkPerformanceData;
// clang-format on

struct RenderChunkGarbageImpl : public ::IRenderChunkGarbage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MeshGarbage>>       mMeshGarbage;
    ::ll::TypedStorage<8, 24, std::vector<VertexDataGarbage>> mVertexDataGarbage;
    ::ll::TypedStorage<8, 24, std::vector<EntityGarbage>>     mEntityGarbage;
    ::ll::UntypedStorage<1, 16>                               mPerformance;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkGarbageImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderChunkGarbageImpl();

    virtual void submit(::EntityGarbage&&);

    virtual void submit(::VertexDataGarbage&&);

    virtual void submit(::MeshGarbage&&);

    virtual void collect();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $submit(::EntityGarbage&&);

    MCNAPI void $submit(::VertexDataGarbage&&);

    MCNAPI void $submit(::MeshGarbage&&);

    MCNAPI void $collect();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
