#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class PackManifestFactory;
class PackSource;
class PackSourceReport;
class RepositoryPacks;
namespace PackCommand { class IPackCommandPipeline; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace RepositoryLoading {

struct LoadTaskData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<RepositoryPacks>>  mPacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSourceReport>> mPackSourceReport;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>            mManifestFactory;
    ::ll::UntypedStorage<8, 24>                                 mKeyProvider;
    ::ll::TypedStorage<8, 8, ::PackSource*>                     mPackSource;
    ::ll::TypedStorage<8, 8, ::PackSource*>                     mPremiumWorldTemplatePackSource;
    ::ll::UntypedStorage<8, 24>                                 mCommands;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkca2a0f;
    ::ll::UntypedStorage<8, 8>  mUnk1a6566;
    ::ll::UntypedStorage<8, 8>  mUnkbc3885;
    ::ll::UntypedStorage<8, 24> mUnk262e36;
    ::ll::UntypedStorage<8, 8>  mUnk543e5c;
    ::ll::UntypedStorage<8, 8>  mUnk97bde5;
    ::ll::UntypedStorage<8, 24> mUnk8a892c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LoadTaskData& operator=(LoadTaskData const&);
    LoadTaskData(LoadTaskData const&);
    LoadTaskData();
};

} // namespace RepositoryLoading
