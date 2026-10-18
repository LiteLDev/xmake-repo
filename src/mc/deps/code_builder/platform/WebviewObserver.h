#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/SingleThreadedLock.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct WebviewDownloadInfo;
struct WebviewError;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Core { class SingleThreadedLock; }
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class WebviewObserver : public ::Core::Observer<WebviewObserver, Core::SingleThreadedLock> {
#else // @header-generator platform
class WebviewObserver : public ::Core::Observer<::WebviewObserver, ::Core::SingleThreadedLock> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WebviewObserver() = default;
#else // @header-generator platform
    virtual ~WebviewObserver() /*override*/ = default;
#endif // @header-generator platform

    virtual void onLoadingBegin();

    virtual void onLoadingEnd();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onError(::WebviewError const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onError(::WebviewError const&);
#else // LL_PLAT_C
    virtual void onError(::WebviewError const& error);
#endif
#endif // @header-generator platform

    virtual void onWebviewChanged();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDownloadBegin(::WebviewDownloadInfo const&);
#else // @header-generator platform
    virtual void onDownloadBegin(::WebviewDownloadInfo const& downloadInfo);
#endif // @header-generator platform

    virtual void onDownloadUpdate(::WebviewDownloadInfo const&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDownloadComplete(::WebviewDownloadInfo const&);
#else // @header-generator platform
    virtual void onDownloadComplete(::WebviewDownloadInfo const& downloadInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDownloadCanceled(::WebviewDownloadInfo const&);
#else // @header-generator platform
    virtual void onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMessageRecieved(std::string const&);
#else // @header-generator platform
    virtual void onMessageRecieved(::std::string const& message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeBuilderLoadPerformance(std::string const&, ulong, ulong, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
#else // @header-generator platform
    virtual void fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeBuilderRunPerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
    // clang-format on
#else // @header-generator platform
    virtual void
    fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLoadingBegin();

    MCNAPI void $onLoadingEnd();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onError(::WebviewError const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void $onError(::WebviewError const&);
#else // LL_PLAT_C
    MCNAPI void $onError(::WebviewError const& error);
#endif
#endif // @header-generator platform

    MCNAPI void $onWebviewChanged();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const&);
#else // @header-generator platform
    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const& downloadInfo);
#endif // @header-generator platform

    MCNAPI void $onDownloadUpdate(::WebviewDownloadInfo const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDownloadComplete(::WebviewDownloadInfo const&);
#else // @header-generator platform
    MCNAPI void $onDownloadComplete(::WebviewDownloadInfo const& downloadInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onDownloadCanceled(::WebviewDownloadInfo const&);

    MCNAPI void $onMessageRecieved(std::string const&);
#else // @header-generator platform
    MCNAPI void $onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo);
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

#ifdef LL_PLAT_C
    MCNAPI void $onMessageRecieved(::std::string const& message);
#endif


#endif // @header-generator platform
    // NOLINTEND
};
