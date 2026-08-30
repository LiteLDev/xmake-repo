#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
