#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PuvLoadData {

struct LoadResultWithTiming {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mParseTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mUpgradeTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mValidateTime;
    ::ll::TypedStorage<1, 1, bool>                                            mLoadSuccessful;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkdd7cad;
    ::ll::UntypedStorage<8, 8> mUnk597bf6;
    ::ll::UntypedStorage<8, 8> mUnk28aaf7;
    ::ll::UntypedStorage<1, 1> mUnk429a99;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit operator bool() const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    LoadResultWithTiming& operator=(LoadResultWithTiming const&);
    LoadResultWithTiming(LoadResultWithTiming const&);
    LoadResultWithTiming();
#endif // @header-generator platform
};

} // namespace PuvLoadData
