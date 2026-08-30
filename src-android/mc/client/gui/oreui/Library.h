#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ViewCacheMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/client/gui/oreui/views/FramesToPaintQueue.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IGamefaceTextInputProxy;
class TaskGroup;
struct TextBoxStateChange;
namespace Core { class Path; }
namespace Gameface { class ResourceHandlerBroker; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class IFacetRegistry; }
namespace OreUI { class ILiveViewCollectionConsumer; }
namespace OreUI { class IRenderingBackend; }
namespace OreUI { class IViewProvider; }
namespace OreUI { class InternationalizationManager; }
namespace OreUI { class LayoutScheduler; }
namespace OreUI { class ViewsCoordinator; }
namespace OreUI { struct DebugData; }
namespace OreUI { struct ViewId; }
namespace OreUI::Detail { class ViewContextFactory; }
namespace cohtml { class IAllocator; }
namespace cohtml { class IFileSystemReader; }
namespace cohtml { class ITimeZoneProvider; }
namespace cohtml { class IVirtualAllocator; }
namespace cohtml { class Library; }
namespace cohtml { class System; }
namespace cohtml { class SystemRenderer; }
namespace cohtml { struct PlatformSpecificParams; }
namespace cohtml::Logging { class ILogHandler; }
namespace cohtml::Profile { class IPerformanceHandler; }
namespace mce { class RenderContext; }
// clang-format on

namespace OreUI {

class Library {
public:
    // Library inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // Library inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::OreUI::FramesToPaintQueue> mFramesToPaint;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<OreUI::Library::Impl>>> mImpl;
    ::ll::TypedStorage<8, 8, ::cohtml::System*>                                      mSystem;
    ::ll::TypedStorage<8, 8, ::cohtml::SystemRenderer*>                              mSystemRenderer;
    ::ll::TypedStorage<8, 8, ::cohtml::Library*>                                     mLibrary;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cohtml::IAllocator>>                    mAllocator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cohtml::IFileSystemReader>>             mFileSystemReader;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Gameface::ResourceHandlerBroker>>       mResourceHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::InternationalizationManager>>    mInternationalizationManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::IRenderingBackend>>              mRenderingBackend;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cohtml::Logging::ILogHandler>>          mLogHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cohtml::Profile::IPerformanceHandler>>  mPerformanceHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cohtml::ITimeZoneProvider>>             mTimeZoneProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::LayoutScheduler>>                mLayoutScheduler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::ViewsCoordinator>>               mViews;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                    mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<OreUI::ILiveViewCollectionConsumer>>> mLiveViewConsumer;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                            mRegisteredFonts;
    ::ll::TypedStorage<1, 1, bool>                mDoCompleteUninitialization;
    ::ll::TypedStorage<1, 1, bool>                mSuspended;
    ::ll::TypedStorage<1, 1, bool>                mICUDataInitialized;
    ::ll::TypedStorage<8, 8, std::thread>         mResourceThread;
    ::ll::TypedStorage<8, 8, ::OreUI::DebugData&> mDebugData;
    ::ll::UntypedStorage<8, 24>                   mDebugSplitscreenInputRedirect;
    // NOLINTEND

public:
    // prevent constructor by default
    Library& operator=(Library const&);
    Library(Library const&);
    Library();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _loadICUData(::TaskGroup&, ::Core::Path const&);

    MCNAPI void initializeViewsCoordinator(std::function<void(std::string_view)>);

    MCNAPI void update(double);

    MCNAPI ~Library();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<cohtml::IVirtualAllocator>& mVirtualAllocator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
