#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/gui/screens/UIBatchType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ResourceLocation;
class UIControl;
class UIFrameUpdateContext;
class UIRenderContext;
class UIScene;
struct ScreenEvent;
struct UIItemRenderInfo;
// clang-format on

class UICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPropagatedAlpha;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UICustomRenderer() = default;

    virtual void preRenderSetup(::UIRenderContext&);

    virtual std::shared_ptr<UICustomRenderer> clone() const = 0;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void frameUpdate(::UIFrameUpdateContext&, ::UIControl&) = 0;

    virtual void render(::UIRenderContext&, ::IClientInstance&, ::UIControl&, int) = 0;

    virtual ::UIBatchType getBatchType() const;

    virtual int getCustomId() const;

    virtual int getNumRenderPasses() const;

    virtual ::ResourceLocation getResourceLocation(int, int) const;

    virtual ::UIMaterialType getUIMaterialType(int) const;

    virtual bool getRequiresPreRenderSetup(int) const;

    virtual void onVisibilityChanged(bool);

    virtual void collectScreenEvents(std::queue<ScreenEvent, std::deque<ScreenEvent>>&);

    virtual ::UIItemRenderInfo getItemRenderInfo() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setPropagatedAlpha(float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float getZOffset(int);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCNAPI ::UIBatchType $getBatchType() const;

    MCNAPI int $getCustomId() const;

    MCNAPI int $getNumRenderPasses() const;

    MCNAPI ::ResourceLocation $getResourceLocation(int, int) const;

    MCNAPI ::UIMaterialType $getUIMaterialType(int) const;

    MCNAPI bool $getRequiresPreRenderSetup(int) const;

    MCNAPI void $onVisibilityChanged(bool);

    MCNAPI void $collectScreenEvents(std::queue<ScreenEvent, std::deque<ScreenEvent>>&);

    MCNAPI ::UIItemRenderInfo $getItemRenderInfo() const;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/gui/screens/UIBatchType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ResourceLocation;
class UIControl;
class UIFrameUpdateContext;
class UIRenderContext;
class UIScene;
struct ScreenEvent;
struct UIItemRenderInfo;
// clang-format on

class UICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPropagatedAlpha;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UICustomRenderer() = default;

    virtual void preRenderSetup(::UIRenderContext& renderContext);

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const = 0;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    virtual void frameUpdate(::UIFrameUpdateContext& frameUpdateContext, ::UIControl& owner) = 0;

    virtual void render(::UIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass) = 0;

    virtual ::UIBatchType getBatchType() const;

    virtual int getCustomId() const;

    virtual int getNumRenderPasses() const;

    virtual ::ResourceLocation getResourceLocation(int textureSlot, int pass) const;

    virtual ::UIMaterialType getUIMaterialType(int pass) const;

    virtual bool getRequiresPreRenderSetup(int pass) const;

    virtual void onVisibilityChanged(bool visible);

    virtual void collectScreenEvents(::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>& screenEvents);

    virtual ::UIItemRenderInfo getItemRenderInfo() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $preRenderSetup(::UIRenderContext& renderContext);

    MCFOLD bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    MCFOLD ::UIBatchType $getBatchType() const;

    MCFOLD int $getCustomId() const;

    MCFOLD int $getNumRenderPasses() const;

    MCAPI ::ResourceLocation $getResourceLocation(int textureSlot, int pass) const;

    MCFOLD ::UIMaterialType $getUIMaterialType(int pass) const;

    MCFOLD bool $getRequiresPreRenderSetup(int pass) const;

    MCFOLD void $onVisibilityChanged(bool visible);

    MCFOLD void $collectScreenEvents(::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>& screenEvents);

    MCFOLD ::UIItemRenderInfo $getItemRenderInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class UICustomRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
