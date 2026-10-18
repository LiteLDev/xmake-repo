#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/resources/InvalidPacks.h"
#include "mc/resources/repository_loading/PackModifications.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace RepositoryLoading {

struct ModificationTaskData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::RepositoryLoading::PackModifications const> mModifications;
    ::ll::TypedStorage<8, 24, ::ContentIdentity const>                      mCurrentPremiumWorldTemplateIdentity;
    ::ll::TypedStorage<8, 96, ::InvalidPacks>                               mInvalid;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnkd5927b;
    ::ll::UntypedStorage<8, 24> mUnkb8ebed;
    ::ll::UntypedStorage<8, 96> mUnk71e762;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ModificationTaskData& operator=(ModificationTaskData const&);
    ModificationTaskData(ModificationTaskData const&);
    ModificationTaskData();
#endif // @header-generator platform
};

} // namespace RepositoryLoading
