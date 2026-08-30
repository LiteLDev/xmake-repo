#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PuvLoadData {

struct TelemetryEventData {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace PuvLoadData
