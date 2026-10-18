#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/RenderableComponent.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class UIComponent;
class UIControl;
class UICustomRenderer;
class UIScene;
// clang-format on

class CustomRenderComponent : public ::RenderableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UICustomRenderer>> mRenderer;
    ::ll::TypedStorage<8, 32, ::std::string>                         mItemName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomRenderComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void onVisibilityChanged(bool visible) /*override*/;

    virtual ::std::string const& getTextToSpeechComponentValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setRenderer(::std::shared_ptr<::UICustomRenderer> renderer);

    MCAPI bool updateCustom(::IClientInstance& client, ::UIScene const& scene);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();

    MCAPI void $onVisibilityChanged(bool visible);

    MCFOLD ::std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class CustomRenderComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
