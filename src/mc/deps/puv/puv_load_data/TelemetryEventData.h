#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace PuvLoadData { struct LoadResultWithTiming; }
// clang-format on
#endif // @header-generator platform

namespace PuvLoadData {

struct TelemetryEventData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, double>                           mParseTimeSecondsMin;
    ::ll::TypedStorage<8, 8, double>                           mParseTimeSecondsMax;
    ::ll::TypedStorage<8, 8, double>                           mParseTimeSecondsP50;
    ::ll::TypedStorage<8, 8, double>                           mParseTimeSecondsP95;
    ::ll::TypedStorage<8, 8, double>                           mParseTimeSecondsStandardDeviation;
    ::ll::TypedStorage<8, 8, double>                           mParseTimeSecondsTotal;
    ::ll::TypedStorage<8, 8, double>                           mUpgradeTimeSecondsMin;
    ::ll::TypedStorage<8, 8, double>                           mUpgradeTimeSecondsMax;
    ::ll::TypedStorage<8, 8, double>                           mUpgradeTimeSecondsP50;
    ::ll::TypedStorage<8, 8, double>                           mUpgradeTimeSecondsP95;
    ::ll::TypedStorage<8, 8, double>                           mUpgradeTimeSecondsStandardDeviation;
    ::ll::TypedStorage<8, 8, double>                           mUpgradeTimeSecondsTotal;
    ::ll::TypedStorage<8, 8, double>                           mValidateTimeSecondsMin;
    ::ll::TypedStorage<8, 8, double>                           mValidateTimeSecondsMax;
    ::ll::TypedStorage<8, 8, double>                           mValidateTimeSecondsP50;
    ::ll::TypedStorage<8, 8, double>                           mValidateTimeSecondsP95;
    ::ll::TypedStorage<8, 8, double>                           mValidateTimeSecondsStandardDeviation;
    ::ll::TypedStorage<8, 8, double>                           mValidateTimeSecondsTotal;
    ::ll::TypedStorage<4, 4, int>                              mLoadedFileCount;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mLoadedPackNames;
    ::ll::TypedStorage<8, 24, std::vector<double>>             mFileParseTimes;
    ::ll::TypedStorage<8, 24, std::vector<double>>             mFileUpgradeTimes;
    ::ll::TypedStorage<8, 24, std::vector<double>>             mFileValidateTimes;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkc211a5;
    ::ll::UntypedStorage<8, 8>  mUnkb7a9fd;
    ::ll::UntypedStorage<8, 8>  mUnk8d9bcc;
    ::ll::UntypedStorage<8, 8>  mUnkc69752;
    ::ll::UntypedStorage<8, 8>  mUnk88f998;
    ::ll::UntypedStorage<8, 8>  mUnk6ff321;
    ::ll::UntypedStorage<8, 8>  mUnkd6cea3;
    ::ll::UntypedStorage<8, 8>  mUnk595b64;
    ::ll::UntypedStorage<8, 8>  mUnke46294;
    ::ll::UntypedStorage<8, 8>  mUnk2cb9d8;
    ::ll::UntypedStorage<8, 8>  mUnk7559d0;
    ::ll::UntypedStorage<8, 8>  mUnk6c442c;
    ::ll::UntypedStorage<8, 8>  mUnk552fee;
    ::ll::UntypedStorage<8, 8>  mUnk7accdc;
    ::ll::UntypedStorage<8, 8>  mUnkad04a2;
    ::ll::UntypedStorage<8, 8>  mUnkbf6cb6;
    ::ll::UntypedStorage<8, 8>  mUnk554b1a;
    ::ll::UntypedStorage<8, 8>  mUnk797556;
    ::ll::UntypedStorage<4, 4>  mUnka28486;
    ::ll::UntypedStorage<8, 64> mUnk6df14b;
    ::ll::UntypedStorage<8, 24> mUnke66022;
    ::ll::UntypedStorage<8, 24> mUnkea3ff1;
    ::ll::UntypedStorage<8, 24> mUnk54c18a;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryEventData& operator=(TelemetryEventData const&);
    TelemetryEventData(TelemetryEventData const&);
    TelemetryEventData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _calculatePuvStepStats(
        ::std::vector<double>& times,
        double&                min,
        double&                max,
        double&                p50,
        double&                p95,
        double&                deviation
    );

    MCNAPI void addLoadTime(::PuvLoadData::LoadResultWithTiming const& loadTime);

#ifdef LL_PLAT_C
    MCNAPI void tryAddPackName(::std::string const& packName);
#endif

    MCNAPI ~TelemetryEventData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PuvLoadData
