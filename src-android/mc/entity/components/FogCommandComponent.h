#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/FogCommandSettings.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class FogCommandComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<FogCommandSettings>> mFogStack;
    // NOLINTEND

public:
    // prevent constructor by default
    FogCommandComponent& operator=(FogCommandComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI std::vector<std::string> getFogSettingsStack() const;

    MCNAPI std::vector<std::string> getUserProvidedIds() const;

    MCNAPI std::optional<std::string> popFogSetting(std::optional<std::string> const&);

    MCNAPI std::optional<uchar> pushFogSetting(std::string const&, std::optional<std::string> const&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool removeFogSettings(std::optional<std::string> const&);

    MCNAPI bool setFogSettingsStack(std::vector<std::string> const&, std::optional<std::string> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidIdentifier(std::string const&);
    // NOLINTEND
};
