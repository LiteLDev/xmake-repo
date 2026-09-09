#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
// clang-format on

class MolangPackSettingsCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::variant<bool, float, HashedString>>> mNameValueMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MolangPackSettingsCache(std::vector<PackInstance> const&);

    MCNAPI void _addToMap(std::string const&, std::variant<float, bool, std::string> const&);

    MCNAPI void _initFromPackStack(std::vector<PackInstance> const&);

    MCNAPI void updatePackSetting(std::string const&, std::variant<float, bool, std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<PackInstance> const&);
    // NOLINTEND
};
