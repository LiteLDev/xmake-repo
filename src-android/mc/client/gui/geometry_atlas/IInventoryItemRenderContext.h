#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
struct BatchKey;
struct InventoryItemRenderOwnerData;
struct MinecraftUIPersistentMeshItem;
struct OffscreenCaptureDescription;
// clang-format on

namespace GeometryAtlas::details {

class IInventoryItemRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IInventoryItemRenderContext();

    virtual int getNumRenderPasses() = 0;

    virtual ::BatchKey createBatchKey(int) = 0;

    virtual void tryPreRenderSetup(int) = 0;

    virtual std::unique_ptr<MinecraftUIPersistentMeshItem> createPersistentMesh(::ComponentRenderBatch const&) = 0;

    virtual void configureUnbatchedRenderContext(::OffscreenCaptureDescription const&, bool) = 0;

    virtual void beginSharedMeshBatch(::ComponentRenderBatch const&) = 0;

    virtual void render(::InventoryItemRenderOwnerData const&, int, float) = 0;

    virtual bool endSharedMeshBatch(::ComponentRenderBatch&, ::MinecraftUIPersistentMeshItem&, ::OffscreenCaptureDescription const&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace GeometryAtlas::details
