#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistCategorySettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                          mName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mEntityPriorities;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mBlockPriorities;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mBlockTagPriorities;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mEntityTypeFamilyPriorities;
    ::ll::TypedStorage<4, 4, int>                                   mDefaultEntityPriority;
    ::ll::TypedStorage<4, 4, int>                                   mDefaultBlockPriority;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mEntityPriorities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mBlockPriorities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mBlockTagPriorities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mEntityTypeFamilyPriorities;
    ::ll::TypedStorage<4, 4, int>                                       mDefaultEntityPriority;
    ::ll::TypedStorage<4, 4, int>                                       mDefaultBlockPriority;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptAimAssistCategorySettings();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<std::string, int> getBlockPriorities() const;
#else // @header-generator platform
    MCAPI ::std::unordered_map<::std::string, int> getBlockPriorities() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<std::string, int> getBlockTagPriorities() const;
#else // @header-generator platform
    MCAPI ::std::unordered_map<::std::string, int> getBlockTagPriorities() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<std::string, int> getEntityPriorities() const;
#else // @header-generator platform
    MCAPI ::std::unordered_map<::std::string, int> getEntityPriorities() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<std::string, int> getEntityTypeFamilyPriorities() const;
#else // @header-generator platform
    MCAPI ::std::unordered_map<::std::string, int> getEntityTypeFamilyPriorities() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBlockPriorities(std::unordered_map<std::string, int>);
#else // @header-generator platform
    MCAPI void setBlockPriorities(::std::unordered_map<::std::string, int> blockPriorities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBlockTagPriorities(std::unordered_map<std::string, int>);
#else // @header-generator platform
    MCAPI void setBlockTagPriorities(::std::unordered_map<::std::string, int> blockTagPriorities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setEntityPriorities(std::unordered_map<std::string, int>);
#else // @header-generator platform
    MCAPI void setEntityPriorities(::std::unordered_map<::std::string, int> entityPriorities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setEntityTypeFamilyPriorities(std::unordered_map<std::string, int>);

    MCNAPI ~ScriptAimAssistCategorySettings();
#else // @header-generator platform
    MCAPI void setEntityTypeFamilyPriorities(::std::unordered_map<::std::string, int> entityTypeFamilyPriorities);
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
