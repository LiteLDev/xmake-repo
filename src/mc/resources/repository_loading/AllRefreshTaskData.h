#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

namespace RepositoryLoading {

struct AllRefreshTaskData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::RepositoryLoading::LoadTaskData>  mLoadTaskData;
    ::ll::TypedStorage<8, 96, ::InvalidPacks>                     mInvalidPacks;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                  mCurrentPremiumWorldTemplateIdentity;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RepositorySources>> mSources;
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>                mPackSourceFactory;
    ::ll::TypedStorage<8, 32, ::RepositoryLoading::VanillaPacks>  mVanillaPacks;
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                        mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPackIOProvider>>    mIO;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 88> mUnk1025e3;
    ::ll::UntypedStorage<8, 96> mUnkf7544f;
    ::ll::UntypedStorage<8, 24> mUnk41be52;
    ::ll::UntypedStorage<8, 16> mUnk735dfb;
    ::ll::UntypedStorage<8, 8>  mUnk205863;
    ::ll::UntypedStorage<8, 32> mUnk41d1c7;
    ::ll::UntypedStorage<8, 8>  mUnk5c54f9;
    ::ll::UntypedStorage<8, 8>  mUnkb644cb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AllRefreshTaskData& operator=(AllRefreshTaskData const&);
    AllRefreshTaskData(AllRefreshTaskData const&);
    AllRefreshTaskData();
};

} // namespace RepositoryLoading
