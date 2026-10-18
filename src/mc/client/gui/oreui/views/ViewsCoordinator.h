#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/ViewCacheMode.h"
#include "mc/client/gui/oreui/interface/IViewProvider.h"
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/client/gui/oreui/views/ViewsCacheRegistry.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IGamefaceTextInputProxy;
class Vec2;
struct TextBoxStateChange;
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class FramesToPaintQueue; }
namespace OreUI { class IFacetRegistry; }
namespace OreUI { class IView; }
namespace OreUI { class LayoutScheduler; }
namespace OreUI { class TextInputHandler; }
namespace OreUI { class ViewInputHandler; }
namespace OreUI { class ViewRenderer; }
namespace OreUI::Detail { class ViewContextFactory; }
namespace cohtml { class ITextInputHandler; }
namespace cohtml { class ITimeZoneProvider; }
namespace cohtml { class IViewListener; }
namespace cohtml { class System; }
namespace cohtml { class SystemRenderer; }
namespace cohtml { class View; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/ViewCacheMode.h"
#include "mc/client/gui/oreui/interface/IViewProvider.h"
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/client/gui/oreui/views/ViewsCacheRegistry.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IGamefaceTextInputProxy;
struct TextBoxStateChange;
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class FramesToPaintQueue; }
namespace OreUI { class IFacetRegistry; }
namespace OreUI { class IView; }
namespace OreUI { class LayoutScheduler; }
namespace OreUI::Detail { class ViewContextFactory; }
namespace cohtml { class ITimeZoneProvider; }
namespace cohtml { class System; }
namespace cohtml { class SystemRenderer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ViewsCoordinator : public ::OreUI::IViewProvider {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ViewsCoordinator : public ::OreUI::IViewProvider {
#else // @header-generator platform
class ViewsCoordinator {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ViewsCoordinator inner types declare
    // clang-format off
    struct ViewEntry;
    // clang-format on

    // ViewsCoordinator inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ViewEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>                              viewId;
        ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::IView>> view;
        ::ll::TypedStorage<1, 1, ::SubClientId>                 subClientId;
        // NOLINTEND

    public:
        // prevent constructor by default
        ViewEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::System*>                                mSystem;
    ::ll::TypedStorage<8, 8, ::cohtml::SystemRenderer*>                        mSystemRenderer;
    ::ll::TypedStorage<8, 8, ::cohtml::ITimeZoneProvider*>                     mTimeZoneProvider;
    ::ll::TypedStorage<8, 8, ::OreUI::LayoutScheduler&>                        mLayoutScheduler;
    ::ll::TypedStorage<8, 8, ::OreUI::FramesToPaintQueue&>                     mFramesToPaint;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::ViewsCoordinator::ViewEntry>> mViews;
    ::ll::UntypedStorage<8, 104>                                               mViewsCacheRegistry;
    ::ll::UntypedStorage<8, 48>                                                mShowDebugToast;
    ::ll::UntypedStorage<8, 32>                                                mDebugSplitscreenInputRedirect;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewsCoordinator& operator=(ViewsCoordinator const&);
    ViewsCoordinator(ViewsCoordinator const&);
    ViewsCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ViewsCoordinator();

    virtual ::Bedrock::NonOwnerPointer<OreUI::IView> get(::OreUI::ViewId) const;

    virtual void discard(::OreUI::ViewId);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ViewsCoordinator(
        ::cohtml::System*,
        ::cohtml::SystemRenderer*,
        ::cohtml::ITimeZoneProvider*,
        ::OreUI::LayoutScheduler&,
        ::OreUI::FramesToPaintQueue&,
        std::function<void(std::string_view)>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&
    );

    MCNAPI void _destroyView(::OreUI::ViewId);

    MCNAPI std::vector<OreUI::ViewId> _getViewIds();

    MCNAPI void clearAllViews();

    MCNAPI void clearUnusedCachedViews(::SubClientId);

    MCNAPI ::OreUI::ViewId createView(
        ::OreUI::Detail::ViewContextFactory&,
        std::string const&,
        std::unique_ptr<OreUI::IFacetRegistry>,
        ::IClientInstance&,
        ::OreUI::ViewCacheMode
    );

