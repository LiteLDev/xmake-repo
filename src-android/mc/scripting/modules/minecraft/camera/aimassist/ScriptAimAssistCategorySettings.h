#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistCategorySettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                          mName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mEntityPriorities;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mBlockPriorities;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mBlockTagPriorities;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mEntityTypeFamilyPriorities;
    ::ll::TypedStorage<4, 4, int>                                   mDefaultEntityPriority;
    ::ll::TypedStorage<4, 4, int>                                   mDefaultBlockPriority;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistCategorySettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unordered_map<std::string, int> getBlockPriorities() const;

    MCNAPI std::unordered_map<std::string, int> getBlockTagPriorities() const;

    MCNAPI std::unordered_map<std::string, int> getEntityPriorities() const;

    MCNAPI std::unordered_map<std::string, int> getEntityTypeFamilyPriorities() const;

    MCNAPI void setBlockPriorities(std::unordered_map<std::string, int>);

    MCNAPI void setBlockTagPriorities(std::unordered_map<std::string, int>);

    MCNAPI void setEntityPriorities(std::unordered_map<std::string, int>);

    MCNAPI void setEntityTypeFamilyPriorities(std::unordered_map<std::string, int>);

    MCNAPI ~ScriptAimAssistCategorySettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
