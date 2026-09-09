#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/RenderableComponent.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class UIComponent;
class UIControl;
class UICustomRenderer;
class UIRenderContext;
class UIScene;
struct ScreenEvent;
// clang-format on

class CustomRenderComponent : public ::RenderableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<UICustomRenderer>> mRenderer;
    ::ll::TypedStorage<8, 24, std::string>                       mItemName;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomRenderComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomRenderComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void onVisibilityChanged(bool);

    virtual void reset();

    virtual std::string const& getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void collectScreenEvents(std::queue<ScreenEvent, std::deque<ScreenEvent>>&);

    MCNAPI std::shared_ptr<UICustomRenderer> const& getRenderer() const;

    MCNAPI void preRenderSetup(::UIRenderContext&);

    MCNAPI void render(::UIRenderContext&, int);

    MCNAPI void renderCustom(::UIRenderContext&, ::IClientInstance&, int);

    MCNAPI void setRenderer(std::shared_ptr<UICustomRenderer>);

    MCNAPI bool update(::UIRenderContext&);

    MCNAPI bool updateCustom(::IClientInstance&, ::UIScene const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getInvalidCustomId();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& mInvalidCustomId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<UIComponent> $clone(::UIControl&) const;

    MCNAPI void $onVisibilityChanged(bool);

    MCNAPI void $reset();

    MCNAPI std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
