#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

// auto generated forward declare list
// clang-format off
struct WebviewDownloadInfo;
struct WebviewError;
// clang-format on

class WebviewObserver : public ::Core::Observer<WebviewObserver, Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WebviewObserver() = default;

    virtual void onLoadingBegin();

    virtual void onLoadingEnd();

    virtual void onError(::WebviewError const&);

    virtual void onWebviewChanged();

    virtual void onDownloadBegin(::WebviewDownloadInfo const&);

    virtual void onDownloadUpdate(::WebviewDownloadInfo const&);

    virtual void onDownloadComplete(::WebviewDownloadInfo const&);

    virtual void onDownloadCanceled(::WebviewDownloadInfo const&);

    virtual void onMessageRecieved(std::string const&);

    virtual void fireCodeBuilderLoadPerformance(std::string const&, ulong, ulong, std::chrono::duration<long long, std::ratio<1, 1000>>) const;

    virtual void fireCodeBuilderRunPerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLoadingBegin();

    MCNAPI void $onLoadingEnd();

    MCNAPI void $onError(::WebviewError const&);

    MCNAPI void $onWebviewChanged();

    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const&);

    MCNAPI void $onDownloadUpdate(::WebviewDownloadInfo const&);

    MCNAPI void $onDownloadComplete(::WebviewDownloadInfo const&);

    MCNAPI void $onDownloadCanceled(::WebviewDownloadInfo const&);

    MCNAPI void $onMessageRecieved(std::string const&);

    MCNAPI void $fireCodeBuilderLoadPerformance(
        std::string const&,
        ulong,
        ulong,
        std::chrono::duration<long long, std::ratio<1, 1000>>
    ) const;

    MCNAPI void
    $fireCodeBuilderRunPerformance(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000>>) const;
    // NOLINTEND
};
