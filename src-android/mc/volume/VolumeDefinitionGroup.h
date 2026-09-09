#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class ResourcePackManager;
class VolumeComponentFactory;
struct VolumeDefinition;
// clang-format on

class VolumeDefinitionGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<VolumeDefinition>>> mVolumeDefinitions;
    ::ll::UntypedStorage<8, 24>                                                                    mComponentFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeDefinitionGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::VolumeDefinition const* tryGetVolumeDefinition(std::string const&) const;
    // NOLINTEND
};