    MCNAPI std::unique_ptr<IGamefaceTextInputProxy> getTextInputProxy();

    MCNAPI void onKeyboardDismissed();

    MCNAPI void onResume();

    MCNAPI void onSuspend();

    MCNAPI void reloadAllViews();

    MCNAPI void setTextBoxState(::TextBoxStateChange const&);

    MCNAPI void update(double);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::cohtml::System*,
        ::cohtml::SystemRenderer*,
        ::cohtml::ITimeZoneProvider*,
        ::OreUI::LayoutScheduler&,
        ::OreUI::FramesToPaintQueue&,
        std::function<void(std::string_view)>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NonOwnerPointer<OreUI::IView> $get(::OreUI::ViewId) const;

    MCNAPI void $discard(::OreUI::ViewId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ViewEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::OreUI::ViewId>                   viewId;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IView>> view;
        ::ll::TypedStorage<1, 1, ::SubClientId>                     subClientId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::System*>                                    mSystem;
    ::ll::TypedStorage<8, 8, ::cohtml::SystemRenderer*>                            mSystemRenderer;
    ::ll::TypedStorage<8, 8, ::cohtml::ITimeZoneProvider*>                         mTimeZoneProvider;
    ::ll::TypedStorage<8, 8, ::OreUI::LayoutScheduler&>                            mLayoutScheduler;
    ::ll::TypedStorage<8, 8, ::OreUI::FramesToPaintQueue&>                         mFramesToPaint;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::ViewsCoordinator::ViewEntry>> mViews;
    ::ll::TypedStorage<8, 96, ::OreUI::ViewsCacheRegistry>                         mViewsCacheRegistry;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string_view)>>           mShowDebugToast;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect>>
        mDebugSplitscreenInputRedirect;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewsCoordinator& operator=(ViewsCoordinator const&);
    ViewsCoordinator(ViewsCoordinator const&);
    ViewsCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ViewsCoordinator() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::IView> get(::OreUI::ViewId viewId) const /*override*/;

    virtual void discard(::OreUI::ViewId viewId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ViewsCoordinator(
        ::cohtml::System*                                                          system,
        ::cohtml::SystemRenderer*                                                  systemRenderer,
        ::cohtml::ITimeZoneProvider*                                               timeZoneProvider,
        ::OreUI::LayoutScheduler&                                                  layoutScheduler,
        ::OreUI::FramesToPaintQueue&                                               framesToPaint,
        ::std::function<void(::std::string_view)>                                  showDebugToast,
        ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect> const& debugSplitscreenInputRedirect
    );

    MCAPI void _destroyView(::OreUI::ViewId viewId);

    MCAPI ::std::vector<::OreUI::ViewId> _getViewIds();

    MCAPI void clearUnusedCachedViews(::SubClientId subClientId);

    MCAPI ::OreUI::ViewId createView(
        ::OreUI::Detail::ViewContextFactory&       contextFactory,
        ::std::string const&                       viewPath,
        ::std::unique_ptr<::OreUI::IFacetRegistry> facets,
        ::IClientInstance&                         clientInstance,
        ::OreUI::ViewCacheMode                     viewCacheMode
    );

    MCAPI ::std::unique_ptr<::IGamefaceTextInputProxy> getTextInputProxy();

    MCAPI void onKeyboardDismissed();

    MCAPI void setTextBoxState(::TextBoxStateChange const& stateChange);

    MCAPI void update(double time);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cohtml::System*                                                          system,
        ::cohtml::SystemRenderer*                                                  systemRenderer,
        ::cohtml::ITimeZoneProvider*                                               timeZoneProvider,
        ::OreUI::LayoutScheduler&                                                  layoutScheduler,
        ::OreUI::FramesToPaintQueue&                                               framesToPaint,
        ::std::function<void(::std::string_view)>                                  showDebugToast,
        ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect> const& debugSplitscreenInputRedirect
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::NonOwnerPointer<::OreUI::IView> $get(::OreUI::ViewId viewId) const;

    MCAPI void $discard(::OreUI::ViewId viewId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct ViewEntry {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
