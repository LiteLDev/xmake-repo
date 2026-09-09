#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/secure_storage/SecureStorage.h"

class MemorySecureStorage : public ::SecureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mUnSecureStorage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemorySecureStorage() = default;

    virtual bool add(std::string const&, std::string const&);

    virtual bool addOrUpdate(std::string const&, std::string const&);

    virtual bool remove(std::string const&);

    virtual bool get(std::string const&, std::string&);
    // NOLINTEND
};
