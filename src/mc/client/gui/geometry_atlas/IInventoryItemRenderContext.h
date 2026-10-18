#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
struct BatchKey;
struct InventoryItemRenderOwnerData;
struct MinecraftUIPersistentMeshItem;
struct OffscreenCaptureDescription;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
struct BatchKey;
struct InventoryItemRenderOwnerData;
struct MinecraftUIPersistentMeshItem;
struct OffscreenCaptureDescription;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas::details {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IInventoryItemRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInventoryItemRenderContext() = default;

    virtual int getNumRenderPasses() = 0;

    virtual ::BatchKey createBatchKey(int pass) = 0;

    virtual void tryPreRenderSetup(int pass) = 0;

    virtual ::std::unique_ptr<::MinecraftUIPersistentMeshItem>
    createPersistentMesh(::ComponentRenderBatch const& batch) = 0;

    virtual void configureUnbatchedRenderContext(::OffscreenCaptureDescription const& capture, bool isDrawingUI) = 0;

    virtual void beginSharedMeshBatch(::ComponentRenderBatch const& batch) = 0;

    virtual void render(::InventoryItemRenderOwnerData const& data, int pass, float alpha) = 0;

    virtual bool endSharedMeshBatch(
        ::ComponentRenderBatch&              renderBatch,
        ::MinecraftUIPersistentMeshItem&     persistentMeshItem,
        ::OffscreenCaptureDescription const& capture
    ) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IInventoryItemRenderContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas::details
