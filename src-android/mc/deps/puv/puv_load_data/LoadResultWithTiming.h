#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PuvLoadData {

struct LoadResultWithTiming {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mParseTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mUpgradeTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mValidateTime;
    ::ll::TypedStorage<1, 1, bool>                                            mLoadSuccessful;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit operator bool() const;
    // NOLINTEND
};

} // namespace PuvLoadData
