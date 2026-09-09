#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IDlcBatchModel;
struct PackIdVersion;
// clang-format on

class IDlcBatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDlcBatcher() = default;

    virtual ::IDlcBatchModel& getDlcBatchModel(std::vector<PackIdVersion> const&) = 0;

    virtual ::IDlcBatchModel& getDlcBatchModel(std::vector<std::string> const&) = 0;

    virtual ::IDlcBatchModel& getDlcBatchModel(std::vector<DlcId> const&) = 0;
    // NOLINTEND
};
