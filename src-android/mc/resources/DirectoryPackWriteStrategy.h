#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackWriteStrategy.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

class DirectoryPackWriteStrategy : public ::PackWriteStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mPackPath;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackWriteStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DirectoryPackWriteStrategy();

    virtual void writeAsset(::PackWriteStrategy::FileName, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $writeAsset(::PackWriteStrategy::FileName, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
