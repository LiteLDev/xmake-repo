#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace RepositoryLoading {

struct LoadTaskData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<RepositoryPacks>>  mPacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSourceReport>> mPackSourceReport;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>            mManifestFactory;
    ::ll::UntypedStorage<8, 24>                                 mKeyProvider;
    ::ll::TypedStorage<8, 8, ::PackSource*>                     mPackSource;
    ::ll::TypedStorage<8, 8, ::PackSource*>                     mPremiumWorldTemplatePackSource;
    ::ll::UntypedStorage<8, 24>                                 mCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadTaskData& operator=(LoadTaskData const&);
    LoadTaskData(LoadTaskData const&);
    LoadTaskData();
};

} // namespace RepositoryLoading
