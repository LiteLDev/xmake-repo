#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class ServerMetricsImpl {
#else // @header-generator platform
// auto generated inclusion list
#include "mc/server/ServerMetrics.h"

// auto generated forward declare list
// clang-format off
class ServerInstance;
// clang-format on

class ServerMetricsImpl : public ::ServerMetrics {
#endif // @header-generator platform
public:
    // ServerMetricsImpl inner types declare
    // clang-format off
    struct DataTransferred;
    // clang-format on

    // ServerMetricsImpl inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    struct DataTransferred {};
#else // @header-generator platform
    struct DataTransferred {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk6f732d;
        ::ll::UntypedStorage<8, 8> mUnk7d4a71;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataTransferred& operator=(DataTransferred const&);
        DataTransferred(DataTransferred const&);
        DataTransferred();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnke1d394;
    ::ll::UntypedStorage<8, 64>  mUnka9d3a6;
    ::ll::UntypedStorage<8, 8>   mUnk6262f1;
    ::ll::UntypedStorage<1, 1>   mUnk2cff8a;
    ::ll::UntypedStorage<8, 616> mUnk41ed68;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerMetricsImpl& operator=(ServerMetricsImpl const&);
    ServerMetricsImpl(ServerMetricsImpl const&);
    ServerMetricsImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerMetricsImpl() /*override*/ = default;

    virtual void sendPeriodicMetrics(::ServerInstance& serverInstance) /*override*/;

    virtual void sendServerTickTime(::std::chrono::nanoseconds const& timepoint) /*override*/;

    virtual void sendChunkLoadTelemetryData() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendPeriodicMetrics(::ServerInstance& serverInstance);

    MCNAPI void $sendServerTickTime(::std::chrono::nanoseconds const& timepoint);

    MCNAPI void $sendChunkLoadTelemetryData();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#endif // @header-generator platform
};
#endif // @header-generator platform
