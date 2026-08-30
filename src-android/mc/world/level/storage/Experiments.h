#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"
#include "mc/world/level/storage/ExperimentStorage.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class Experiments : public ::ExperimentStorage {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool BetaApis() const;

    MCNAPI bool ExperimentalCreatorCameras() const;

    MCNAPI bool UpcomingCreatorFeatures() const;

    MCNAPI bool VillagerTradesRebalance() const;

    MCNAPI bool VoxelShapes() const;

    MCNAPI bool Y2026Drop3() const;

    MCNAPI void clear();

    MCNAPI std::string getExperimentsActiveAsJSONList() const;

    MCNAPI std::vector<std::string> getExperimentsActiveForTelemetry() const;

    MCNAPI void getTagData(::CompoundTag const&);

    MCNAPI bool isExperimentEnabled(::AllExperiments) const;

    MCNAPI void setExperimentEnabled(::AllExperiments, bool);

    MCNAPI void setTagData(::CompoundTag&) const;

    MCNAPI bool shouldShowAsExperimentalLevel() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::gsl::span<const std::string> getAlwaysOnNames();

    MCNAPI static std::string const& getExperimentTextID(::AllExperiments);

    MCNAPI static ::gsl::span<const std::string> getToggleNames();

    MCNAPI static ::gsl::span<const std::string> getToggleTextIds();
    // NOLINTEND
};
