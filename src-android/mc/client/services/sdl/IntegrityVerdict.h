#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct IntegrityVerdict {
public:
    // IntegrityVerdict inner types define
    enum class DeviceVerdict : int {
        Pass    = 0,
        Basic   = 1,
        Strong  = 2,
        Virtual = 3,
        Fail    = 4,
        Unknown = 5,
    };

    enum class AppVerdict : int {
        Recognized   = 0,
        Unrecognized = 1,
        Unevaluated  = 2,
        Unknown      = 3,
    };

    enum class LicenseVerdict : int {
        Licensed    = 0,
        Unlicensed  = 1,
        Unevaluated = 2,
        Unknown     = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mResult;
    ::ll::TypedStorage<4, 4, ::SDL::IntegrityVerdict::DeviceVerdict>  mDeviceVerdict;
    ::ll::TypedStorage<4, 4, ::SDL::IntegrityVerdict::AppVerdict>     mAppVerdict;
    ::ll::TypedStorage<4, 4, ::SDL::IntegrityVerdict::LicenseVerdict> mLicenseVerdict;
    // NOLINTEND
};

} // namespace SDL
