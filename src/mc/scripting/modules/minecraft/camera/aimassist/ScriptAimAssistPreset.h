#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace SharedTypes::v1_21_120 { struct CameraAimAssistPresetDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistPreset {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 24, std::string>                  mIdentifier;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 32, ::std::string>                  mIdentifier;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptAimAssistPreset();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const* _getPresetDefinition() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const* _getPresetDefinition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::optional<std::string>> getDefaultItemSettings() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getDefaultItemSettings() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::vector<std::string>, Scripting::EngineError> getExcludedBlockTagTargets() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::Scripting::EngineError>
    getExcludedBlockTagTargets() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::vector<std::string>> getExcludedBlockTargets() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getExcludedBlockTargets() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::vector<std::string>> getExcludedEntityTargets() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getExcludedEntityTargets() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::vector<std::string>, Scripting::EngineError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::Scripting::EngineError>
#endif // @header-generator platform
    getExcludedEntityTypeFamilyTargets() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::optional<std::string>> getHandSettings() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHandSettings() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::vector<std::string>> getLiquidTargetingItems() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getLiquidTargetingItems() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
