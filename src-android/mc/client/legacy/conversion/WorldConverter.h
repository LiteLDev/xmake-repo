#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/legacy/conversion/WorldConverterBlobType.h"
#include "mc/platform/brstd/future.h"
#include "mc/platform/brstd/shared_future.h"

// auto generated forward declare list
// clang-format off
namespace Legacy { class WorldProcessRequest; }
namespace Legacy { struct WorldConversionReport; }
// clang-format on

namespace Legacy {

class WorldConverter {
public:
    // WorldConverter inner types define
    enum class Type : int {
        Xbox    = 0,
        Switch  = 1,
        PS4     = 2,
        WiiU    = 3,
        Mock    = 4,
        Unknown = 5,
        PS5     = 6,
    };

    enum class ConversionResult : int {
        Success = 0,
        Fail    = 1,
        Unknown = 2,
    };

    using ProgressCallback = std::function<void(float)>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldConverter() = default;

    virtual ::brstd::shared_future<void> addBlob(std::string const&, ::Legacy::WorldConverterBlobType, std::vector<uchar>&&) = 0;

    virtual ::brstd::future<Legacy::WorldConversionReport> complete() = 0;

    virtual void setEstimatedBlobCount(ulong);

    virtual void setBlobNames(std::vector<std::string> const&);
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setEstimatedBlobCount(ulong);

    MCNAPI void $setBlobNames(std::vector<std::string> const&);
    // NOLINTEND
};

} // namespace Legacy
