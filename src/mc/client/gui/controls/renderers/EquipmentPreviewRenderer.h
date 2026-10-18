#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class ClientLevel;
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIPropertyBag;
class UIResolvedDef;
class UIScene;
// clang-format on

class EquipmentPreviewRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIResolvedDef;
class UIScene;
// clang-format on

class EquipmentPreviewRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
class EquipmentPreviewRenderer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // EquipmentPreviewRenderer inner types declare
    // clang-format off
    struct ItemProperties;
    // clang-format on

    // EquipmentPreviewRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ItemProperties {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short>        mItemId;
        ::ll::TypedStorage<4, 4, int>          mAuxValue;
        ::ll::TypedStorage<4, 4, int>          mCustomColor;
        ::ll::TypedStorage<1, 1, bool>         mIsEnchanted;
        ::ll::TypedStorage<8, 24, std::string> mTrimPattern;
        ::ll::TypedStorage<8, 24, std::string> mTrimMaterial;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemProperties(ItemProperties const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ItemProperties();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>                                           mRotation;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                            mDisplayArmorStand;
    ::ll::TypedStorage<8, 64, ::EquipmentPreviewRenderer::ItemProperties> mItemProperties;
    ::ll::TypedStorage<8, 152, ::ItemStack>                               mItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipmentPreviewRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EquipmentPreviewRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EquipmentPreviewRenderer(::UIResolvedDef const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIResolvedDef const&);
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

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ItemProperties {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short>          mItemId;
        ::ll::TypedStorage<4, 4, int>            mAuxValue;
        ::ll::TypedStorage<4, 4, int>            mCustomColor;
        ::ll::TypedStorage<1, 1, bool>           mIsEnchanted;
        ::ll::TypedStorage<8, 32, ::std::string> mTrimPattern;
        ::ll::TypedStorage<8, 32, ::std::string> mTrimMaterial;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ItemProperties();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                                      mRotation;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                            mDisplayArmorStand;
    ::ll::TypedStorage<8, 80, ::EquipmentPreviewRenderer::ItemProperties> mItemProperties;
    ::ll::TypedStorage<8, 152, ::ItemStack>                               mItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipmentPreviewRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EquipmentPreviewRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&) /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EquipmentPreviewRenderer(::UIResolvedDef const& definition);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIResolvedDef const& definition);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&);

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct ItemProperties {};
#endif // @header-generator platform
#endif // @header-generator platform
};
