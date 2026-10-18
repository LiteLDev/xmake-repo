#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/PlatformBootstrap.h"

namespace Bedrock {

class PlatformBootstrap_Android : public ::Bedrock::PlatformBootstrap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 256, char[256]> mDataRoot;
    ::ll::TypedStorage<8, 8, ulong>       mDataRootLength;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlatformBootstrap_Android();

    virtual void initialize();

    virtual std::string_view getAssetRoot();

    virtual std::string_view getSaveDataRoot();

    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadAssetFile(char*, ulong, char const*, char*, ulong);

    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadDataFile(char*, ulong, char const*, char*, ulong);

    virtual ::Bedrock::PlatformBootstrap::SaveResult rawSaveDataFile(char const*, ulong, char const*, bool, char*, ulong);

    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadFromCustomRoot(char*, ulong, char const*, char*, ulong);

    virtual ::Bedrock::PlatformBootstrap::CreateDirectoryResult rawCreateDirectory(char const*, char*, ulong);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI std::string_view $getAssetRoot();

    MCNAPI std::string_view $getSaveDataRoot();

    MCNAPI ::Bedrock::PlatformBootstrap::LoadResult $rawLoadAssetFile(char*, ulong, char const*, char*, ulong);

    MCNAPI ::Bedrock::PlatformBootstrap::LoadResult $rawLoadDataFile(char*, ulong, char const*, char*, ulong);

    MCNAPI ::Bedrock::PlatformBootstrap::SaveResult
    $rawSaveDataFile(char const*, ulong, char const*, bool, char*, ulong);

    MCNAPI ::Bedrock::PlatformBootstrap::LoadResult $rawLoadFromCustomRoot(char*, ulong, char const*, char*, ulong);

    MCNAPI ::Bedrock::PlatformBootstrap::CreateDirectoryResult $rawCreateDirectory(char const*, char*, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
