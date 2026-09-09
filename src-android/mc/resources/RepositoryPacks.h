#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/RepositoryPackTuple.h"

// auto generated forward declare list
// clang-format off
class Pack;
class ResourceLocation;
class ResourcePack;
class SemVersion;
struct PackIdVersion;
namespace mce { class UUID; }
// clang-format on

class RepositoryPacks {
public:
    // RepositoryPacks inner types define
    using Iterator = RepositoryPackTuple*;

    using ConstIterator = const RepositoryPackTuple*;

    using PackTuple = ::RepositoryPackTuple;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<RepositoryPackTuple>> mAllResourcePacks;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoryPacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<ResourcePack> getResourcePackForPackId(::PackIdVersion const&) const;
    // NOLINTEND
};
