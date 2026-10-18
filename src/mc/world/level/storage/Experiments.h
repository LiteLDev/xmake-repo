#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/storage/AllExperiments.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/AllExperiments.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/storage/ExperimentStorage.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class Experiments : public ::ExperimentStorage {
public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    LLNDAPI bool isExperimentEnabled(AllExperiments experiment) const;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::span<const std::string> getAlwaysOnNames();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _shouldShowAsExperimentalLevel(
        ::std::vector<bool> const&       experimentData,
        ::gsl::span<::std::string const> toggleNames
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& getExperimentTextID(::AllExperiments);
#else // @header-generator platform
    MCAPI ::std::string getExperimentsActiveAsJSONList() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::span<const std::string> getToggleNames();
#else // @header-generator platform
    MCAPI void getTagData(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::gsl::span<const std::string> getToggleTextIds();
#else // @header-generator platform
    MCAPI void setTagData(::CompoundTag& tag) const;

#ifdef LL_PLAT_C
    MCAPI bool shouldShowAsExperimentalLevel() const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};
