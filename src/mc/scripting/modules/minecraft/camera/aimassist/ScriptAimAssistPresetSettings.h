#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/camera/aimassist/ScriptAimAssistPresetExclusionData.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_120 { struct CameraAimAssistPresetDefinition; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistPresetSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                  mIdentifier;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>>                 mItemSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                                mIdentifier;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>>           mItemSettings;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ScriptModuleMinecraft::ScriptAimAssistPresetExclusionData> mExcludedTargets;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>>                      mLiquidTargetingItems;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                   mDefaultItemSettings;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                   mHandSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                mLiquidTargetingItems;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                               mDefaultItemSettings;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                               mHandSettings;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptAimAssistPresetSettings();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<std::string>> _getExcludedBlockTagTargets() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::std::string>> _getExcludedBlockTagTargets() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<std::string>> _getExcludedBlockTargets() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::std::string>> _getExcludedBlockTargets() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<std::string>> _getExcludedEntityTargets() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::std::string>> _getExcludedEntityTargets() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<std::string>> _getExcludedEntityTypeFamilyTargets() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::std::string>> _getExcludedEntityTypeFamilyTargets() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<std::string>> _getLiquidTargetingItems() const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::vector<::std::string>> _getLiquidTargetingItems() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setExcludedBlockTagTargets(std::optional<std::vector<std::string>>);
#else // @header-generator platform
    MCAPI void setExcludedBlockTagTargets(::std::optional<::std::vector<::std::string>> blockTagTargets);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setExcludedBlockTargets(std::optional<std::vector<std::string>>);
#else // @header-generator platform
    MCAPI void setExcludedBlockTargets(::std::optional<::std::vector<::std::string>> blockTargets);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setExcludedEntityTargets(std::optional<std::vector<std::string>>);
#else // @header-generator platform
    MCAPI void setExcludedEntityTargets(::std::optional<::std::vector<::std::string>> entityTargets);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setExcludedEntityTypeFamilyTargets(std::optional<std::vector<std::string>>);
#else // @header-generator platform
    MCAPI void
    setExcludedEntityTypeFamilyTargets(::std::optional<::std::vector<::std::string>> entityTypeFamilyTargets);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLiquidTargetingItems(std::optional<std::vector<std::string>>);

    MCNAPI ~ScriptAimAssistPresetSettings();
#else // @header-generator platform
    MCAPI void setLiquidTargetingItems(::std::optional<::std::vector<::std::string>> items);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
