#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/entity/components/FogCommandSettings.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct FogCommandSettings;
#endif // @header-generator platform
// clang-format on

class FogCommandComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<FogCommandSettings>> mFogStack;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::FogCommandSettings>> mFogStack;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FogCommandComponent& operator=(FogCommandComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getFogSettingsStack() const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getFogSettingsStack() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getUserProvidedIds() const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getUserProvidedIds() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> popFogSetting(std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI ::std::optional<::std::string> popFogSetting(::std::optional<::std::string> const& userProvidedId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<uchar> pushFogSetting(std::string const&, std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI ::std::optional<uchar>
    pushFogSetting(::std::string const& fogId, ::std::optional<::std::string> const& userProvidedId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool removeFogSettings(std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI bool removeFogSettings(::std::optional<::std::string> const& userProvidedId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setFogSettingsStack(std::vector<std::string> const&, std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI bool setFogSettingsStack(
        ::std::vector<::std::string> const&   fogIds,
        ::std::optional<::std::string> const& userProvidedId
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isValidIdentifier(std::string const&);
#else // @header-generator platform
    MCAPI static bool isValidIdentifier(::std::string const& format);
#endif // @header-generator platform
    // NOLINTEND
};
