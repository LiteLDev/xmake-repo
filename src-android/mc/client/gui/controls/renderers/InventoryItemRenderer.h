#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/gui/controls/renderers/InventoryItemRenderItemData.h"
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IInventoryItemRendererRenderContext;
class ItemRegistryRef;
class MinecraftUIRenderContext;
class PropertyBag;
class ResourceLocation;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
struct InventoryItemRenderOwnerData;
struct UIItemRenderInfo;
// clang-format on

class InventoryItemRenderer : public ::MinecraftUICustomRenderer,
                              public ::ActorShaderManager,
                              public ::InventoryItemRenderItemData {
public:
    // InventoryItemRenderer inner types declare
    // clang-format off
    class CachedProperties;
    struct UpdateData;
    // clang-format on

    // InventoryItemRenderer inner types define
    class CachedProperties {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mCacheVersion;
        ::ll::TypedStorage<4, 4, int>  mItemIdAux;
        ::ll::TypedStorage<4, 4, int>  mChargedItem;
        ::ll::TypedStorage<4, 4, int>  mCustomColor;
        ::ll::TypedStorage<1, 1, bool> mIsFiltered;
        ::ll::TypedStorage<8, 8, long> mRawPickUpTime;
        ::ll::TypedStorage<1, 1, bool> mIsShowPickup;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedProperties& operator=(CachedProperties const&);
    };

    struct UpdateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mOwnerPosition;
        ::ll::TypedStorage<8, 8, ::PropertyBag const*>                    mOwnerPropertyBag;
        ::ll::TypedStorage<8, 8, ::ItemRegistryRef const&>                mItemRegistry;
        ::ll::UntypedStorage<8, 16>                                       mGetAnimationFrame;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpdateData& operator=(UpdateData const&);
        UpdateData(UpdateData const&);
        UpdateData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::InventoryItemRenderer::CachedProperties> mCachedProperties;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InventoryItemRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual ::UIBatchType getBatchType() const;

    virtual int getCustomId() const;

    virtual int getNumRenderPasses() const;

    virtual ::ResourceLocation getResourceLocation(int, int) const;

    virtual ::UIMaterialType getUIMaterialType(int) const;

    virtual bool getRequiresPreRenderSetup(int) const;

    virtual ::UIItemRenderInfo getItemRenderInfo() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);

    virtual void preRenderSetup(::MinecraftUIRenderContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _preRenderSetup(::ScreenContext&);

    MCNAPI void _render(::IInventoryItemRendererRenderContext&, ::InventoryItemRenderOwnerData const&, int);

    MCNAPI bool _update(::InventoryItemRenderer::UpdateData const&);

    MCNAPI ::ItemStack const& getItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::UIItemRenderInfo getItemRenderInfo(::ItemStack const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<UICustomRenderer> $clone() const;

    MCNAPI bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCNAPI ::UIBatchType $getBatchType() const;

    MCNAPI int $getCustomId() const;

    MCNAPI int $getNumRenderPasses() const;

    MCNAPI ::ResourceLocation $getResourceLocation(int, int) const;

    MCNAPI ::UIMaterialType $getUIMaterialType(int) const;

    MCNAPI bool $getRequiresPreRenderSetup(int) const;

    MCNAPI ::UIItemRenderInfo $getItemRenderInfo() const;

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);

    MCNAPI void $preRenderSetup(::MinecraftUIRenderContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
