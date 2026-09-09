#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

class ViewsCoordinator : public ::OreUI::IViewProvider {
public:
    // ViewsCoordinator inner types declare
    // clang-format off
    struct ViewEntry;
    // clang-format on

    // ViewsCoordinator inner types define
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
};

} // namespace OreUI
