#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FlatFileManifest; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FlatFileManifestTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                                               mManifestsLock;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<Core::FlatFileManifest>>> mManifestMap;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                                                    mManifestNames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<const Core::FlatFileManifest> loadManifest(::Core::PathView);

    MCNAPI void unloadAllManifests();

    MCNAPI ~FlatFileManifestTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
