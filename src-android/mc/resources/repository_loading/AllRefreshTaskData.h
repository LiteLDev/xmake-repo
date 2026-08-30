#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/resources/InvalidPacks.h"
#include "mc/resources/repository_loading/LoadTaskData.h"
#include "mc/resources/repository_loading/VanillaPacks.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
class PackSourceFactory;
class RepositorySources;
class TaskGroup;
// clang-format on

namespace RepositoryLoading {

struct AllRefreshTaskData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::RepositoryLoading::LoadTaskData>  mLoadTaskData;
    ::ll::TypedStorage<8, 96, ::InvalidPacks>                     mInvalidPacks;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                  mCurrentPremiumWorldTemplateIdentity;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RepositorySources>> mSources;
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>                mPackSourceFactory;
    ::ll::TypedStorage<8, 32, ::RepositoryLoading::VanillaPacks>  mVanillaPacks;
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                        mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPackIOProvider>>    mIO;
    // NOLINTEND

public:
    // prevent constructor by default
    AllRefreshTaskData& operator=(AllRefreshTaskData const&);
    AllRefreshTaskData(AllRefreshTaskData const&);
    AllRefreshTaskData();
};

} // namespace RepositoryLoading
