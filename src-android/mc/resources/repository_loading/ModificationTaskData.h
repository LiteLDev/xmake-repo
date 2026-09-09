#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/resources/InvalidPacks.h"
#include "mc/resources/repository_loading/PackModifications.h"

namespace RepositoryLoading {

struct ModificationTaskData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::RepositoryLoading::PackModifications const> mModifications;
    ::ll::TypedStorage<8, 24, ::ContentIdentity const>                      mCurrentPremiumWorldTemplateIdentity;
    ::ll::TypedStorage<8, 96, ::InvalidPacks>                               mInvalid;
    // NOLINTEND
};

} // namespace RepositoryLoading
