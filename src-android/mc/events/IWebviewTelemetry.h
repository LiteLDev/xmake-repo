#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/code_builder/platform/WebviewObserver.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
struct WebviewDownloadInfo;
// clang-format on

class IWebviewTelemetry : public ::WebviewObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing const&> mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    IWebviewTelemetry& operator=(IWebviewTelemetry const&);
    IWebviewTelemetry(IWebviewTelemetry const&);
    IWebviewTelemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IWebviewTelemetry();

    virtual void onDownloadBegin(::WebviewDownloadInfo const&);

    virtual void onDownloadComplete(::WebviewDownloadInfo const&);

    virtual void onDownloadCanceled(::WebviewDownloadInfo const&);

    virtual void onMessageRecieved(std::string const&);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const&);

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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
