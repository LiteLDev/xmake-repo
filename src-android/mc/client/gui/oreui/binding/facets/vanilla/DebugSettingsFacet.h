#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/BiomeData.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class WorldSettingsProvider_DEPRECATED; }
// clang-format on

namespace OreUI {

class DebugSettingsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::DebugSettingsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mIsDirty;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::BiomeData>>                            mBiomes;
    ::ll::TypedStorage<1, 1, bool>                                                      mEnableGameVersionOverride;
    ::ll::TypedStorage<8, 24, std::string>                                              mDefaultGameVersion;
    ::ll::TypedStorage<8, 24, std::string>                                              mTypedGameVersion;
    ::ll::TypedStorage<1, 1, bool>                                                      mEnableSpawnBiome;
    ::ll::TypedStorage<4, 4, int>                                                       mLocalSpawnBiomeId;
    ::ll::TypedStorage<4, 4, int>                                                       mLocalDimensionId;
    ::ll::TypedStorage<1, 1, bool>                                                      mEnableBiomeOverride;
    ::ll::TypedStorage<4, 4, int>                                                       mLocalBiomeOverrideId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::WorldSettingsProvider_DEPRECATED>> mWorldSettingsProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugSettingsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebugSettingsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DebugSettingsFacet(std::shared_ptr<OreUI::WorldSettingsProvider_DEPRECATED>);

    MCNAPI void _setGameVersion(std::string const&);

    MCNAPI int getBiomeOverride() const;

    MCNAPI bool getEnableGameVersionOverride() const;

    MCNAPI bool getFlatNether() const;

    MCNAPI std::string const& getGameVersionOverride() const;

    MCNAPI int getSpawnBiome() const;

    MCNAPI int getSpawnDimension() const;

    MCNAPI bool isEnableBiomeOverride() const;

    MCNAPI bool isEnableSpawnBiome() const;

    MCNAPI void setBiomeOverride(int);

    MCNAPI void setEnableBiomeOverride(bool);

    MCNAPI void setEnableGameVersionOverride(bool);

    MCNAPI void setEnableSpawnBiome(bool);

    MCNAPI void setFlatNether(bool);

    MCNAPI void setGameVersionOverride(std::string const&);

    MCNAPI void setSpawnBiome(int);

    MCNAPI void setSpawnDimension(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[22]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<OreUI::WorldSettingsProvider_DEPRECATED>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
