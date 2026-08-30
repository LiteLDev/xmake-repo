#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WorldPackHistory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                             mPackIdVersion;
    ::ll::TypedStorage<8, 24, std::string>                                  mUnlocalizedName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mLocalizedNames;
    ::ll::TypedStorage<4, 4, int>                                           mSubpackCount;
    ::ll::TypedStorage<1, 1, bool>                                          mCanBeRedownloaded;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                  mSourceUUID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldPackHistory(::WorldPackHistory const&);

    MCNAPI void setCanBeRedownloaded(bool);

    MCNAPI void setLocalizedNames(std::unordered_map<std::string, std::string>);

    MCNAPI void setPackIdVersion(::PackIdVersion const&);

    MCNAPI void setSourceUUID(::mce::UUID const&);

    MCNAPI void setSubpackCount(int);

    MCNAPI void setUnlocalizedName(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldPackHistory const&);
    // NOLINTEND
};
