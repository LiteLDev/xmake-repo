#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptAimAssistPresetExclusionData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mBlocks;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mActors;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mBlockTags;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mEntityTypeFamilies;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mBlocks;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mActors;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mBlockTags;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mEntityTypeFamilies;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
