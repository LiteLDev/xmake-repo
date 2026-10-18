#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class MinEngineVersion;
class ResourcePackManager;
class VolumeComponentFactory;
#else // @header-generator platform
#endif // @header-generator platform
struct VolumeDefinition;
// clang-format on

class VolumeDefinitionGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<VolumeDefinition>>> mVolumeDefinitions;
    ::ll::UntypedStorage<8, 24>                                                                    mComponentFactory;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk13b3e3;
    ::ll::UntypedStorage<8, 24> mUnk66e645;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    VolumeDefinitionGroup& operator=(VolumeDefinitionGroup const&);
    VolumeDefinitionGroup(VolumeDefinitionGroup const&);
#endif // @header-generator platform
    VolumeDefinitionGroup();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::VolumeDefinition const* tryGetVolumeDefinition(std::string const&) const;
#else // @header-generator platform
    MCNAPI ::VolumeDefinition const* tryGetVolumeDefinition(::std::string const& identifier) const;
#endif // @header-generator platform
    // NOLINTEND
};
