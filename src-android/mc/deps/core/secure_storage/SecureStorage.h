#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

class SecureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mSettingsPath;
    // NOLINTEND

public:
    // prevent constructor by default
    SecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SecureStorage();

    virtual bool add(std::string const&, std::string const&) = 0;

    virtual bool addOrUpdate(std::string const&, std::string const&) = 0;

    virtual bool remove(std::string const&) = 0;

    virtual bool get(std::string const&, std::string&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
