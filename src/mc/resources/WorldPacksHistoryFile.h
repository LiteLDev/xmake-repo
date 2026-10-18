#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/WorldPackHistory.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class WorldPacksHistoryFile {
public:
    // WorldPacksHistoryFile inner types define
    enum class ParseResult : int {
        InvalidArrayOfPacks = 0,
        InvalidPack         = 1,
        Success             = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<WorldPackHistory>> mPacks;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkd187cb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPacksHistoryFile& operator=(WorldPacksHistoryFile const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldPacksHistoryFile(WorldPacksHistoryFile const&);
    WorldPacksHistoryFile();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI ::WorldPacksHistoryFile::ParseResult initializeFromJson(::Json::Value const& value);

    MCNAPI void removePack(::PackIdVersion const& packId);

    MCNAPI ::Json::Value toJsonValue() const;

#endif // @header-generator platform
    MCNAPI ~WorldPacksHistoryFile();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
