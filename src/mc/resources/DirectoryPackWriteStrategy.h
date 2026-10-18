#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/PackWriteStrategy.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class DirectoryPackWriteStrategy : public ::PackWriteStrategy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mPackPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk59f46f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DirectoryPackWriteStrategy& operator=(DirectoryPackWriteStrategy const&);
    DirectoryPackWriteStrategy(DirectoryPackWriteStrategy const&);
#endif // @header-generator platform
    DirectoryPackWriteStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DirectoryPackWriteStrategy();

    virtual void writeAsset(::PackWriteStrategy::FileName, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void writeAsset(::PackWriteStrategy::FileName path, ::std::string const& fileContent) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeAsset(::PackWriteStrategy::FileName, std::string const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $writeAsset(::PackWriteStrategy::FileName path, ::std::string const& fileContent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
