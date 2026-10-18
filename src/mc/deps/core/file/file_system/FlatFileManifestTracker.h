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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>                                                               mManifestsLock;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<Core::FlatFileManifest>>> mManifestMap;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                                                    mManifestNames;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnkfd0579;
    ::ll::UntypedStorage<8, 64> mUnkbf53ea;
    ::ll::UntypedStorage<8, 16> mUnk3b8242;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FlatFileManifestTracker& operator=(FlatFileManifestTracker const&);
    FlatFileManifestTracker(FlatFileManifestTracker const&);
    FlatFileManifestTracker();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<const Core::FlatFileManifest> loadManifest(::Core::PathView);
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::Core::FlatFileManifest const> loadManifest(::Core::PathView manifestPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void unloadAllManifests();
#else // @header-generator platform
    MCNAPI bool manifestExists(::Core::PathView manifestPath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~FlatFileManifestTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI bool tryUnloadManifest(::Core::PathView manifestPath);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
