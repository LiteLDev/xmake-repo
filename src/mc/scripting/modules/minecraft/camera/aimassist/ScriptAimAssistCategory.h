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
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistCategory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 24, std::string>                  mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 32, ::std::string>                  mName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptAimAssistCategory();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const* _getCategoryDefinition() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const* _getCategoryDefinition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::unordered_map<std::string, int>> getBlockPriorities() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::unordered_map<::std::string, int>> getBlockPriorities() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::unordered_map<std::string, int>, Scripting::EngineError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::unordered_map<::std::string, int>, ::Scripting::EngineError>
#endif // @header-generator platform
    getBlockTagPriorities() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<int> getDefaultBlockPriority() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<int> getDefaultBlockPriority() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<int> getDefaultEntityPriority() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<int> getDefaultEntityPriority() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::unordered_map<std::string, int>> getEntityPriorities() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::unordered_map<::std::string, int>> getEntityPriorities() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::unordered_map<std::string, int>, Scripting::EngineError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::unordered_map<::std::string, int>, ::Scripting::EngineError>
#endif // @header-generator platform
    getEntityTypeFamilyPriorities() const;
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
