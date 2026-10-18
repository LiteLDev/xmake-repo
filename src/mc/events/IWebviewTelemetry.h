#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/code_builder/platform/WebviewObserver.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IMinecraftEventing;
#else // @header-generator platform
#endif // @header-generator platform
struct WebviewDownloadInfo;
// clang-format on

class IWebviewTelemetry : public ::WebviewObserver {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing const&> mEventing;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk3b1452;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    IWebviewTelemetry& operator=(IWebviewTelemetry const&);
    IWebviewTelemetry(IWebviewTelemetry const&);
    IWebviewTelemetry();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IWebviewTelemetry();
#else // @header-generator platform
    virtual void onDownloadBegin(::WebviewDownloadInfo const& downloadInfo) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDownloadBegin(::WebviewDownloadInfo const&);
#else // @header-generator platform
    virtual void onDownloadComplete(::WebviewDownloadInfo const& downloadInfo) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDownloadComplete(::WebviewDownloadInfo const&);
#else // @header-generator platform
    virtual void onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDownloadCanceled(::WebviewDownloadInfo const&);
#else // @header-generator platform
    virtual void onMessageRecieved(::std::string const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMessageRecieved(std::string const&);
#else // @header-generator platform
    virtual void fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeBuilderLoadPerformance(std::string const&, ulong, ulong, std::chrono::duration<long long, std::ratio<1, 1000>>) const;

    virtual void fireCodeBuilderRunPerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit IWebviewTelemetry(::IMinecraftEventing const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void
    fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const&);
#else // @header-generator platform
    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const& downloadInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDownloadComplete(::WebviewDownloadInfo const&);
#else // @header-generator platform
    MCNAPI void $onDownloadComplete(::WebviewDownloadInfo const& downloadInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDownloadCanceled(::WebviewDownloadInfo const&);
#else // @header-generator platform
    MCNAPI void $onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onMessageRecieved(std::string const&);
#else // @header-generator platform
    MCNAPI void $onMessageRecieved(::std::string const&);
#endif // @header-generator platform

    MCNAPI void $fireCodeBuilderLoadPerformance(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string const&,
        ulong,
        ulong,
        std::chrono::duration<long long, std::ratio<1, 1000>>
#else // @header-generator platform
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
#endif // @header-generator platform
    ) const;

    MCNAPI void
#if defined(LL_PLAT_A) // @header-generator platform
    $fireCodeBuilderRunPerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
#else // @header-generator platform
    $fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
